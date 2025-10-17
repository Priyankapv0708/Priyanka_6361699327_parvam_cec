import React from "react";
import { Greeting } from "./components/Propert";

export const Objects = () => {
  const students = [
    { id: 1,name:"John", age: 22, course: "React"},
    { id: 2,name:"Dustin", age: 21, course: "Node.js"},
    { id: 3,name:"Steven",age: 24,course: "JavaScript"},
  ];
  // const students = ["Jhon","Mary","Alex","Sara","Sujan"];
  // const [isloggedIn, setIsLoggedIn] = useState(false);
  return (
    <>
      {/* <dev>
        <h2>Conditional rendering...</h2>
        {isloggedIn ? (
          <h3>Welcome back , user</h3>
        ) : (
          <h3>Please log in to continue..</h3>
        )}

        <button onClick={() => setIsLoggedIn(!isloggedIn)}>
          {isloggedIn ? "LogOut" : "Login"}
        </button>
      </dev> */}
      
{/*
        <div>
            <h4>List rendering...</h4>
            <ul>
                {students.map((name,index) => (
                  <li key={index}>
                    {index + 1}.{name}
                  </li>
                ))}
              </ul>
            </div> */}

        <div>
          <Greeting name="Priya" age="19"></Greeting>
        </div>
        <div>
            {students.map((student) => (
              <p>
                Name:{student.name} | Age:{student.age} | Course:{student.course}
              </p>
            ))}
          
        </div>
      </>
  );
};



export default Objects