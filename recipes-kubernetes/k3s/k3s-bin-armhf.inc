require k3s-bin.inc
SRC_URI = "https://github.com/rancher/k3s/releases/download/v${K3S_VERSION}/k3s-armhf;unpack=0;name=k3s;downloadfilename=k3s"
SRC_URI[k3s.sha256sum] = "e6791c0639ab87e11a3910c667653b4c5a6716f7d12b2eb79015633aa985992a"
