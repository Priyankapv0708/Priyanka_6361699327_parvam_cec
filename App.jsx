import { Link, NavLink, Route, Routes } from "react-router-dom";
import "./App.css";
import 'bootstrap/dist/css/bootstrap.min.css';
import { About } from "./components/About";
import { Skills } from "./components/Skills";
import { Projects } from "./components/Projects";
import { Experience } from "./components/Experience";
import { Contact } from "./components/Contact";



function App() {
    return (
        <>
        <div className='bg-dark min-vh-100 d-flex  p-3 overflow-hidden'>
            <div className="bg-black  flex-grow-1 rounded-3">
                <br></br>
              <div className="row text-light  ">
                <div className="col-1"></div>
                <div className="col-5 ">
                    <p class="fst-italic fs-1">solo</p>
                </div>
                <div className="col-5 bg-dark p-2 rounded-5">
                    <ul className="nav row ">
                        <a className="col-1"></a>
                        <li className="col-2">
                            <Link to="/" className="me-2">About</Link>
                        </li>
                        <li className="col-2">
                           <Link to="/" className="me-2">Skills</Link>
                           </li>
                        <li className="col-2">
                            <Link to="/projects" className="me-2">Projects</Link>
                        </li>
                        <li className="col-2">
                            <Link to="/experience" className="me-2" >Experience</Link>
                        </li>
                        <li className="col-2">
                           <Link to="/" className="me-2">Contact</Link>
                        </li>
                        <a className="col-1"></a>
                        </ul>
                                
                </div>
                <div className="col-1"></div>
              </div>
              <br></br>
              <br></br>

                <div className="row ">
                    <div className="col-1"></div>
                     <div className="col-10 ">
                        <div className="text-light">
                     <Routes>
                    <Route path="/" element={<About />}></Route>
                    <Route path="/experience" elements={<Experience />}></Route>
                    <Route path="/projects" element={<Projects />}></Route>
                    <Route path="/skills" elements={<Skills />}></Route>
                    <Route path="/contact" elements={<Contact />}></Route>
                    
                    </Routes>
                </div>
                     </div>
                     <div className="col-1"></div>
                    
                </div>
                
              

                
               
               
            </div>
        </div>
        
        
       
        </>
    )
}

export default App;