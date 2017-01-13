
###使用npm安装：
    npm install -g node-inspector

###需要通过浏览器连接到node-inspector，需要启动inspector服务：
    node-inspector &

###最后以debug模式运行node.js应用：
    node --debug app.js

通过URL http://127.0.0.1:8080/debug?port=5858 就可以进行调试
