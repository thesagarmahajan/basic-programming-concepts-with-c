# About exedel.ps1

I have created this file to let you delete all the .exe files once, which gets created while executing the code.

### Set Execution Policy to let the powershell script execute. 

Open powershell as Administrator and execute the following command
```powershell
    Set-ExecutionPolicy RemoteSigned
```
Once execution policy is set successfully then you can execute the exedel.ps1 powershell script whenever you want by navigating to the root directory and execution the script as given below.

```powershell
    ./exedel.ps1
```