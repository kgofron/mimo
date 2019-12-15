# Three components with React
- components
- JSX
- props

Install  Node.js (NPM is a package manager for javascript)
  - node --version  {v10.15.2}
  - npm --version

  apt install nodejs nmp

  # NVM - Node Version Manager
  curl -o- https://raw.githubusercontent.com/nvm-sh/nvm/v0.35.1/install.sh | bash
  nvm install node   {node v13.3.0 (npm v6.13.1)}
  nvm install --lts  {node v12.13.1 (npm v6.12.1)}
  

class Greet extends Components {
      render() {
      	       <div id="root">Hi there</div>
      }
}

ReactDOM.render((
        <Greet/>
), document.getElementById('root'));
