const express = require("express");
const router=express.Router();




                    //CREATE LEAD


router.post("/create", async(req,res)=>{
    try{

const { name, email, phone, address}= req.body;

if(! name || ! email || !phone || !address){
    return res.status(400).json({
        message:"all fields are required ",
        error:true,
    })
}

const checkEmail = await Lead.findByEmail(email); 

if(checkEmail){
    return res.status(400).json({
        message:"user already exists",
        error:true,
    })
}

const Leads = await Lead.create({
    name:name,
    email:email,
    phone:phone,
    address:address,
})

return res.status(200).json({
    message:"lead created successfully",
    error:false,
    data:Leads,
})


    }catch(err){
        return res.status(500).json({
            message:"internal server error",
            error:err.message,
        })
    }
})


// READ LEAD

router.get("/read", async(req,res)=>{
    try{

        const Leads = await Lead.findAll();
        
        return res.status(200).json({
            message:"lead fetch successfully",
            error:false,
            data:Leads,
        })

    }catch(err){
        return res.status(500).json({
            message:"internal server error",
            error:err.message,
        })
    }
})


//UPDATE LEAD

router.update("/update",async(req,res)=>{
    try{


        const {name, email, phone, address}= req.body;

        if(!name || !email || !phone || !address){
            return res.status(400).json({
                message:"all fields are required",
                error:true,
            })
        }

        chekcEmail= await Lead.findByEmail(email);

        if(!chekEmail){
            return res.status(400).json({
                message:"user not found",
                error:true,
            })
        }

        const updateLead= await Lead.update({
            name:name,
            email:email,
            phone:phone,
            address:address,
        })

        return res.status(200).json({
            message:"leadupdated successfully ",
            error:false,
            data:updateLead,

        })

    }catch(err){
        return res.status(500).json({
            message:"internal server error",
            error:true,
        })
    }
})


// DELETE LEAD

router.delete("/delete", async(req,res)=>{
    try{

        const {email}= req.body;

        if(!email){
            return res.status(400).json({
                message:"email is required",
                error:true,
            })
        }

        deleteLead= await Lead.findByEmail(email);

        if(!deleteLead){
            return res.status(400).json({
                message:"user not found",
                error:true,
            })
        }
        await Lead.delete({
            email:email,
        })

        return res.status(200).json({
            message:"lead deleted successfully",
            error:false,
        })
    }catch(err){
        return res.status(500).json({
            message:"internal server error",
            error:true,
        })
    }
})