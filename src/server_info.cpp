#include "server_info.h"

ServerInfo::ServerInfo(QWidget *parent) :
    QDialog(parent)
{
    setWindowTitle("Server Info");

    name = new QLabel(this);
    name->setToolTip("Name");
    fullName = new QLabel(this);
    fullName->setToolTip("Full name");
    description = new QLabel(this);
    description->setToolTip("Description");
    location = new QLabel(this);
    location->setToolTip("Location");
    coordinates = new QLabel(this);
    coordinates->setToolTip("Coordinates");
    URL = new QLabel(this);
    URL->setToolTip("URL");
    version = new QLabel(this);
    version->setToolTip("Version");
    DNSSECvalidation = new QLabel(this);
    DNSSECvalidation->setToolTip("DNSSEC validation");
    NoLogs = new QLabel(this);
    NoLogs->setToolTip("No Logs");
    Namecoin = new QLabel(this);
    Namecoin->setToolTip("Namecoin");
    ResolverAddress = new QLabel(this);
    ResolverAddress->setToolTip("Resolver Address");
    ProviderName = new QLabel(this);
    ProviderName->setToolTip("Provider Name");
    ProviderPublicKey = new QLabel(this);
    ProviderPublicKey->setToolTip("Provider Public Key");
    ProviderPublicKeyTXTrecord = new QLabel(this);
    ProviderPublicKeyTXTrecord->setToolTip("Provider Public Key TXT record");

    commonLayout = new QVBoxLayout(this);
    commonLayout->addWidget(name);
    commonLayout->addWidget(fullName);
    commonLayout->addWidget(description);
    commonLayout->addWidget(location);
    commonLayout->addWidget(coordinates);
    commonLayout->addWidget(URL);
    commonLayout->addWidget(version);
    commonLayout->addWidget(DNSSECvalidation);
    commonLayout->addWidget(NoLogs);
    commonLayout->addWidget(Namecoin);
    commonLayout->addWidget(ResolverAddress);
    commonLayout->addWidget(ProviderName);
    commonLayout->addWidget(ProviderPublicKey);
    commonLayout->addWidget(ProviderPublicKeyTXTrecord);
    setLayout(commonLayout);
}

void ServerInfo::setServerData(const QVariantMap &map)
{
    name->setText(map.value("Name").toString());
    fullName->setText(map.value("FullName").toString());
    description->setText(map.value("Description").toString());
    location->setText(map.value("Location").toString());
    coordinates->setText(map.value("Coordinates").toString());
    URL->setText(map.value("URL").toString());
    version->setText(map.value("Version").toString());
    DNSSECvalidation->setText(map.value("DNSSECvalidation").toString());
    NoLogs->setText(map.value("NoLogs").toString());
    Namecoin->setText(map.value("Namecoin").toString());
    ResolverAddress->setText(map.value("ResolverAddress").toString());
    ProviderName->setText(map.value("ProviderName").toString());
    ProviderPublicKey->setText(map.value("ProviderPublicKey").toString());
    ProviderPublicKeyTXTrecord->setText(map.value("ProviderPublicKeyTXTrecord").toString());
}
