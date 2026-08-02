const express = require("express");
const user= require("../modles/user");
const Router= express.Router();


Router.post("/register", async(req, res)=>{

try{
 const {username, email, password}= req.body;
    if(!username || ! email || !password){
        return res.status(400).json({
            message:"fill all of the inputs",
            error:true
        })
    }

    // check user already exists 
    const userExists = await user.findByEmail(email);

    if(userExists){
        return res.status(400).json({
            message:"user already exists",
            error:true,
        })
    } 
        else{

            hashPassword= await bcrypt.hash(password, 10);

            user.create({
              username:username,
              email:email,
              password:hashPassword
            })
        }

        return res.status(200).json({
            message:"user created successfully",
            error:false,
        })
}

catch(err){
    return res.status(500).json({
        messgae:"internal server error",
        error:true,
    })
}
   
})


Router.post("/login", async(req,res)=>{
    try{

        const {email, password}= req.body;

        if(!email || ! password){
            return res.status(400).json({
                message:"fill all of the inputs",
                error:true,
            })
        }
        const checkEmail= await user.findByEmail(email);
        if(!checkEmail){
            return res.status(400).json({
                message:"user not found",
                error:true,
            })
        }
        checkPass= await bcrypt.compare(password, checkEmail.password);
        if(!checkPass){
            return res.status(400).json({
                message:"invalid password",
                error:true,
            })
        }

        return res.status(200).json({
            message:"user login successfully",
            error:false,
        })




    }catch(err){
        return res.status(5000).json({
            message:"internal server error",
            error:true,
        })
    }
})

Router.update("/cahnge-password", async(req,res)=>{
    try{


        return res.status(200).json({
            message:"passwrod changed successfully",
            
        })
    }catch(err){
        return res.status(500).json({
            message:"internal server error",
            error:true,
        })
    }
})