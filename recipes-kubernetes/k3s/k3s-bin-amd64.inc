require k3s-bin.inc
SRC_URI = "https://github.com/rancher/k3s/releases/download/v${K3S_VERSION}/k3s;unpack=0;name=k3s;downloadfilename=k3s"
SRC_URI[k3s.sha256sum] = "3bb7dc2739a8f33b95bb4c0d63b568c27799036baaf376ba90680facdae1b37f"
