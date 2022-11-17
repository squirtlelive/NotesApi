
const express = require("express");
const app = express();
const noteRouter = require("./routes/noteRoutes");
const userRouter = require("./routes/userRoutes"); 
const cors = require("cors");
const mongoose = require("mongoose");
app.use(express.json());

app.use(cors());

app.use("/users", userRouter);
app.use("/note", noteRouter);

app.get("/", (req, res) =>{
    res.send("notesApi");
});
mongoose.connect("mongodb://127.0.0.1:27017/notesApi")
.then(()=>{
    app.listen(5000, ()=>{
        console.log("Server running on  5000");
    });
})
.catch((error)=>{
    console.log(error);
})



