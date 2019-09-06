This is the reference code for [wechaincoin](http://www.wechaincoin.org/) cryptocurrency.

* Official homepage: [wechaincoin](https://www.wechaincoin.info/)
* Official repository: [wechaincoin GitHub]( https://github.com/wechaincoin)
* Official Announcement thread: 
* Official Discord: [wechaincoin Discord]( https://discord.gg/mertrYb)
* Official Facebook: [wechaincoin Facebook]( https://www.facebook.com/wechaincoin)
* Official Twitter: [wechaincoin Twitter](https://twitter.com/WechainC)
* Official Telegram: [wechaincoin Telegram]( https://t.me/wechaincoin)
* Official Instagram: [wechaincoin Instagram]( https://www.instagram.com/wechaincoin/)
* Official Youtube: [wechaincoin Youtube]( https://www.youtube.com/channel/UCUDr6Lsv38PnwfYgYhV8MiA)
* Official Block explorer: [wechaincoin Block explorer]( http://31.220.56.249/


## wechaincoin Cryptocurrency

wechaincoin [WXTC] is an ASIC resistant CryptoNightLite V1 algorithm based cryptocurrency. Fast transactions & privacy make this coin perfect for rewarding your workers, co-workers and colleagues for a job well done.

SPECIFICATIONS 

Name: WeChain Coin.

Ticker: WXTC.

Algorithm: Cryptonight Lite V1.

Minig Protocol: Proof of Work (POW).

Total Supply: 150,000,000,000

Mining Supply CPU e GPU: 100,000,000,000

Premine: 50,000,000,000, Distributed to:

Capital Share: 30,000,000,000.

Social and Sustainable Destination: 15,000,000,000

Giveaways: 5,000,000,000

Reward per Block: 23,795 WXTC and decreasing.

Tempo de Bloco: 120 sec.

Emission Curve: 22.

Difficulty Adjustment: Varied.

Maturation Time: 10 Blocks.

Transaction Fee: 0.01 WXTC.

## How to compile

### Compile on Linux Ubuntu 16

**1. Install dependencies**

- run an update

``
sudo apt-get update
``

- get all dependencies

``
sudo apt-get install -y build-essential python-dev gcc g++ git cmake librocksdb-dev libboost-all-dev
``

**2. Get the coin**

``
git clone https://github.com/wechaincoin/wechaincoin/tree/master/src/wechaincoin_source-code.git wechaincoin-daemon
``

**3. CHMOD**

- navigate to:

``
cd wechaincoin-daemon/wechaincoin_source-code/external/rocksdb/build_tools ``

- execute the following commands:

``
chmod +x build_detect_platform
``

``
chmod +x version.sh
``

**4. Build executables**

- Navigate back to repo folder 

``
cd
``

``
cd wechaincoin-daemon
``

- prepare the build

``
mkdir build && cd $_
``

``
cmake ..
``

- Export flags

``
export CXXFLAGS="-std=gnu++11"
``

- Make/Build

``
make
``

_Your executables will be located in `build/src` folder._


### Compile on Linux Ubuntu 14

**1. Install dependencies**

- run an update

``
sudo apt-get update
``

- get all dependencies

``
sudo apt-get install -y build-essential python-dev git cmake libboost1.55-all-dev libgflags-dev libsnappy-dev zlib1g-dev libbz2-dev libgflags-dev libgflags2 gcc-4.8 g++-4.8
``

**2. Install RocksDB database (long compilation)**

``
git clone https://github.com/facebook/rocksdb.git
``

``
cd rocksdb
``

``
make all
``

**3. Get the coin**

``
cd
``

``
git clone https://github.com/wechaincoin/wechaincoin-node-daemon.git wechaincoin-daemon
``

**4. CHMOD**

- navigate to:

``
cd wechaincoin-daemon/external/rocksdb/build_tools
``

- execute the following commands:

``
chmod +x build_detect_platform
``

``
chmod +x version.sh
``

**5. Build executables (long compilation)**

- Navigate back to repo folder 

``
cd
``

``
cd wechaincoin-daemon
``

- prepare the build

``
mkdir build && cd $_
``

``
cmake ..
``

- Export flags

``
export CXXFLAGS="-std=gnu++11"
``

- Make/Build

``
make
``

### Compile on Windows 7/8/10

**1. Environment**

- Visual Studio 2017 Community Edition with desktop development with C++ and the VC++ v140 toolchain features selected
- Boost 1.59.0, with the installer for MSVC 14

**2. Build**

- From the start menu, open 'x64 Native Tools Command Prompt for vs2017'


``
cd <wechaincoin-daemon>
``

``
mkdir build
``

``
cd build
``


-  Set the PATH for Cmake:

``
set PATH="C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin";%PATH%
``

- Run Cmake:

``
cmake -G "Visual Studio 14 Win64" .. -DBOOST_ROOT=C:/local/boost_1_59_0
``

- Build:

``
MSBuild wechaincoin.sln /p:Configuration=Release /m
``

_Your binaries  will be located in `..\build\src\Release` folder._


### Compile on macOS High Sierra

**1. Dependencies**

- Download and install Xcode from App Store
- Open Xcode and download additional contents
- Download CMAKE for OSX: https://cmake.org/files/v3.10/cmake-3.10.3-Darwin-x86_64.dmg
- Copy the CMAKE app to Application folder
- Open CMAKE GUI first time, and close it afterwards
- Run this command in terminal for CMD tools:

- on newer devices

``
sudo "/Applications/CMake.app/Contents/bin/cmake-gui" --install
``

- older than 4 years

``
sudo "/Applications/CMake.app/Contents/bin/cmake-gui" --install=/path/to/bin
``

- install Homebrew if you haven’t already

``
/usr/bin/ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"
``

- install xCode CMD tools and install Xcode from app store:

``
xcode-select --install
``

- accept Xcode license

``
sudo xcode-select -s /Applications/Xcode.app/Contents/Developer
``

``
sudo xcodebuild -license accept
``

- install rocksdb

``
brew install rocksdb
``

- install boost

``
brew install boost
``

**2. Build**

``
cd
``

- get the source code

``
git clone https://github.com/wechaincoin/wechaincoin-node-daemon.git wechaincoin-daemon
``

- CHMOD

``
cd wechaincoin-daemon/external/rocksdb/build_tools
``

``
sudo chmod +x build_detectplatform
``

``
sudo chmod +x version.sh
``

- navigate back to source folder and run

``
mkdir build && cd $
``

``
sudo cmake -DBOOST_ROOT=/usr/local/include/boost ..
``

``
sudo make
``

_Your binaries  will be located in `..\build\src\Release` folder._

### Credits
Cryptonote Developers, Bytecoin Developers, Monero Developers, Forknote Project, TurtleCoin Developers

