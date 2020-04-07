require k3s-bin.inc
SRC_URI = "https://github.com/rancher/k3s/releases/download/v${K3S_VERSION}/k3s-arm64;unpack=0;name=k3s;downloadfilename=k3s \
           https://github.com/rancher/k3s/releases/download/v${K3S_VERSION}/k3s-airgap-images-arm64.tar;unpack=0;name=k3s-airgap"
SRC_URI[k3s.sha256sum] = "11334ae224dbb9a3e11f282de90591e81070052b7adf228f85e73c58bf31dda7"
SRC_URI[k3s-airgap.sha256sum] = "a711e0a5bcb816095e2b8016f658b6c3160c7d941b6beb9999eaa4f373b1b301"
