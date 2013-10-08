
#if !defined(KINSTARAPI_THOST_FTDCSTRUCT_H)
#define KINSTARAPI_THOST_FTDCSTRUCT_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "KSUserApiDataTypeEx.h"

namespace KingstarAPI
{

///��Ϣ�ַ�
struct CThostFtdcDisseminationField
{
	///����ϵ�к�
	TThostFtdcSequenceSeriesType	SequenceSeries;
	///���к�
	TThostFtdcSequenceNoType	SequenceNo;
};

///�û���¼����
struct CThostFtdcReqUserLoginField
{
	///������
	TThostFtdcDateType	TradingDay;
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TThostFtdcUserIDType	UserID;
	///����
	TThostFtdcPasswordType	Password;
	///�û��˲�Ʒ��Ϣ
	TThostFtdcProductInfoType	UserProductInfo;
	///�ӿڶ˲�Ʒ��Ϣ
	TThostFtdcProductInfoType	InterfaceProductInfo;
	///Э����Ϣ
	TThostFtdcProtocolInfoType	ProtocolInfo;
	///Mac��ַ
	TThostFtdcMacAddressType	MacAddress;
	///��̬����
	TThostFtdcPasswordType	OneTimePassword;
	///�ն�IP��ַ
	TThostFtdcIPAddressType	ClientIPAddress;
};

///�û���¼Ӧ��
struct CThostFtdcRspUserLoginField
{
	///������
	TThostFtdcDateType	TradingDay;
	///��¼�ɹ�ʱ��
	TThostFtdcTimeType	LoginTime;
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TThostFtdcUserIDType	UserID;
	///����ϵͳ����
	TThostFtdcSystemNameType	SystemName;
	///ǰ�ñ��
	TThostFtdcFrontIDType	FrontID;
	///�Ự���
	TThostFtdcSessionIDType	SessionID;
	///��󱨵�����
	TThostFtdcOrderRefType	MaxOrderRef;
	///������ʱ��
	TThostFtdcTimeType	SHFETime;
	///������ʱ��
	TThostFtdcTimeType	DCETime;
	///֣����ʱ��
	TThostFtdcTimeType	CZCETime;
	///�н���ʱ��
	TThostFtdcTimeType	FFEXTime;
};

///�û��ǳ�����
struct CThostFtdcUserLogoutField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TThostFtdcUserIDType	UserID;
};

///ǿ�ƽ���Ա�˳�
struct CThostFtdcForceUserLogoutField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TThostFtdcUserIDType	UserID;
};

///�ͻ�����֤����
struct CThostFtdcReqAuthenticateField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TThostFtdcUserIDType	UserID;
	///�û��˲�Ʒ��Ϣ
	TThostFtdcProductInfoType	UserProductInfo;
	///��֤��
	TThostFtdcAuthCodeType	AuthCode;
};

///�ͻ�����֤��Ӧ
struct CThostFtdcRspAuthenticateField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TThostFtdcUserIDType	UserID;
	///�û��˲�Ʒ��Ϣ
	TThostFtdcProductInfoType	UserProductInfo;
};

///�ͻ�����֤��Ϣ
struct CThostFtdcAuthenticationInfoField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TThostFtdcUserIDType	UserID;
	///�û��˲�Ʒ��Ϣ
	TThostFtdcProductInfoType	UserProductInfo;
	///��֤��Ϣ
	TThostFtdcAuthInfoType	AuthInfo;
	///�Ƿ�Ϊ��֤���
	TThostFtdcBoolType	IsResult;
};

///����ת�ʱ���ͷ
struct CThostFtdcTransferHeaderField
{
	///�汾�ţ�������1.0
	TThostFtdcVersionType	Version;
	///���״��룬����
	TThostFtdcTradeCodeType	TradeCode;
	///�������ڣ������ʽ��yyyymmdd
	TThostFtdcTradeDateType	TradeDate;
	///����ʱ�䣬�����ʽ��hhmmss
	TThostFtdcTradeTimeType	TradeTime;
	///������ˮ�ţ�N/A
	TThostFtdcTradeSerialType	TradeSerial;
	///�ڻ���˾���룬����
	TThostFtdcFutureIDType	FutureID;
	///���д��룬���ݲ�ѯ���еõ�������
	TThostFtdcBankIDType	BankID;
	///���з����Ĵ��룬���ݲ�ѯ���еõ�������
	TThostFtdcBankBrchIDType	BankBrchID;
	///����Ա��N/A
	TThostFtdcOperNoType	OperNo;
	///�����豸���ͣ�N/A
	TThostFtdcDeviceIDType	DeviceID;
	///��¼����N/A
	TThostFtdcRecordNumType	RecordNum;
	///�Ự��ţ�N/A
	TThostFtdcSessionIDType	SessionID;
	///�����ţ�N/A
	TThostFtdcRequestIDType	RequestID;
};

///�����ʽ�ת�ڻ�����TradeCode=202001
struct CThostFtdcTransferBankToFutureReqField
{
	///�ڻ��ʽ��˻�
	TThostFtdcAccountIDType	FutureAccount;
	///�����־
	TThostFtdcFuturePwdFlagType	FuturePwdFlag;
	///����
	TThostFtdcFutureAccPwdType	FutureAccPwd;
	///ת�˽��
	TThostFtdcMoneyType	TradeAmt;
	///�ͻ�������
	TThostFtdcMoneyType	CustFee;
	///���֣�RMB-����� USD-��Բ HKD-��Ԫ
	TThostFtdcCurrencyCodeType	CurrencyCode;
};

///�����ʽ�ת�ڻ�������Ӧ
struct CThostFtdcTransferBankToFutureRspField
{
	///��Ӧ����
	TThostFtdcRetCodeType	RetCode;
	///��Ӧ��Ϣ
	TThostFtdcRetInfoType	RetInfo;
	///�ʽ��˻�
	TThostFtdcAccountIDType	FutureAccount;
	///ת�ʽ��
	TThostFtdcMoneyType	TradeAmt;
	///Ӧ�տͻ�������
	TThostFtdcMoneyType	CustFee;
	///����
	TThostFtdcCurrencyCodeType	CurrencyCode;
};

///�ڻ��ʽ�ת��������TradeCode=202002
struct CThostFtdcTransferFutureToBankReqField
{
	///�ڻ��ʽ��˻�
	TThostFtdcAccountIDType	FutureAccount;
	///�����־
	TThostFtdcFuturePwdFlagType	FuturePwdFlag;
	///����
	TThostFtdcFutureAccPwdType	FutureAccPwd;
	///ת�˽��
	TThostFtdcMoneyType	TradeAmt;
	///�ͻ�������
	TThostFtdcMoneyType	CustFee;
	///���֣�RMB-����� USD-��Բ HKD-��Ԫ
	TThostFtdcCurrencyCodeType	CurrencyCode;
};

///�ڻ��ʽ�ת����������Ӧ
struct CThostFtdcTransferFutureToBankRspField
{
	///��Ӧ����
	TThostFtdcRetCodeType	RetCode;
	///��Ӧ��Ϣ
	TThostFtdcRetInfoType	RetInfo;
	///�ʽ��˻�
	TThostFtdcAccountIDType	FutureAccount;
	///ת�ʽ��
	TThostFtdcMoneyType	TradeAmt;
	///Ӧ�տͻ�������
	TThostFtdcMoneyType	CustFee;
	///����
	TThostFtdcCurrencyCodeType	CurrencyCode;
};

///��ѯ�����ʽ�����TradeCode=204002
struct CThostFtdcTransferQryBankReqField
{
	///�ڻ��ʽ��˻�
	TThostFtdcAccountIDType	FutureAccount;
	///�����־
	TThostFtdcFuturePwdFlagType	FuturePwdFlag;
	///����
	TThostFtdcFutureAccPwdType	FutureAccPwd;
	///���֣�RMB-����� USD-��Բ HKD-��Ԫ
	TThostFtdcCurrencyCodeType	CurrencyCode;
};

///��ѯ�����ʽ�������Ӧ
struct CThostFtdcTransferQryBankRspField
{
	///��Ӧ����
	TThostFtdcRetCodeType	RetCode;
	///��Ӧ��Ϣ
	TThostFtdcRetInfoType	RetInfo;
	///�ʽ��˻�
	TThostFtdcAccountIDType	FutureAccount;
	///�������
	TThostFtdcMoneyType	TradeAmt;
	///���п������
	TThostFtdcMoneyType	UseAmt;
	///���п�ȡ���
	TThostFtdcMoneyType	FetchAmt;
	///����
	TThostFtdcCurrencyCodeType	CurrencyCode;
};

///��ѯ���н�����ϸ����TradeCode=204999
struct CThostFtdcTransferQryDetailReqField
{
	///�ڻ��ʽ��˻�
	TThostFtdcAccountIDType	FutureAccount;
};

///��ѯ���н�����ϸ������Ӧ
struct CThostFtdcTransferQryDetailRspField
{
	///��������
	TThostFtdcDateType	TradeDate;
	///����ʱ��
	TThostFtdcTradeTimeType	TradeTime;
	///���״���
	TThostFtdcTradeCodeType	TradeCode;
	///�ڻ���ˮ��
	TThostFtdcTradeSerialNoType	FutureSerial;
	///�ڻ���˾����
	TThostFtdcFutureIDType	FutureID;
	///�ʽ��ʺ�
	TThostFtdcFutureAccountType	FutureAccount;
	///������ˮ��
	TThostFtdcTradeSerialNoType	BankSerial;
	///���д���
	TThostFtdcBankIDType	BankID;
	///���з����Ĵ���
	TThostFtdcBankBrchIDType	BankBrchID;
	///�����˺�
	TThostFtdcBankAccountType	BankAccount;
	///֤������
	TThostFtdcCertCodeType	CertCode;
	///���Ҵ���
	TThostFtdcCurrencyCodeType	CurrencyCode;
	///�������
	TThostFtdcMoneyType	TxAmount;
	///��Ч��־
	TThostFtdcTransferValidFlagType	Flag;
};

///��Ӧ��Ϣ
struct CThostFtdcRspInfoField
{
	///�������
	TThostFtdcErrorIDType	ErrorID;
	///������Ϣ
	TThostFtdcErrorMsgType	ErrorMsg;
};

///������
struct CThostFtdcExchangeField
{
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///����������
	TThostFtdcExchangeNameType	ExchangeName;
	///����������
	TThostFtdcExchangePropertyType	ExchangeProperty;
};

///��Ʒ
struct CThostFtdcProductField
{
	///��Ʒ����
	TThostFtdcInstrumentIDType	ProductID;
	///��Ʒ����
	TThostFtdcProductNameType	ProductName;
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///��Ʒ����
	TThostFtdcProductClassType	ProductClass;
	///��Լ��������
	TThostFtdcVolumeMultipleType	VolumeMultiple;
	///��С�䶯��λ
	TThostFtdcPriceType	PriceTick;
	///�м۵�����µ���
	TThostFtdcVolumeType	MaxMarketOrderVolume;
	///�м۵���С�µ���
	TThostFtdcVolumeType	MinMarketOrderVolume;
	///�޼۵�����µ���
	TThostFtdcVolumeType	MaxLimitOrderVolume;
	///�޼۵���С�µ���
	TThostFtdcVolumeType	MinLimitOrderVolume;
	///�ֲ�����
	TThostFtdcPositionTypeType	PositionType;
	///�ֲ���������
	TThostFtdcPositionDateTypeType	PositionDateType;
};

///��Լ
struct CThostFtdcInstrumentField
{
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TThostFtdcInstrumentNameType	InstrumentName;
	///��Լ�ڽ������Ĵ���
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///��Ʒ����
	TThostFtdcInstrumentIDType	ProductID;
	///��Ʒ����
	TThostFtdcProductClassType	ProductClass;
	///�������
	TThostFtdcYearType	DeliveryYear;
	///������
	TThostFtdcMonthType	DeliveryMonth;
	///�м۵�����µ���
	TThostFtdcVolumeType	MaxMarketOrderVolume;
	///�м۵���С�µ���
	TThostFtdcVolumeType	MinMarketOrderVolume;
	///�޼۵�����µ���
	TThostFtdcVolumeType	MaxLimitOrderVolume;
	///�޼۵���С�µ���
	TThostFtdcVolumeType	MinLimitOrderVolume;
	///��Լ��������
	TThostFtdcVolumeMultipleType	VolumeMultiple;
	///��С�䶯��λ
	TThostFtdcPriceType	PriceTick;
	///������
	TThostFtdcDateType	CreateDate;
	///������
	TThostFtdcDateType	OpenDate;
	///������
	TThostFtdcDateType	ExpireDate;
	///��ʼ������
	TThostFtdcDateType	StartDelivDate;
	///����������
	TThostFtdcDateType	EndDelivDate;
	///��Լ��������״̬
	TThostFtdcInstLifePhaseType	InstLifePhase;
	///��ǰ�Ƿ���
	TThostFtdcBoolType	IsTrading;
	///�ֲ�����
	TThostFtdcPositionTypeType	PositionType;
	///�ֲ���������
	TThostFtdcPositionDateTypeType	PositionDateType;
	///��ͷ��֤����
	TThostFtdcRatioType	LongMarginRatio;
	///��ͷ��֤����
	TThostFtdcRatioType	ShortMarginRatio;
};

///���͹�˾
struct CThostFtdcBrokerField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///���͹�˾���
	TThostFtdcBrokerAbbrType	BrokerAbbr;
	///���͹�˾����
	TThostFtdcBrokerNameType	BrokerName;
	///�Ƿ��Ծ
	TThostFtdcBoolType	IsActive;
};

///����������Ա
struct CThostFtdcTraderField
{
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///����������Ա����
	TThostFtdcTraderIDType	TraderID;
	///��Ա����
	TThostFtdcParticipantIDType	ParticipantID;
	///����
	TThostFtdcPasswordType	Password;
	///��װ����
	TThostFtdcInstallCountType	InstallCount;
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
};

///Ͷ����
struct CThostFtdcInvestorField
{
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���߷������
	TThostFtdcInvestorIDType	InvestorGroupID;
	///Ͷ��������
	TThostFtdcPartyNameType	InvestorName;
	///֤������
	TThostFtdcIdCardTypeType	IdentifiedCardType;
	///֤������
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�Ƿ��Ծ
	TThostFtdcBoolType	IsActive;
	///��ϵ�绰
	TThostFtdcTelephoneType	Telephone;
	///ͨѶ��ַ
	TThostFtdcAddressType	Address;
	///��������
	TThostFtdcDateType	OpenDate;
	///�ֻ�
	TThostFtdcMobileType	Mobile;
	///��������ģ�����
	TThostFtdcInvestorIDType	CommModelID;
};

///���ױ���
struct CThostFtdcTradingCodeField
{
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///�ͻ�����
	TThostFtdcClientIDType	ClientID;
	///�Ƿ��Ծ
	TThostFtdcBoolType	IsActive;
	///���ױ�������
	TThostFtdcClientIDTypeType	ClientIDType;
};

///��Ա����;��͹�˾������ձ�
struct CThostFtdcPartBrokerField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///��Ա����
	TThostFtdcParticipantIDType	ParticipantID;
	///�Ƿ��Ծ
	TThostFtdcBoolType	IsActive;
};

///�����û�
struct CThostFtdcSuperUserField
{
	///�û�����
	TThostFtdcUserIDType	UserID;
	///�û�����
	TThostFtdcUserNameType	UserName;
	///����
	TThostFtdcPasswordType	Password;
	///�Ƿ��Ծ
	TThostFtdcBoolType	IsActive;
};

///�����û�����Ȩ��
struct CThostFtdcSuperUserFunctionField
{
	///�û�����
	TThostFtdcUserIDType	UserID;
	///���ܴ���
	TThostFtdcFunctionCodeType	FunctionCode;
};

///Ͷ������
struct CThostFtdcInvestorGroupField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���߷������
	TThostFtdcInvestorIDType	InvestorGroupID;
	///Ͷ���߷�������
	TThostFtdcInvestorGroupNameType	InvestorGroupName;
};

///�ʽ��˻�
struct CThostFtdcTradingAccountField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ�����ʺ�
	TThostFtdcAccountIDType	AccountID;
	///�ϴ���Ѻ���
	TThostFtdcMoneyType	PreMortgage;
	///�ϴ����ö��
	TThostFtdcMoneyType	PreCredit;
	///�ϴδ���
	TThostFtdcMoneyType	PreDeposit;
	///�ϴν���׼����
	TThostFtdcMoneyType	PreBalance;
	///�ϴ�ռ�õı�֤��
	TThostFtdcMoneyType	PreMargin;
	///��Ϣ����
	TThostFtdcMoneyType	InterestBase;
	///��Ϣ����
	TThostFtdcMoneyType	Interest;
	///�����
	TThostFtdcMoneyType	Deposit;
	///������
	TThostFtdcMoneyType	Withdraw;
	///����ı�֤��
	TThostFtdcMoneyType	FrozenMargin;
	///������ʽ�
	TThostFtdcMoneyType	FrozenCash;
	///�����������
	TThostFtdcMoneyType	FrozenCommission;
	///��ǰ��֤���ܶ�
	TThostFtdcMoneyType	CurrMargin;
	///�ʽ���
	TThostFtdcMoneyType	CashIn;
	///������
	TThostFtdcMoneyType	Commission;
	///ƽ��ӯ��
	TThostFtdcMoneyType	CloseProfit;
	///�ֲ�ӯ��
	TThostFtdcMoneyType	PositionProfit;
	///�ڻ�����׼����
	TThostFtdcMoneyType	Balance;
	///�����ʽ�
	TThostFtdcMoneyType	Available;
	///��ȡ�ʽ�
	TThostFtdcMoneyType	WithdrawQuota;
	///����׼����
	TThostFtdcMoneyType	Reserve;
	///������
	TThostFtdcDateType	TradingDay;
	///������
	TThostFtdcSettlementIDType	SettlementID;
	///���ö��
	TThostFtdcMoneyType	Credit;
	///��Ѻ���
	TThostFtdcMoneyType	Mortgage;
	///��������֤��
	TThostFtdcMoneyType	ExchangeMargin;
	///Ͷ���߽��֤��
	TThostFtdcMoneyType	DeliveryMargin;
	///���������֤��
	TThostFtdcMoneyType	ExchangeDeliveryMargin;
};

///Ͷ���ֲ߳�
struct CThostFtdcInvestorPositionField
{
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///�ֲֶ�շ���
	TThostFtdcPosiDirectionType	PosiDirection;
	///Ͷ���ױ���־
	TThostFtdcHedgeFlagType	HedgeFlag;
	///�ֲ�����
	TThostFtdcPositionDateType	PositionDate;
	///���ճֲ�
	TThostFtdcVolumeType	YdPosition;
	///���ճֲ�
	TThostFtdcVolumeType	Position;
	///��ͷ����
	TThostFtdcVolumeType	LongFrozen;
	///��ͷ����
	TThostFtdcVolumeType	ShortFrozen;
	///���ֶ�����
	TThostFtdcMoneyType	LongFrozenAmount;
	///���ֶ�����
	TThostFtdcMoneyType	ShortFrozenAmount;
	///������
	TThostFtdcVolumeType	OpenVolume;
	///ƽ����
	TThostFtdcVolumeType	CloseVolume;
	///���ֽ��
	TThostFtdcMoneyType	OpenAmount;
	///ƽ�ֽ��
	TThostFtdcMoneyType	CloseAmount;
	///�ֲֳɱ�
	TThostFtdcMoneyType	PositionCost;
	///�ϴ�ռ�õı�֤��
	TThostFtdcMoneyType	PreMargin;
	///ռ�õı�֤��
	TThostFtdcMoneyType	UseMargin;
	///����ı�֤��
	TThostFtdcMoneyType	FrozenMargin;
	///������ʽ�
	TThostFtdcMoneyType	FrozenCash;
	///�����������
	TThostFtdcMoneyType	FrozenCommission;
	///�ʽ���
	TThostFtdcMoneyType	CashIn;
	///������
	TThostFtdcMoneyType	Commission;
	///ƽ��ӯ��
	TThostFtdcMoneyType	CloseProfit;
	///�ֲ�ӯ��
	TThostFtdcMoneyType	PositionProfit;
	///�ϴν����
	TThostFtdcPriceType	PreSettlementPrice;
	///���ν����
	TThostFtdcPriceType	SettlementPrice;
	///������
	TThostFtdcDateType	TradingDay;
	///������
	TThostFtdcSettlementIDType	SettlementID;
	///���ֳɱ�
	TThostFtdcMoneyType	OpenCost;
	///��������֤��
	TThostFtdcMoneyType	ExchangeMargin;
	///��ϳɽ��γɵĳֲ�
	TThostFtdcVolumeType	CombPosition;
	///��϶�ͷ����
	TThostFtdcVolumeType	CombLongFrozen;
	///��Ͽ�ͷ����
	TThostFtdcVolumeType	CombShortFrozen;
	///���ն���ƽ��ӯ��
	TThostFtdcMoneyType	CloseProfitByDate;
	///��ʶԳ�ƽ��ӯ��
	TThostFtdcMoneyType	CloseProfitByTrade;
	///���ճֲ�
	TThostFtdcVolumeType	TodayPosition;
	///��֤����
	TThostFtdcRatioType	MarginRateByMoney;
	///��֤����(������)
	TThostFtdcRatioType	MarginRateByVolume;
};

///��Լ��֤����
struct CThostFtdcInstrumentMarginRateField
{
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
	///Ͷ���߷�Χ
	TThostFtdcInvestorRangeType	InvestorRange;
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///Ͷ���ױ���־
	TThostFtdcHedgeFlagType	HedgeFlag;
	///��ͷ��֤����
	TThostFtdcRatioType	LongMarginRatioByMoney;
	///��ͷ��֤���
	TThostFtdcMoneyType	LongMarginRatioByVolume;
	///��ͷ��֤����
	TThostFtdcRatioType	ShortMarginRatioByMoney;
	///��ͷ��֤���
	TThostFtdcMoneyType	ShortMarginRatioByVolume;
	///�Ƿ���Խ�������ȡ
	TThostFtdcBoolType	IsRelative;
};

///��Լ��������
struct CThostFtdcInstrumentCommissionRateField
{
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
	///Ͷ���߷�Χ
	TThostFtdcInvestorRangeType	InvestorRange;
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///������������
	TThostFtdcRatioType	OpenRatioByMoney;
	///����������
	TThostFtdcRatioType	OpenRatioByVolume;
	///ƽ����������
	TThostFtdcRatioType	CloseRatioByMoney;
	///ƽ��������
	TThostFtdcRatioType	CloseRatioByVolume;
	///ƽ����������
	TThostFtdcRatioType	CloseTodayRatioByMoney;
	///ƽ��������
	TThostFtdcRatioType	CloseTodayRatioByVolume;
};

///�������
struct CThostFtdcDepthMarketDataField
{
	///������
	TThostFtdcDateType	TradingDay;
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///��Լ�ڽ������Ĵ���
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///���¼�
	TThostFtdcPriceType	LastPrice;
	///�ϴν����
	TThostFtdcPriceType	PreSettlementPrice;
	///������
	TThostFtdcPriceType	PreClosePrice;
	///��ֲ���
	TThostFtdcLargeVolumeType	PreOpenInterest;
	///����
	TThostFtdcPriceType	OpenPrice;
	///��߼�
	TThostFtdcPriceType	HighestPrice;
	///��ͼ�
	TThostFtdcPriceType	LowestPrice;
	///����
	TThostFtdcVolumeType	Volume;
	///�ɽ����
	TThostFtdcMoneyType	Turnover;
	///�ֲ���
	TThostFtdcLargeVolumeType	OpenInterest;
	///������
	TThostFtdcPriceType	ClosePrice;
	///���ν����
	TThostFtdcPriceType	SettlementPrice;
	///��ͣ���
	TThostFtdcPriceType	UpperLimitPrice;
	///��ͣ���
	TThostFtdcPriceType	LowerLimitPrice;
	///����ʵ��
	TThostFtdcRatioType	PreDelta;
	///����ʵ��
	TThostFtdcRatioType	CurrDelta;
	///����޸�ʱ��
	TThostFtdcTimeType	UpdateTime;
	///����޸ĺ���
	TThostFtdcMillisecType	UpdateMillisec;
	///�����һ
	TThostFtdcPriceType	BidPrice1;
	///������һ
	TThostFtdcVolumeType	BidVolume1;
	///������һ
	TThostFtdcPriceType	AskPrice1;
	///������һ
	TThostFtdcVolumeType	AskVolume1;
	///����۶�
	TThostFtdcPriceType	BidPrice2;
	///��������
	TThostFtdcVolumeType	BidVolume2;
	///�����۶�
	TThostFtdcPriceType	AskPrice2;
	///��������
	TThostFtdcVolumeType	AskVolume2;
	///�������
	TThostFtdcPriceType	BidPrice3;
	///��������
	TThostFtdcVolumeType	BidVolume3;
	///��������
	TThostFtdcPriceType	AskPrice3;
	///��������
	TThostFtdcVolumeType	AskVolume3;
	///�������
	TThostFtdcPriceType	BidPrice4;
	///��������
	TThostFtdcVolumeType	BidVolume4;
	///��������
	TThostFtdcPriceType	AskPrice4;
	///��������
	TThostFtdcVolumeType	AskVolume4;
	///�������
	TThostFtdcPriceType	BidPrice5;
	///��������
	TThostFtdcVolumeType	BidVolume5;
	///��������
	TThostFtdcPriceType	AskPrice5;
	///��������
	TThostFtdcVolumeType	AskVolume5;
	///���վ���
	TThostFtdcPriceType	AveragePrice;
};

///Ͷ���ߺ�Լ����Ȩ��
struct CThostFtdcInstrumentTradingRightField
{
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
	///Ͷ���߷�Χ
	TThostFtdcInvestorRangeType	InvestorRange;
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///����Ȩ��
	TThostFtdcTradingRightType	TradingRight;
};

///���͹�˾�û�
struct CThostFtdcBrokerUserField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TThostFtdcUserIDType	UserID;
	///�û�����
	TThostFtdcUserNameType	UserName;
	///�û�����
	TThostFtdcUserTypeType	UserType;
	///�Ƿ��Ծ
	TThostFtdcBoolType	IsActive;
	///�Ƿ�ʹ������
	TThostFtdcBoolType	IsUsingOTP;
};

///���͹�˾�û�����
struct CThostFtdcBrokerUserPasswordField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TThostFtdcUserIDType	UserID;
	///����
	TThostFtdcPasswordType	Password;
};

///���͹�˾�û�����Ȩ��
struct CThostFtdcBrokerUserFunctionField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TThostFtdcUserIDType	UserID;
	///���͹�˾���ܴ���
	TThostFtdcBrokerFunctionCodeType	BrokerFunctionCode;
};

///����������Ա���̻�
struct CThostFtdcTraderOfferField
{
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///����������Ա����
	TThostFtdcTraderIDType	TraderID;
	///��Ա����
	TThostFtdcParticipantIDType	ParticipantID;
	///����
	TThostFtdcPasswordType	Password;
	///��װ���
	TThostFtdcInstallIDType	InstallID;
	///���ر������
	TThostFtdcOrderLocalIDType	OrderLocalID;
	///����������Ա����״̬
	TThostFtdcTraderConnectStatusType	TraderConnectStatus;
	///�����������������
	TThostFtdcDateType	ConnectRequestDate;
	///�������������ʱ��
	TThostFtdcTimeType	ConnectRequestTime;
	///�ϴα�������
	TThostFtdcDateType	LastReportDate;
	///�ϴα���ʱ��
	TThostFtdcTimeType	LastReportTime;
	///�����������
	TThostFtdcDateType	ConnectDate;
	///�������ʱ��
	TThostFtdcTimeType	ConnectTime;
	///��������
	TThostFtdcDateType	StartDate;
	///����ʱ��
	TThostFtdcTimeType	StartTime;
	///������
	TThostFtdcDateType	TradingDay;
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///��ϯλ���ɽ����
	TThostFtdcTradeIDType	MaxTradeID;
	///��ϯλ��󱨵�����
	TThostFtdcReturnCodeType	MaxOrderMessageReference;
};

///Ͷ���߽�����
struct CThostFtdcSettlementInfoField
{
	///������
	TThostFtdcDateType	TradingDay;
	///������
	TThostFtdcSettlementIDType	SettlementID;
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///���
	TThostFtdcSequenceNoType	SequenceNo;
	///��Ϣ����
	TThostFtdcContentType	Content;
};

///��Լ��֤���ʵ���
struct CThostFtdcInstrumentMarginRateAdjustField
{
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
	///Ͷ���߷�Χ
	TThostFtdcInvestorRangeType	InvestorRange;
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///Ͷ���ױ���־
	TThostFtdcHedgeFlagType	HedgeFlag;
	///��ͷ��֤����
	TThostFtdcRatioType	LongMarginRatioByMoney;
	///��ͷ��֤���
	TThostFtdcMoneyType	LongMarginRatioByVolume;
	///��ͷ��֤����
	TThostFtdcRatioType	ShortMarginRatioByMoney;
	///��ͷ��֤���
	TThostFtdcMoneyType	ShortMarginRatioByVolume;
	///�Ƿ���Խ�������ȡ
	TThostFtdcBoolType	IsRelative;
};

///��������֤����
struct CThostFtdcExchangeMarginRateField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
	///Ͷ���ױ���־
	TThostFtdcHedgeFlagType	HedgeFlag;
	///��ͷ��֤����
	TThostFtdcRatioType	LongMarginRatioByMoney;
	///��ͷ��֤���
	TThostFtdcMoneyType	LongMarginRatioByVolume;
	///��ͷ��֤����
	TThostFtdcRatioType	ShortMarginRatioByMoney;
	///��ͷ��֤���
	TThostFtdcMoneyType	ShortMarginRatioByVolume;
};

///��������֤���ʵ���
struct CThostFtdcExchangeMarginRateAdjustField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
	///Ͷ���ױ���־
	TThostFtdcHedgeFlagType	HedgeFlag;
	///���潻����Ͷ���߶�ͷ��֤����
	TThostFtdcRatioType	LongMarginRatioByMoney;
	///���潻����Ͷ���߶�ͷ��֤���
	TThostFtdcMoneyType	LongMarginRatioByVolume;
	///���潻����Ͷ���߿�ͷ��֤����
	TThostFtdcRatioType	ShortMarginRatioByMoney;
	///���潻����Ͷ���߿�ͷ��֤���
	TThostFtdcMoneyType	ShortMarginRatioByVolume;
	///��������ͷ��֤����
	TThostFtdcRatioType	ExchLongMarginRatioByMoney;
	///��������ͷ��֤���
	TThostFtdcMoneyType	ExchLongMarginRatioByVolume;
	///��������ͷ��֤����
	TThostFtdcRatioType	ExchShortMarginRatioByMoney;
	///��������ͷ��֤���
	TThostFtdcMoneyType	ExchShortMarginRatioByVolume;
	///�����潻����Ͷ���߶�ͷ��֤����
	TThostFtdcRatioType	NoLongMarginRatioByMoney;
	///�����潻����Ͷ���߶�ͷ��֤���
	TThostFtdcMoneyType	NoLongMarginRatioByVolume;
	///�����潻����Ͷ���߿�ͷ��֤����
	TThostFtdcRatioType	NoShortMarginRatioByMoney;
	///�����潻����Ͷ���߿�ͷ��֤���
	TThostFtdcMoneyType	NoShortMarginRatioByVolume;
};

///��������
struct CThostFtdcSettlementRefField
{
	///������
	TThostFtdcDateType	TradingDay;
	///������
	TThostFtdcSettlementIDType	SettlementID;
};

///��ǰʱ��
struct CThostFtdcCurrentTimeField
{
	///��ǰ����
	TThostFtdcDateType	CurrDate;
	///��ǰʱ��
	TThostFtdcTimeType	CurrTime;
	///��ǰʱ�䣨���룩
	TThostFtdcMillisecType	CurrMillisec;
};

///ͨѶ�׶�
struct CThostFtdcCommPhaseField
{
	///������
	TThostFtdcDateType	TradingDay;
	///ͨѶʱ�α��
	TThostFtdcCommPhaseNoType	CommPhaseNo;
};

///��¼��Ϣ
struct CThostFtdcLoginInfoField
{
	///ǰ�ñ��
	TThostFtdcFrontIDType	FrontID;
	///�Ự���
	TThostFtdcSessionIDType	SessionID;
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TThostFtdcUserIDType	UserID;
	///��¼����
	TThostFtdcDateType	LoginDate;
	///��¼ʱ��
	TThostFtdcTimeType	LoginTime;
	///IP��ַ
	TThostFtdcIPAddressType	IPAddress;
	///�û��˲�Ʒ��Ϣ
	TThostFtdcProductInfoType	UserProductInfo;
	///�ӿڶ˲�Ʒ��Ϣ
	TThostFtdcProductInfoType	InterfaceProductInfo;
	///Э����Ϣ
	TThostFtdcProtocolInfoType	ProtocolInfo;
	///ϵͳ����
	TThostFtdcSystemNameType	SystemName;
	///����
	TThostFtdcPasswordType	Password;
	///��󱨵�����
	TThostFtdcOrderRefType	MaxOrderRef;
	///������ʱ��
	TThostFtdcTimeType	SHFETime;
	///������ʱ��
	TThostFtdcTimeType	DCETime;
	///֣����ʱ��
	TThostFtdcTimeType	CZCETime;
	///�н���ʱ��
	TThostFtdcTimeType	FFEXTime;
	///Mac��ַ
	TThostFtdcMacAddressType	MacAddress;
	///��̬����
	TThostFtdcPasswordType	OneTimePassword;
};

///��¼��Ϣ
struct CThostFtdcLogoutAllField
{
	///ǰ�ñ��
	TThostFtdcFrontIDType	FrontID;
	///�Ự���
	TThostFtdcSessionIDType	SessionID;
	///ϵͳ����
	TThostFtdcSystemNameType	SystemName;
};

///ǰ��״̬
struct CThostFtdcFrontStatusField
{
	///ǰ�ñ��
	TThostFtdcFrontIDType	FrontID;
	///�ϴα�������
	TThostFtdcDateType	LastReportDate;
	///�ϴα���ʱ��
	TThostFtdcTimeType	LastReportTime;
	///�Ƿ��Ծ
	TThostFtdcBoolType	IsActive;
};

///�û�������
struct CThostFtdcUserPasswordUpdateField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TThostFtdcUserIDType	UserID;
	///ԭ���Ŀ���
	TThostFtdcPasswordType	OldPassword;
	///�µĿ���
	TThostFtdcPasswordType	NewPassword;
};

///���뱨��
struct CThostFtdcInputOrderField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
	///��������
	TThostFtdcOrderRefType	OrderRef;
	///�û�����
	TThostFtdcUserIDType	UserID;
	///�����۸�����
	TThostFtdcOrderPriceTypeType	OrderPriceType;
	///��������
	TThostFtdcDirectionType	Direction;
	///��Ͽ�ƽ��־
	TThostFtdcCombOffsetFlagType	CombOffsetFlag;
	///���Ͷ���ױ���־
	TThostFtdcCombHedgeFlagType	CombHedgeFlag;
	///�۸�
	TThostFtdcPriceType	LimitPrice;
	///����
	TThostFtdcVolumeType	VolumeTotalOriginal;
	///��Ч������
	TThostFtdcTimeConditionType	TimeCondition;
	///GTD����
	TThostFtdcDateType	GTDDate;
	///�ɽ�������
	TThostFtdcVolumeConditionType	VolumeCondition;
	///��С�ɽ���
	TThostFtdcVolumeType	MinVolume;
	///��������
	TThostFtdcContingentConditionType	ContingentCondition;
	///ֹ���
	TThostFtdcPriceType	StopPrice;
	///ǿƽԭ��
	TThostFtdcForceCloseReasonType	ForceCloseReason;
	///�Զ������־
	TThostFtdcBoolType	IsAutoSuspend;
	///ҵ��Ԫ
	TThostFtdcBusinessUnitType	BusinessUnit;
	///������
	TThostFtdcRequestIDType	RequestID;
	///�û�ǿ����־
	TThostFtdcBoolType	UserForceClose;
};

///����
struct CThostFtdcOrderField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
	///��������
	TThostFtdcOrderRefType	OrderRef;
	///�û�����
	TThostFtdcUserIDType	UserID;
	///�����۸�����
	TThostFtdcOrderPriceTypeType	OrderPriceType;
	///��������
	TThostFtdcDirectionType	Direction;
	///��Ͽ�ƽ��־
	TThostFtdcCombOffsetFlagType	CombOffsetFlag;
	///���Ͷ���ױ���־
	TThostFtdcCombHedgeFlagType	CombHedgeFlag;
	///�۸�
	TThostFtdcPriceType	LimitPrice;
	///����
	TThostFtdcVolumeType	VolumeTotalOriginal;
	///��Ч������
	TThostFtdcTimeConditionType	TimeCondition;
	///GTD����
	TThostFtdcDateType	GTDDate;
	///�ɽ�������
	TThostFtdcVolumeConditionType	VolumeCondition;
	///��С�ɽ���
	TThostFtdcVolumeType	MinVolume;
	///��������
	TThostFtdcContingentConditionType	ContingentCondition;
	///ֹ���
	TThostFtdcPriceType	StopPrice;
	///ǿƽԭ��
	TThostFtdcForceCloseReasonType	ForceCloseReason;
	///�Զ������־
	TThostFtdcBoolType	IsAutoSuspend;
	///ҵ��Ԫ
	TThostFtdcBusinessUnitType	BusinessUnit;
	///������
	TThostFtdcRequestIDType	RequestID;
	///���ر������
	TThostFtdcOrderLocalIDType	OrderLocalID;
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///��Ա����
	TThostFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TThostFtdcClientIDType	ClientID;
	///��Լ�ڽ������Ĵ���
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///����������Ա����
	TThostFtdcTraderIDType	TraderID;
	///��װ���
	TThostFtdcInstallIDType	InstallID;
	///�����ύ״̬
	TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///������ʾ���
	TThostFtdcSequenceNoType	NotifySequence;
	///������
	TThostFtdcDateType	TradingDay;
	///������
	TThostFtdcSettlementIDType	SettlementID;
	///�������
	TThostFtdcOrderSysIDType	OrderSysID;
	///������Դ
	TThostFtdcOrderSourceType	OrderSource;
	///����״̬
	TThostFtdcOrderStatusType	OrderStatus;
	///��������
	TThostFtdcOrderTypeType	OrderType;
	///��ɽ�����
	TThostFtdcVolumeType	VolumeTraded;
	///ʣ������
	TThostFtdcVolumeType	VolumeTotal;
	///��������
	TThostFtdcDateType	InsertDate;
	///ί��ʱ��
	TThostFtdcTimeType	InsertTime;
	///����ʱ��
	TThostFtdcTimeType	ActiveTime;
	///����ʱ��
	TThostFtdcTimeType	SuspendTime;
	///����޸�ʱ��
	TThostFtdcTimeType	UpdateTime;
	///����ʱ��
	TThostFtdcTimeType	CancelTime;
	///����޸Ľ���������Ա����
	TThostFtdcTraderIDType	ActiveTraderID;
	///�����Ա���
	TThostFtdcParticipantIDType	ClearingPartID;
	///���
	TThostFtdcSequenceNoType	SequenceNo;
	///ǰ�ñ��
	TThostFtdcFrontIDType	FrontID;
	///�Ự���
	TThostFtdcSessionIDType	SessionID;
	///�û��˲�Ʒ��Ϣ
	TThostFtdcProductInfoType	UserProductInfo;
	///״̬��Ϣ
	TThostFtdcErrorMsgType	StatusMsg;
	///�û�ǿ����־
	TThostFtdcBoolType	UserForceClose;
	///�����û�����
	TThostFtdcUserIDType	ActiveUserID;
	///���͹�˾�������
	TThostFtdcSequenceNoType	BrokerOrderSeq;
	///��ر���
	TThostFtdcOrderSysIDType	RelativeOrderSysID;
};

///����������
struct CThostFtdcExchangeOrderField
{
	///�����۸�����
	TThostFtdcOrderPriceTypeType	OrderPriceType;
	///��������
	TThostFtdcDirectionType	Direction;
	///��Ͽ�ƽ��־
	TThostFtdcCombOffsetFlagType	CombOffsetFlag;
	///���Ͷ���ױ���־
	TThostFtdcCombHedgeFlagType	CombHedgeFlag;
	///�۸�
	TThostFtdcPriceType	LimitPrice;
	///����
	TThostFtdcVolumeType	VolumeTotalOriginal;
	///��Ч������
	TThostFtdcTimeConditionType	TimeCondition;
	///GTD����
	TThostFtdcDateType	GTDDate;
	///�ɽ�������
	TThostFtdcVolumeConditionType	VolumeCondition;
	///��С�ɽ���
	TThostFtdcVolumeType	MinVolume;
	///��������
	TThostFtdcContingentConditionType	ContingentCondition;
	///ֹ���
	TThostFtdcPriceType	StopPrice;
	///ǿƽԭ��
	TThostFtdcForceCloseReasonType	ForceCloseReason;
	///�Զ������־
	TThostFtdcBoolType	IsAutoSuspend;
	///ҵ��Ԫ
	TThostFtdcBusinessUnitType	BusinessUnit;
	///������
	TThostFtdcRequestIDType	RequestID;
	///���ر������
	TThostFtdcOrderLocalIDType	OrderLocalID;
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///��Ա����
	TThostFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TThostFtdcClientIDType	ClientID;
	///��Լ�ڽ������Ĵ���
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///����������Ա����
	TThostFtdcTraderIDType	TraderID;
	///��װ���
	TThostFtdcInstallIDType	InstallID;
	///�����ύ״̬
	TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///������ʾ���
	TThostFtdcSequenceNoType	NotifySequence;
	///������
	TThostFtdcDateType	TradingDay;
	///������
	TThostFtdcSettlementIDType	SettlementID;
	///�������
	TThostFtdcOrderSysIDType	OrderSysID;
	///������Դ
	TThostFtdcOrderSourceType	OrderSource;
	///����״̬
	TThostFtdcOrderStatusType	OrderStatus;
	///��������
	TThostFtdcOrderTypeType	OrderType;
	///��ɽ�����
	TThostFtdcVolumeType	VolumeTraded;
	///ʣ������
	TThostFtdcVolumeType	VolumeTotal;
	///��������
	TThostFtdcDateType	InsertDate;
	///ί��ʱ��
	TThostFtdcTimeType	InsertTime;
	///����ʱ��
	TThostFtdcTimeType	ActiveTime;
	///����ʱ��
	TThostFtdcTimeType	SuspendTime;
	///����޸�ʱ��
	TThostFtdcTimeType	UpdateTime;
	///����ʱ��
	TThostFtdcTimeType	CancelTime;
	///����޸Ľ���������Ա����
	TThostFtdcTraderIDType	ActiveTraderID;
	///�����Ա���
	TThostFtdcParticipantIDType	ClearingPartID;
	///���
	TThostFtdcSequenceNoType	SequenceNo;
};

///��������������ʧ��
struct CThostFtdcExchangeOrderInsertErrorField
{
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///��Ա����
	TThostFtdcParticipantIDType	ParticipantID;
	///����������Ա����
	TThostFtdcTraderIDType	TraderID;
	///��װ���
	TThostFtdcInstallIDType	InstallID;
	///���ر������
	TThostFtdcOrderLocalIDType	OrderLocalID;
	///�������
	TThostFtdcErrorIDType	ErrorID;
	///������Ϣ
	TThostFtdcErrorMsgType	ErrorMsg;
};

///���뱨������
struct CThostFtdcInputOrderActionField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///������������
	TThostFtdcOrderActionRefType	OrderActionRef;
	///��������
	TThostFtdcOrderRefType	OrderRef;
	///������
	TThostFtdcRequestIDType	RequestID;
	///ǰ�ñ��
	TThostFtdcFrontIDType	FrontID;
	///�Ự���
	TThostFtdcSessionIDType	SessionID;
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///�������
	TThostFtdcOrderSysIDType	OrderSysID;
	///������־
	TThostFtdcActionFlagType	ActionFlag;
	///�۸�
	TThostFtdcPriceType	LimitPrice;
	///�����仯
	TThostFtdcVolumeType	VolumeChange;
	///�û�����
	TThostFtdcUserIDType	UserID;
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
};

///��������
struct CThostFtdcOrderActionField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///������������
	TThostFtdcOrderActionRefType	OrderActionRef;
	///��������
	TThostFtdcOrderRefType	OrderRef;
	///������
	TThostFtdcRequestIDType	RequestID;
	///ǰ�ñ��
	TThostFtdcFrontIDType	FrontID;
	///�Ự���
	TThostFtdcSessionIDType	SessionID;
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///�������
	TThostFtdcOrderSysIDType	OrderSysID;
	///������־
	TThostFtdcActionFlagType	ActionFlag;
	///�۸�
	TThostFtdcPriceType	LimitPrice;
	///�����仯
	TThostFtdcVolumeType	VolumeChange;
	///��������
	TThostFtdcDateType	ActionDate;
	///����ʱ��
	TThostFtdcTimeType	ActionTime;
	///����������Ա����
	TThostFtdcTraderIDType	TraderID;
	///��װ���
	TThostFtdcInstallIDType	InstallID;
	///���ر������
	TThostFtdcOrderLocalIDType	OrderLocalID;
	///�������ر��
	TThostFtdcOrderLocalIDType	ActionLocalID;
	///��Ա����
	TThostFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TThostFtdcClientIDType	ClientID;
	///ҵ��Ԫ
	TThostFtdcBusinessUnitType	BusinessUnit;
	///��������״̬
	TThostFtdcOrderActionStatusType	OrderActionStatus;
	///�û�����
	TThostFtdcUserIDType	UserID;
	///״̬��Ϣ
	TThostFtdcErrorMsgType	StatusMsg;
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
};

///��������������
struct CThostFtdcExchangeOrderActionField
{
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///�������
	TThostFtdcOrderSysIDType	OrderSysID;
	///������־
	TThostFtdcActionFlagType	ActionFlag;
	///�۸�
	TThostFtdcPriceType	LimitPrice;
	///�����仯
	TThostFtdcVolumeType	VolumeChange;
	///��������
	TThostFtdcDateType	ActionDate;
	///����ʱ��
	TThostFtdcTimeType	ActionTime;
	///����������Ա����
	TThostFtdcTraderIDType	TraderID;
	///��װ���
	TThostFtdcInstallIDType	InstallID;
	///���ر������
	TThostFtdcOrderLocalIDType	OrderLocalID;
	///�������ر��
	TThostFtdcOrderLocalIDType	ActionLocalID;
	///��Ա����
	TThostFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TThostFtdcClientIDType	ClientID;
	///ҵ��Ԫ
	TThostFtdcBusinessUnitType	BusinessUnit;
	///��������״̬
	TThostFtdcOrderActionStatusType	OrderActionStatus;
	///�û�����
	TThostFtdcUserIDType	UserID;
};

///��������������ʧ��
struct CThostFtdcExchangeOrderActionErrorField
{
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///�������
	TThostFtdcOrderSysIDType	OrderSysID;
	///����������Ա����
	TThostFtdcTraderIDType	TraderID;
	///��װ���
	TThostFtdcInstallIDType	InstallID;
	///���ر������
	TThostFtdcOrderLocalIDType	OrderLocalID;
	///�������ر��
	TThostFtdcOrderLocalIDType	ActionLocalID;
	///�������
	TThostFtdcErrorIDType	ErrorID;
	///������Ϣ
	TThostFtdcErrorMsgType	ErrorMsg;
};

///�������ɽ�
struct CThostFtdcExchangeTradeField
{
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///�ɽ����
	TThostFtdcTradeIDType	TradeID;
	///��������
	TThostFtdcDirectionType	Direction;
	///�������
	TThostFtdcOrderSysIDType	OrderSysID;
	///��Ա����
	TThostFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TThostFtdcClientIDType	ClientID;
	///���׽�ɫ
	TThostFtdcTradingRoleType	TradingRole;
	///��Լ�ڽ������Ĵ���
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///��ƽ��־
	TThostFtdcOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	TThostFtdcHedgeFlagType	HedgeFlag;
	///�۸�
	TThostFtdcPriceType	Price;
	///����
	TThostFtdcVolumeType	Volume;
	///�ɽ�ʱ��
	TThostFtdcDateType	TradeDate;
	///�ɽ�ʱ��
	TThostFtdcTimeType	TradeTime;
	///�ɽ�����
	TThostFtdcTradeTypeType	TradeType;
	///�ɽ�����Դ
	TThostFtdcPriceSourceType	PriceSource;
	///����������Ա����
	TThostFtdcTraderIDType	TraderID;
	///���ر������
	TThostFtdcOrderLocalIDType	OrderLocalID;
	///�����Ա���
	TThostFtdcParticipantIDType	ClearingPartID;
	///ҵ��Ԫ
	TThostFtdcBusinessUnitType	BusinessUnit;
	///���
	TThostFtdcSequenceNoType	SequenceNo;
	///�ɽ���Դ
	TThostFtdcTradeSourceType	TradeSource;
};

///�ɽ�
struct CThostFtdcTradeField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
	///��������
	TThostFtdcOrderRefType	OrderRef;
	///�û�����
	TThostFtdcUserIDType	UserID;
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///�ɽ����
	TThostFtdcTradeIDType	TradeID;
	///��������
	TThostFtdcDirectionType	Direction;
	///�������
	TThostFtdcOrderSysIDType	OrderSysID;
	///��Ա����
	TThostFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TThostFtdcClientIDType	ClientID;
	///���׽�ɫ
	TThostFtdcTradingRoleType	TradingRole;
	///��Լ�ڽ������Ĵ���
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///��ƽ��־
	TThostFtdcOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	TThostFtdcHedgeFlagType	HedgeFlag;
	///�۸�
	TThostFtdcPriceType	Price;
	///����
	TThostFtdcVolumeType	Volume;
	///�ɽ�ʱ��
	TThostFtdcDateType	TradeDate;
	///�ɽ�ʱ��
	TThostFtdcTimeType	TradeTime;
	///�ɽ�����
	TThostFtdcTradeTypeType	TradeType;
	///�ɽ�����Դ
	TThostFtdcPriceSourceType	PriceSource;
	///����������Ա����
	TThostFtdcTraderIDType	TraderID;
	///���ر������
	TThostFtdcOrderLocalIDType	OrderLocalID;
	///�����Ա���
	TThostFtdcParticipantIDType	ClearingPartID;
	///ҵ��Ԫ
	TThostFtdcBusinessUnitType	BusinessUnit;
	///���
	TThostFtdcSequenceNoType	SequenceNo;
	///������
	TThostFtdcDateType	TradingDay;
	///������
	TThostFtdcSettlementIDType	SettlementID;
	///���͹�˾�������
	TThostFtdcSequenceNoType	BrokerOrderSeq;
	///�ɽ���Դ
	TThostFtdcTradeSourceType	TradeSource;
};

///�û��Ự
struct CThostFtdcUserSessionField
{
	///ǰ�ñ��
	TThostFtdcFrontIDType	FrontID;
	///�Ự���
	TThostFtdcSessionIDType	SessionID;
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TThostFtdcUserIDType	UserID;
	///��¼����
	TThostFtdcDateType	LoginDate;
	///��¼ʱ��
	TThostFtdcTimeType	LoginTime;
	///IP��ַ
	TThostFtdcIPAddressType	IPAddress;
	///�û��˲�Ʒ��Ϣ
	TThostFtdcProductInfoType	UserProductInfo;
	///�ӿڶ˲�Ʒ��Ϣ
	TThostFtdcProductInfoType	InterfaceProductInfo;
	///Э����Ϣ
	TThostFtdcProtocolInfoType	ProtocolInfo;
	///Mac��ַ
	TThostFtdcMacAddressType	MacAddress;
};

///��ѯ��󱨵�����
struct CThostFtdcQueryMaxOrderVolumeField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
	///��������
	TThostFtdcDirectionType	Direction;
	///��ƽ��־
	TThostFtdcOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	TThostFtdcHedgeFlagType	HedgeFlag;
	///���������������
	TThostFtdcVolumeType	MaxVolume;
};

///Ͷ���߽�����ȷ����Ϣ
struct CThostFtdcSettlementInfoConfirmField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///ȷ������
	TThostFtdcDateType	ConfirmDate;
	///ȷ��ʱ��
	TThostFtdcTimeType	ConfirmTime;
};

///�����ͬ��
struct CThostFtdcSyncDepositField
{
	///�������ˮ��
	TThostFtdcDepositSeqNoType	DepositSeqNo;
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///�����
	TThostFtdcMoneyType	Deposit;
	///�Ƿ�ǿ�ƽ���
	TThostFtdcBoolType	IsForce;
};

///���͹�˾ͬ��
struct CThostFtdcBrokerSyncField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
};

///����ͬ���е�Ͷ����
struct CThostFtdcSyncingInvestorField
{
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���߷������
	TThostFtdcInvestorIDType	InvestorGroupID;
	///Ͷ��������
	TThostFtdcPartyNameType	InvestorName;
	///֤������
	TThostFtdcIdCardTypeType	IdentifiedCardType;
	///֤������
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�Ƿ��Ծ
	TThostFtdcBoolType	IsActive;
	///��ϵ�绰
	TThostFtdcTelephoneType	Telephone;
	///ͨѶ��ַ
	TThostFtdcAddressType	Address;
	///��������
	TThostFtdcDateType	OpenDate;
	///�ֻ�
	TThostFtdcMobileType	Mobile;
	///��������ģ�����
	TThostFtdcInvestorIDType	CommModelID;
};

///����ͬ���еĽ��״���
struct CThostFtdcSyncingTradingCodeField
{
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///�ͻ�����
	TThostFtdcClientIDType	ClientID;
	///�Ƿ��Ծ
	TThostFtdcBoolType	IsActive;
	///���ױ�������
	TThostFtdcClientIDTypeType	ClientIDType;
};

///����ͬ���е�Ͷ���߷���
struct CThostFtdcSyncingInvestorGroupField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���߷������
	TThostFtdcInvestorIDType	InvestorGroupID;
	///Ͷ���߷�������
	TThostFtdcInvestorGroupNameType	InvestorGroupName;
};

///����ͬ���еĽ����˺�
struct CThostFtdcSyncingTradingAccountField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ�����ʺ�
	TThostFtdcAccountIDType	AccountID;
	///�ϴ���Ѻ���
	TThostFtdcMoneyType	PreMortgage;
	///�ϴ����ö��
	TThostFtdcMoneyType	PreCredit;
	///�ϴδ���
	TThostFtdcMoneyType	PreDeposit;
	///�ϴν���׼����
	TThostFtdcMoneyType	PreBalance;
	///�ϴ�ռ�õı�֤��
	TThostFtdcMoneyType	PreMargin;
	///��Ϣ����
	TThostFtdcMoneyType	InterestBase;
	///��Ϣ����
	TThostFtdcMoneyType	Interest;
	///�����
	TThostFtdcMoneyType	Deposit;
	///������
	TThostFtdcMoneyType	Withdraw;
	///����ı�֤��
	TThostFtdcMoneyType	FrozenMargin;
	///������ʽ�
	TThostFtdcMoneyType	FrozenCash;
	///�����������
	TThostFtdcMoneyType	FrozenCommission;
	///��ǰ��֤���ܶ�
	TThostFtdcMoneyType	CurrMargin;
	///�ʽ���
	TThostFtdcMoneyType	CashIn;
	///������
	TThostFtdcMoneyType	Commission;
	///ƽ��ӯ��
	TThostFtdcMoneyType	CloseProfit;
	///�ֲ�ӯ��
	TThostFtdcMoneyType	PositionProfit;
	///�ڻ�����׼����
	TThostFtdcMoneyType	Balance;
	///�����ʽ�
	TThostFtdcMoneyType	Available;
	///��ȡ�ʽ�
	TThostFtdcMoneyType	WithdrawQuota;
	///����׼����
	TThostFtdcMoneyType	Reserve;
	///������
	TThostFtdcDateType	TradingDay;
	///������
	TThostFtdcSettlementIDType	SettlementID;
	///���ö��
	TThostFtdcMoneyType	Credit;
	///��Ѻ���
	TThostFtdcMoneyType	Mortgage;
	///��������֤��
	TThostFtdcMoneyType	ExchangeMargin;
	///Ͷ���߽��֤��
	TThostFtdcMoneyType	DeliveryMargin;
	///���������֤��
	TThostFtdcMoneyType	ExchangeDeliveryMargin;
};

///����ͬ���е�Ͷ���ֲ߳�
struct CThostFtdcSyncingInvestorPositionField
{
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///�ֲֶ�շ���
	TThostFtdcPosiDirectionType	PosiDirection;
	///Ͷ���ױ���־
	TThostFtdcHedgeFlagType	HedgeFlag;
	///�ֲ�����
	TThostFtdcPositionDateType	PositionDate;
	///���ճֲ�
	TThostFtdcVolumeType	YdPosition;
	///���ճֲ�
	TThostFtdcVolumeType	Position;
	///��ͷ����
	TThostFtdcVolumeType	LongFrozen;
	///��ͷ����
	TThostFtdcVolumeType	ShortFrozen;
	///���ֶ�����
	TThostFtdcMoneyType	LongFrozenAmount;
	///���ֶ�����
	TThostFtdcMoneyType	ShortFrozenAmount;
	///������
	TThostFtdcVolumeType	OpenVolume;
	///ƽ����
	TThostFtdcVolumeType	CloseVolume;
	///���ֽ��
	TThostFtdcMoneyType	OpenAmount;
	///ƽ�ֽ��
	TThostFtdcMoneyType	CloseAmount;
	///�ֲֳɱ�
	TThostFtdcMoneyType	PositionCost;
	///�ϴ�ռ�õı�֤��
	TThostFtdcMoneyType	PreMargin;
	///ռ�õı�֤��
	TThostFtdcMoneyType	UseMargin;
	///����ı�֤��
	TThostFtdcMoneyType	FrozenMargin;
	///������ʽ�
	TThostFtdcMoneyType	FrozenCash;
	///�����������
	TThostFtdcMoneyType	FrozenCommission;
	///�ʽ���
	TThostFtdcMoneyType	CashIn;
	///������
	TThostFtdcMoneyType	Commission;
	///ƽ��ӯ��
	TThostFtdcMoneyType	CloseProfit;
	///�ֲ�ӯ��
	TThostFtdcMoneyType	PositionProfit;
	///�ϴν����
	TThostFtdcPriceType	PreSettlementPrice;
	///���ν����
	TThostFtdcPriceType	SettlementPrice;
	///������
	TThostFtdcDateType	TradingDay;
	///������
	TThostFtdcSettlementIDType	SettlementID;
	///���ֳɱ�
	TThostFtdcMoneyType	OpenCost;
	///��������֤��
	TThostFtdcMoneyType	ExchangeMargin;
	///��ϳɽ��γɵĳֲ�
	TThostFtdcVolumeType	CombPosition;
	///��϶�ͷ����
	TThostFtdcVolumeType	CombLongFrozen;
	///��Ͽ�ͷ����
	TThostFtdcVolumeType	CombShortFrozen;
	///���ն���ƽ��ӯ��
	TThostFtdcMoneyType	CloseProfitByDate;
	///��ʶԳ�ƽ��ӯ��
	TThostFtdcMoneyType	CloseProfitByTrade;
	///���ճֲ�
	TThostFtdcVolumeType	TodayPosition;
	///��֤����
	TThostFtdcRatioType	MarginRateByMoney;
	///��֤����(������)
	TThostFtdcRatioType	MarginRateByVolume;
};

///����ͬ���еĺ�Լ��֤����
struct CThostFtdcSyncingInstrumentMarginRateField
{
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
	///Ͷ���߷�Χ
	TThostFtdcInvestorRangeType	InvestorRange;
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///Ͷ���ױ���־
	TThostFtdcHedgeFlagType	HedgeFlag;
	///��ͷ��֤����
	TThostFtdcRatioType	LongMarginRatioByMoney;
	///��ͷ��֤���
	TThostFtdcMoneyType	LongMarginRatioByVolume;
	///��ͷ��֤����
	TThostFtdcRatioType	ShortMarginRatioByMoney;
	///��ͷ��֤���
	TThostFtdcMoneyType	ShortMarginRatioByVolume;
	///�Ƿ���Խ�������ȡ
	TThostFtdcBoolType	IsRelative;
};

///����ͬ���еĺ�Լ��������
struct CThostFtdcSyncingInstrumentCommissionRateField
{
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
	///Ͷ���߷�Χ
	TThostFtdcInvestorRangeType	InvestorRange;
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///������������
	TThostFtdcRatioType	OpenRatioByMoney;
	///����������
	TThostFtdcRatioType	OpenRatioByVolume;
	///ƽ����������
	TThostFtdcRatioType	CloseRatioByMoney;
	///ƽ��������
	TThostFtdcRatioType	CloseRatioByVolume;
	///ƽ����������
	TThostFtdcRatioType	CloseTodayRatioByMoney;
	///ƽ��������
	TThostFtdcRatioType	CloseTodayRatioByVolume;
};

///����ͬ���еĺ�Լ����Ȩ��
struct CThostFtdcSyncingInstrumentTradingRightField
{
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
	///Ͷ���߷�Χ
	TThostFtdcInvestorRangeType	InvestorRange;
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///����Ȩ��
	TThostFtdcTradingRightType	TradingRight;
};

///��ѯ����
struct CThostFtdcQryOrderField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///�������
	TThostFtdcOrderSysIDType	OrderSysID;
	///��ʼʱ��
	TThostFtdcTimeType	InsertTimeStart;
	///����ʱ��
	TThostFtdcTimeType	InsertTimeEnd;
};

///��ѯ�ɽ�
struct CThostFtdcQryTradeField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///�ɽ����
	TThostFtdcTradeIDType	TradeID;
	///��ʼʱ��
	TThostFtdcTimeType	TradeTimeStart;
	///����ʱ��
	TThostFtdcTimeType	TradeTimeEnd;
};

///��ѯͶ���ֲ߳�
struct CThostFtdcQryInvestorPositionField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
};

///��ѯ�ʽ��˻�
struct CThostFtdcQryTradingAccountField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
};

///��ѯͶ����
struct CThostFtdcQryInvestorField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
};

///��ѯ���ױ���
struct CThostFtdcQryTradingCodeField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///�ͻ�����
	TThostFtdcClientIDType	ClientID;
	///���ױ�������
	TThostFtdcClientIDTypeType	ClientIDType;
};

///��ѯ���ױ���
struct CThostFtdcQryInvestorGroupField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
};

///��ѯ���ױ���
struct CThostFtdcQryInstrumentMarginRateField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
	///Ͷ���ױ���־
	TThostFtdcHedgeFlagType	HedgeFlag;
};

///��ѯ���ױ���
struct CThostFtdcQryInstrumentCommissionRateField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
};

///��ѯ���ױ���
struct CThostFtdcQryInstrumentTradingRightField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
};

///��ѯ���͹�˾
struct CThostFtdcQryBrokerField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
};

///��ѯ����Ա
struct CThostFtdcQryTraderField
{
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///��Ա����
	TThostFtdcParticipantIDType	ParticipantID;
	///����������Ա����
	TThostFtdcTraderIDType	TraderID;
};

///��ѯ���͹�˾��Ա����
struct CThostFtdcQryPartBrokerField
{
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///��Ա����
	TThostFtdcParticipantIDType	ParticipantID;
};

///��ѯ�����û�����Ȩ��
struct CThostFtdcQrySuperUserFunctionField
{
	///�û�����
	TThostFtdcUserIDType	UserID;
};

///��ѯ�û��Ự
struct CThostFtdcQryUserSessionField
{
	///ǰ�ñ��
	TThostFtdcFrontIDType	FrontID;
	///�Ự���
	TThostFtdcSessionIDType	SessionID;
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TThostFtdcUserIDType	UserID;
};

///��ѯǰ��״̬
struct CThostFtdcQryFrontStatusField
{
	///ǰ�ñ��
	TThostFtdcFrontIDType	FrontID;
};

///��ѯ����������
struct CThostFtdcQryExchangeOrderField
{
	///��Ա����
	TThostFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TThostFtdcClientIDType	ClientID;
	///��Լ�ڽ������Ĵ���
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///����������Ա����
	TThostFtdcTraderIDType	TraderID;
};

///��ѯ��������
struct CThostFtdcQryOrderActionField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
};

///��ѯ��������������
struct CThostFtdcQryExchangeOrderActionField
{
	///��Ա����
	TThostFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TThostFtdcClientIDType	ClientID;
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///����������Ա����
	TThostFtdcTraderIDType	TraderID;
};

///��ѯ�����û�
struct CThostFtdcQrySuperUserField
{
	///�û�����
	TThostFtdcUserIDType	UserID;
};

///��ѯ������
struct CThostFtdcQryExchangeField
{
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
};

///��ѯ��Ʒ
struct CThostFtdcQryProductField
{
	///��Ʒ����
	TThostFtdcInstrumentIDType	ProductID;
};

///��ѯ��Լ
struct CThostFtdcQryInstrumentField
{
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///��Լ�ڽ������Ĵ���
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///��Ʒ����
	TThostFtdcInstrumentIDType	ProductID;
};

///��ѯ����
struct CThostFtdcQryDepthMarketDataField
{
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
};

///��ѯ���͹�˾�û�
struct CThostFtdcQryBrokerUserField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TThostFtdcUserIDType	UserID;
};

///��ѯ���͹�˾�û�Ȩ��
struct CThostFtdcQryBrokerUserFunctionField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TThostFtdcUserIDType	UserID;
};

///��ѯ����Ա���̻�
struct CThostFtdcQryTraderOfferField
{
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///��Ա����
	TThostFtdcParticipantIDType	ParticipantID;
	///����������Ա����
	TThostFtdcTraderIDType	TraderID;
};

///��ѯ�������ˮ
struct CThostFtdcQrySyncDepositField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///�������ˮ��
	TThostFtdcDepositSeqNoType	DepositSeqNo;
};

///��ѯͶ���߽�����
struct CThostFtdcQrySettlementInfoField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///������
	TThostFtdcDateType	TradingDay;
};

///��ѯ����
struct CThostFtdcQryHisOrderField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///�������
	TThostFtdcOrderSysIDType	OrderSysID;
	///��ʼʱ��
	TThostFtdcTimeType	InsertTimeStart;
	///����ʱ��
	TThostFtdcTimeType	InsertTimeEnd;
	///������
	TThostFtdcDateType	TradingDay;
	///������
	TThostFtdcSettlementIDType	SettlementID;
};

///�г�����
struct CThostFtdcMarketDataField
{
	///������
	TThostFtdcDateType	TradingDay;
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///��Լ�ڽ������Ĵ���
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///���¼�
	TThostFtdcPriceType	LastPrice;
	///�ϴν����
	TThostFtdcPriceType	PreSettlementPrice;
	///������
	TThostFtdcPriceType	PreClosePrice;
	///��ֲ���
	TThostFtdcLargeVolumeType	PreOpenInterest;
	///����
	TThostFtdcPriceType	OpenPrice;
	///��߼�
	TThostFtdcPriceType	HighestPrice;
	///��ͼ�
	TThostFtdcPriceType	LowestPrice;
	///����
	TThostFtdcVolumeType	Volume;
	///�ɽ����
	TThostFtdcMoneyType	Turnover;
	///�ֲ���
	TThostFtdcLargeVolumeType	OpenInterest;
	///������
	TThostFtdcPriceType	ClosePrice;
	///���ν����
	TThostFtdcPriceType	SettlementPrice;
	///��ͣ���
	TThostFtdcPriceType	UpperLimitPrice;
	///��ͣ���
	TThostFtdcPriceType	LowerLimitPrice;
	///����ʵ��
	TThostFtdcRatioType	PreDelta;
	///����ʵ��
	TThostFtdcRatioType	CurrDelta;
	///����޸�ʱ��
	TThostFtdcTimeType	UpdateTime;
	///����޸ĺ���
	TThostFtdcMillisecType	UpdateMillisec;
};

///�����������
struct CThostFtdcMarketDataBaseField
{
	///������
	TThostFtdcDateType	TradingDay;
	///�ϴν����
	TThostFtdcPriceType	PreSettlementPrice;
	///������
	TThostFtdcPriceType	PreClosePrice;
	///��ֲ���
	TThostFtdcLargeVolumeType	PreOpenInterest;
	///����ʵ��
	TThostFtdcRatioType	PreDelta;
};

///���龲̬����
struct CThostFtdcMarketDataStaticField
{
	///����
	TThostFtdcPriceType	OpenPrice;
	///��߼�
	TThostFtdcPriceType	HighestPrice;
	///��ͼ�
	TThostFtdcPriceType	LowestPrice;
	///������
	TThostFtdcPriceType	ClosePrice;
	///��ͣ���
	TThostFtdcPriceType	UpperLimitPrice;
	///��ͣ���
	TThostFtdcPriceType	LowerLimitPrice;
	///���ν����
	TThostFtdcPriceType	SettlementPrice;
	///����ʵ��
	TThostFtdcRatioType	CurrDelta;
};

///�������³ɽ�����
struct CThostFtdcMarketDataLastMatchField
{
	///���¼�
	TThostFtdcPriceType	LastPrice;
	///����
	TThostFtdcVolumeType	Volume;
	///�ɽ����
	TThostFtdcMoneyType	Turnover;
	///�ֲ���
	TThostFtdcLargeVolumeType	OpenInterest;
};

///�������ż�����
struct CThostFtdcMarketDataBestPriceField
{
	///�����һ
	TThostFtdcPriceType	BidPrice1;
	///������һ
	TThostFtdcVolumeType	BidVolume1;
	///������һ
	TThostFtdcPriceType	AskPrice1;
	///������һ
	TThostFtdcVolumeType	AskVolume1;
};

///�����������������
struct CThostFtdcMarketDataBid23Field
{
	///����۶�
	TThostFtdcPriceType	BidPrice2;
	///��������
	TThostFtdcVolumeType	BidVolume2;
	///�������
	TThostFtdcPriceType	BidPrice3;
	///��������
	TThostFtdcVolumeType	BidVolume3;
};

///������������������
struct CThostFtdcMarketDataAsk23Field
{
	///�����۶�
	TThostFtdcPriceType	AskPrice2;
	///��������
	TThostFtdcVolumeType	AskVolume2;
	///��������
	TThostFtdcPriceType	AskPrice3;
	///��������
	TThostFtdcVolumeType	AskVolume3;
};

///���������ġ�������
struct CThostFtdcMarketDataBid45Field
{
	///�������
	TThostFtdcPriceType	BidPrice4;
	///��������
	TThostFtdcVolumeType	BidVolume4;
	///�������
	TThostFtdcPriceType	BidPrice5;
	///��������
	TThostFtdcVolumeType	BidVolume5;
};

///���������ġ�������
struct CThostFtdcMarketDataAsk45Field
{
	///��������
	TThostFtdcPriceType	AskPrice4;
	///��������
	TThostFtdcVolumeType	AskVolume4;
	///��������
	TThostFtdcPriceType	AskPrice5;
	///��������
	TThostFtdcVolumeType	AskVolume5;
};

///�������ʱ������
struct CThostFtdcMarketDataUpdateTimeField
{
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
	///����޸�ʱ��
	TThostFtdcTimeType	UpdateTime;
	///����޸ĺ���
	TThostFtdcMillisecType	UpdateMillisec;
};

///���齻������������
struct CThostFtdcMarketDataExchangeField
{
	///����������
	TThostFtdcPriceType	ExchangeID;
};

///ָ���ĺ�Լ
struct CThostFtdcSpecificInstrumentField
{
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
};

///��Լ״̬
struct CThostFtdcInstrumentStatusField
{
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///��Լ�ڽ������Ĵ���
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///���������
	TThostFtdcSettlementGroupIDType	SettlementGroupID;
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
	///��Լ����״̬
	TThostFtdcInstrumentStatusType	InstrumentStatus;
	///���׽׶α��
	TThostFtdcTradingSegmentSNType	TradingSegmentSN;
	///���뱾״̬ʱ��
	TThostFtdcTimeType	EnterTime;
	///���뱾״̬ԭ��
	TThostFtdcInstStatusEnterReasonType	EnterReason;
};

///��ѯ��Լ״̬
struct CThostFtdcQryInstrumentStatusField
{
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///��Լ�ڽ������Ĵ���
	TThostFtdcExchangeInstIDType	ExchangeInstID;
};

///Ͷ�����˻�
struct CThostFtdcInvestorAccountField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///Ͷ�����ʺ�
	TThostFtdcAccountIDType	AccountID;
};

///����ӯ���㷨
struct CThostFtdcPositionProfitAlgorithmField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ�����ʺ�
	TThostFtdcAccountIDType	AccountID;
	///ӯ���㷨
	TThostFtdcAlgorithmType	Algorithm;
	///��ע
	TThostFtdcMemoType	Memo;
};

///��Ա�ʽ��ۿ�
struct CThostFtdcDiscountField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���߷�Χ
	TThostFtdcInvestorRangeType	InvestorRange;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///�ʽ��ۿ۱���
	TThostFtdcRatioType	Discount;
};

///��ѯת������
struct CThostFtdcQryTransferBankField
{
	///���д���
	TThostFtdcBankIDType	BankID;
	///���з����Ĵ���
	TThostFtdcBankBrchIDType	BankBrchID;
};

///ת������
struct CThostFtdcTransferBankField
{
	///���д���
	TThostFtdcBankIDType	BankID;
	///���з����Ĵ���
	TThostFtdcBankBrchIDType	BankBrchID;
	///��������
	TThostFtdcBankNameType	BankName;
	///�Ƿ��Ծ
	TThostFtdcBoolType	IsActive;
};

///��ѯͶ���ֲ߳���ϸ
struct CThostFtdcQryInvestorPositionDetailField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
};

///Ͷ���ֲ߳���ϸ
struct CThostFtdcInvestorPositionDetailField
{
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///Ͷ���ױ���־
	TThostFtdcHedgeFlagType	HedgeFlag;
	///����
	TThostFtdcDirectionType	Direction;
	///��������
	TThostFtdcDateType	OpenDate;
	///�ɽ����
	TThostFtdcTradeIDType	TradeID;
	///����
	TThostFtdcVolumeType	Volume;
	///���ּ�
	TThostFtdcPriceType	OpenPrice;
	///������
	TThostFtdcDateType	TradingDay;
	///������
	TThostFtdcSettlementIDType	SettlementID;
	///�ɽ�����
	TThostFtdcTradeTypeType	TradeType;
	///��Ϻ�Լ����
	TThostFtdcInstrumentIDType	CombInstrumentID;
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///���ն���ƽ��ӯ��
	TThostFtdcMoneyType	CloseProfitByDate;
	///��ʶԳ�ƽ��ӯ��
	TThostFtdcMoneyType	CloseProfitByTrade;
	///���ն��гֲ�ӯ��
	TThostFtdcMoneyType	PositionProfitByDate;
	///��ʶԳ�ֲ�ӯ��
	TThostFtdcMoneyType	PositionProfitByTrade;
	///Ͷ���߱�֤��
	TThostFtdcMoneyType	Margin;
	///��������֤��
	TThostFtdcMoneyType	ExchMargin;
	///��֤����
	TThostFtdcRatioType	MarginRateByMoney;
	///��֤����(������)
	TThostFtdcRatioType	MarginRateByVolume;
	///������
	TThostFtdcPriceType	LastSettlementPrice;
	///�����
	TThostFtdcPriceType	SettlementPrice;
	///ƽ����
	TThostFtdcVolumeType	CloseVolume;
	///ƽ�ֽ��
	TThostFtdcMoneyType	CloseAmount;
};

///�ʽ��˻�������
struct CThostFtdcTradingAccountPasswordField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ�����ʺ�
	TThostFtdcAccountIDType	AccountID;
	///����
	TThostFtdcPasswordType	Password;
};

///���������鱨�̻�
struct CThostFtdcMDTraderOfferField
{
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///����������Ա����
	TThostFtdcTraderIDType	TraderID;
	///��Ա����
	TThostFtdcParticipantIDType	ParticipantID;
	///����
	TThostFtdcPasswordType	Password;
	///��װ���
	TThostFtdcInstallIDType	InstallID;
	///���ر������
	TThostFtdcOrderLocalIDType	OrderLocalID;
	///����������Ա����״̬
	TThostFtdcTraderConnectStatusType	TraderConnectStatus;
	///�����������������
	TThostFtdcDateType	ConnectRequestDate;
	///�������������ʱ��
	TThostFtdcTimeType	ConnectRequestTime;
	///�ϴα�������
	TThostFtdcDateType	LastReportDate;
	///�ϴα���ʱ��
	TThostFtdcTimeType	LastReportTime;
	///�����������
	TThostFtdcDateType	ConnectDate;
	///�������ʱ��
	TThostFtdcTimeType	ConnectTime;
	///��������
	TThostFtdcDateType	StartDate;
	///����ʱ��
	TThostFtdcTimeType	StartTime;
	///������
	TThostFtdcDateType	TradingDay;
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///��ϯλ���ɽ����
	TThostFtdcTradeIDType	MaxTradeID;
	///��ϯλ��󱨵�����
	TThostFtdcReturnCodeType	MaxOrderMessageReference;
};

///��ѯ���鱨�̻�
struct CThostFtdcQryMDTraderOfferField
{
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///��Ա����
	TThostFtdcParticipantIDType	ParticipantID;
	///����������Ա����
	TThostFtdcTraderIDType	TraderID;
};

///��ѯ�ͻ�֪ͨ
struct CThostFtdcQryNoticeField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
};

///�ͻ�֪ͨ
struct CThostFtdcNoticeField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///��Ϣ����
	TThostFtdcContentType	Content;
	///���͹�˾֪ͨ�������к�
	TThostFtdcSequenceLabelType	SequenceLabel;
};

///�û�Ȩ��
struct CThostFtdcUserRightField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TThostFtdcUserIDType	UserID;
	///�ͻ�Ȩ������
	TThostFtdcUserRightTypeType	UserRightType;
	///�Ƿ��ֹ
	TThostFtdcBoolType	IsForbidden;
};

///��ѯ������Ϣȷ����
struct CThostFtdcQrySettlementInfoConfirmField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
};

///װ�ؽ�����Ϣ
struct CThostFtdcLoadSettlementInfoField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
};

///���͹�˾�����ʽ��㷨��
struct CThostFtdcBrokerWithdrawAlgorithmField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///�����ʽ��㷨
	TThostFtdcAlgorithmType	WithdrawAlgorithm;
	///�ʽ�ʹ����
	TThostFtdcRatioType	UsingRatio;
	///�����Ƿ����ƽ��ӯ��
	TThostFtdcIncludeCloseProfitType	IncludeCloseProfit;
	///�����޲����޳ɽ��ͻ��Ƿ��ܿ����������
	TThostFtdcAllWithoutTradeType	AllWithoutTrade;
	///�����Ƿ����ƽ��ӯ��
	TThostFtdcIncludeCloseProfitType	AvailIncludeCloseProfit;
	///�Ƿ������û��¼�
	TThostFtdcBoolType	IsBrokerUserEvent;
};

///�ʽ��˻���������
struct CThostFtdcTradingAccountPasswordUpdateV1Field
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///ԭ���Ŀ���
	TThostFtdcPasswordType	OldPassword;
	///�µĿ���
	TThostFtdcPasswordType	NewPassword;
};

///�ʽ��˻���������
struct CThostFtdcTradingAccountPasswordUpdateField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ�����ʺ�
	TThostFtdcAccountIDType	AccountID;
	///ԭ���Ŀ���
	TThostFtdcPasswordType	OldPassword;
	///�µĿ���
	TThostFtdcPasswordType	NewPassword;
};

///��ѯ��Ϻ�Լ����
struct CThostFtdcQryCombinationLegField
{
	///��Ϻ�Լ����
	TThostFtdcInstrumentIDType	CombInstrumentID;
	///���ȱ��
	TThostFtdcLegIDType	LegID;
	///���Ⱥ�Լ����
	TThostFtdcInstrumentIDType	LegInstrumentID;
};

///��ѯ��Ϻ�Լ����
struct CThostFtdcQrySyncStatusField
{
	///������
	TThostFtdcDateType	TradingDay;
};

///��Ͻ��׺�Լ�ĵ���
struct CThostFtdcCombinationLegField
{
	///��Ϻ�Լ����
	TThostFtdcInstrumentIDType	CombInstrumentID;
	///���ȱ��
	TThostFtdcLegIDType	LegID;
	///���Ⱥ�Լ����
	TThostFtdcInstrumentIDType	LegInstrumentID;
	///��������
	TThostFtdcDirectionType	Direction;
	///���ȳ���
	TThostFtdcLegMultipleType	LegMultiple;
	///��������
	TThostFtdcImplyLevelType	ImplyLevel;
};

///����ͬ��״̬
struct CThostFtdcSyncStatusField
{
	///������
	TThostFtdcDateType	TradingDay;
	///����ͬ��״̬
	TThostFtdcDataSyncStatusType	DataSyncStatus;
};

///��ѯ��ϵ��
struct CThostFtdcQryLinkManField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
};

///��ϵ��
struct CThostFtdcLinkManField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///��ϵ������
	TThostFtdcPersonTypeType	PersonType;
	///֤������
	TThostFtdcIdCardTypeType	IdentifiedCardType;
	///֤������
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///����
	TThostFtdcPartyNameType	PersonName;
	///��ϵ�绰
	TThostFtdcTelephoneType	Telephone;
	///ͨѶ��ַ
	TThostFtdcAddressType	Address;
	///��������
	TThostFtdcZipCodeType	ZipCode;
	///���ȼ�
	TThostFtdcPriorityType	Priority;
};

///��ѯ���͹�˾�û��¼�
struct CThostFtdcQryBrokerUserEventField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TThostFtdcUserIDType	UserID;
	///�û��¼�����
	TThostFtdcUserEventTypeType	UserEventType;
};

///��ѯ���͹�˾�û��¼�
struct CThostFtdcBrokerUserEventField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TThostFtdcUserIDType	UserID;
	///�û��¼�����
	TThostFtdcUserEventTypeType	UserEventType;
	///�û��¼����
	TThostFtdcSequenceNoType	EventSequenceNo;
	///�¼���������
	TThostFtdcDateType	EventDate;
	///�¼�����ʱ��
	TThostFtdcTimeType	EventTime;
	///�û��¼���Ϣ
	TThostFtdcUserEventInfoType	UserEventInfo;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
};

///��ѯǩԼ��������
struct CThostFtdcQryContractBankField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///���д���
	TThostFtdcBankIDType	BankID;
	///���з����Ĵ���
	TThostFtdcBankBrchIDType	BankBrchID;
};

///��ѯǩԼ������Ӧ
struct CThostFtdcContractBankField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///���д���
	TThostFtdcBankIDType	BankID;
	///���з����Ĵ���
	TThostFtdcBankBrchIDType	BankBrchID;
	///��������
	TThostFtdcBankNameType	BankName;
};

///Ͷ������ϳֲ���ϸ
struct CThostFtdcInvestorPositionCombineDetailField
{
	///������
	TThostFtdcDateType	TradingDay;
	///��������
	TThostFtdcDateType	OpenDate;
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///������
	TThostFtdcSettlementIDType	SettlementID;
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///��ϱ��
	TThostFtdcTradeIDType	ComTradeID;
	///��ϱ��
	TThostFtdcTradeIDType	TradeID;
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
	///Ͷ���ױ���־
	TThostFtdcHedgeFlagType	HedgeFlag;
	///����
	TThostFtdcDirectionType	Direction;
	///�ֲ���
	TThostFtdcVolumeType	TotalAmt;
	///Ͷ���߱�֤��
	TThostFtdcMoneyType	Margin;
	///��������֤��
	TThostFtdcMoneyType	ExchMargin;
	///��֤����
	TThostFtdcRatioType	MarginRateByMoney;
	///��֤����(������)
	TThostFtdcRatioType	MarginRateByVolume;
	///���ȱ��
	TThostFtdcLegIDType	LegID;
	///���ȳ���
	TThostFtdcLegMultipleType	LegMultiple;
	///��ϳֲֺ�Լ����
	TThostFtdcInstrumentIDType	CombInstrumentID;
};

///Ԥ��
struct CThostFtdcParkedOrderField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
	///��������
	TThostFtdcOrderRefType	OrderRef;
	///�û�����
	TThostFtdcUserIDType	UserID;
	///�����۸�����
	TThostFtdcOrderPriceTypeType	OrderPriceType;
	///��������
	TThostFtdcDirectionType	Direction;
	///��Ͽ�ƽ��־
	TThostFtdcCombOffsetFlagType	CombOffsetFlag;
	///���Ͷ���ױ���־
	TThostFtdcCombHedgeFlagType	CombHedgeFlag;
	///�۸�
	TThostFtdcPriceType	LimitPrice;
	///����
	TThostFtdcVolumeType	VolumeTotalOriginal;
	///��Ч������
	TThostFtdcTimeConditionType	TimeCondition;
	///GTD����
	TThostFtdcDateType	GTDDate;
	///�ɽ�������
	TThostFtdcVolumeConditionType	VolumeCondition;
	///��С�ɽ���
	TThostFtdcVolumeType	MinVolume;
	///��������
	TThostFtdcContingentConditionType	ContingentCondition;
	///ֹ���
	TThostFtdcPriceType	StopPrice;
	///ǿƽԭ��
	TThostFtdcForceCloseReasonType	ForceCloseReason;
	///�Զ������־
	TThostFtdcBoolType	IsAutoSuspend;
	///ҵ��Ԫ
	TThostFtdcBusinessUnitType	BusinessUnit;
	///������
	TThostFtdcRequestIDType	RequestID;
	///�û�ǿ����־
	TThostFtdcBoolType	UserForceClose;
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///Ԥ�񱨵����
	TThostFtdcParkedOrderIDType	ParkedOrderID;
	///�û�����
	TThostFtdcUserTypeType	UserType;
	///Ԥ��״̬
	TThostFtdcParkedOrderStatusType	Status;
	///�������
	TThostFtdcErrorIDType	ErrorID;
	///������Ϣ
	TThostFtdcErrorMsgType	ErrorMsg;
};

///����Ԥ�񵥲���
struct CThostFtdcParkedOrderActionField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///������������
	TThostFtdcOrderActionRefType	OrderActionRef;
	///��������
	TThostFtdcOrderRefType	OrderRef;
	///������
	TThostFtdcRequestIDType	RequestID;
	///ǰ�ñ��
	TThostFtdcFrontIDType	FrontID;
	///�Ự���
	TThostFtdcSessionIDType	SessionID;
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///�������
	TThostFtdcOrderSysIDType	OrderSysID;
	///������־
	TThostFtdcActionFlagType	ActionFlag;
	///�۸�
	TThostFtdcPriceType	LimitPrice;
	///�����仯
	TThostFtdcVolumeType	VolumeChange;
	///�û�����
	TThostFtdcUserIDType	UserID;
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
	///Ԥ�񳷵������
	TThostFtdcParkedOrderActionIDType	ParkedOrderActionID;
	///�û�����
	TThostFtdcUserTypeType	UserType;
	///Ԥ�񳷵�״̬
	TThostFtdcParkedOrderStatusType	Status;
	///�������
	TThostFtdcErrorIDType	ErrorID;
	///������Ϣ
	TThostFtdcErrorMsgType	ErrorMsg;
};

///��ѯԤ��
struct CThostFtdcQryParkedOrderField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
};

///��ѯԤ�񳷵�
struct CThostFtdcQryParkedOrderActionField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
};

///ɾ��Ԥ��
struct CThostFtdcRemoveParkedOrderField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///Ԥ�񱨵����
	TThostFtdcParkedOrderIDType	ParkedOrderID;
};

///ɾ��Ԥ�񳷵�
struct CThostFtdcRemoveParkedOrderActionField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///Ԥ�񳷵����
	TThostFtdcParkedOrderActionIDType	ParkedOrderActionID;
};

///���͹�˾�����ʽ��㷨��
struct CThostFtdcInvestorWithdrawAlgorithmField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���߷�Χ
	TThostFtdcInvestorRangeType	InvestorRange;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///�����ʽ����
	TThostFtdcRatioType	UsingRatio;
};

///��ѯ��ϳֲ���ϸ
struct CThostFtdcQryInvestorPositionCombineDetailField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///��ϳֲֺ�Լ����
	TThostFtdcInstrumentIDType	CombInstrumentID;
};

///�ɽ�����
struct CThostFtdcMarketDataAveragePriceField
{
	///���վ���
	TThostFtdcPriceType	AveragePrice;
};

///У��Ͷ��������
struct CThostFtdcVerifyInvestorPasswordField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///����
	TThostFtdcPasswordType	Password;
};

///�û�IP
struct CThostFtdcUserIPField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TThostFtdcUserIDType	UserID;
	///IP��ַ
	TThostFtdcIPAddressType	IPAddress;
	///IP��ַ����
	TThostFtdcIPAddressType	IPMask;
	///Mac��ַ
	TThostFtdcMacAddressType	MacAddress;
};

///�û��¼�֪ͨ��Ϣ
struct CThostFtdcTradingNoticeInfoField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///����ʱ��
	TThostFtdcTimeType	SendTime;
	///��Ϣ����
	TThostFtdcContentType	FieldContent;
	///����ϵ�к�
	TThostFtdcSequenceSeriesType	SequenceSeries;
	///���к�
	TThostFtdcSequenceNoType	SequenceNo;
};

///�û��¼�֪ͨ
struct CThostFtdcTradingNoticeField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���߷�Χ
	TThostFtdcInvestorRangeType	InvestorRange;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///����ϵ�к�
	TThostFtdcSequenceSeriesType	SequenceSeries;
	///�û�����
	TThostFtdcUserIDType	UserID;
	///����ʱ��
	TThostFtdcTimeType	SendTime;
	///���к�
	TThostFtdcSequenceNoType	SequenceNo;
	///��Ϣ����
	TThostFtdcContentType	FieldContent;
};

///��ѯ�����¼�֪ͨ
struct CThostFtdcQryTradingNoticeField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
};

///��ѯ���󱨵�
struct CThostFtdcQryErrOrderField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
};

///���󱨵�
struct CThostFtdcErrOrderField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
	///��������
	TThostFtdcOrderRefType	OrderRef;
	///�û�����
	TThostFtdcUserIDType	UserID;
	///�����۸�����
	TThostFtdcOrderPriceTypeType	OrderPriceType;
	///��������
	TThostFtdcDirectionType	Direction;
	///��Ͽ�ƽ��־
	TThostFtdcCombOffsetFlagType	CombOffsetFlag;
	///���Ͷ���ױ���־
	TThostFtdcCombHedgeFlagType	CombHedgeFlag;
	///�۸�
	TThostFtdcPriceType	LimitPrice;
	///����
	TThostFtdcVolumeType	VolumeTotalOriginal;
	///��Ч������
	TThostFtdcTimeConditionType	TimeCondition;
	///GTD����
	TThostFtdcDateType	GTDDate;
	///�ɽ�������
	TThostFtdcVolumeConditionType	VolumeCondition;
	///��С�ɽ���
	TThostFtdcVolumeType	MinVolume;
	///��������
	TThostFtdcContingentConditionType	ContingentCondition;
	///ֹ���
	TThostFtdcPriceType	StopPrice;
	///ǿƽԭ��
	TThostFtdcForceCloseReasonType	ForceCloseReason;
	///�Զ������־
	TThostFtdcBoolType	IsAutoSuspend;
	///ҵ��Ԫ
	TThostFtdcBusinessUnitType	BusinessUnit;
	///������
	TThostFtdcRequestIDType	RequestID;
	///�û�ǿ����־
	TThostFtdcBoolType	UserForceClose;
	///�������
	TThostFtdcErrorIDType	ErrorID;
	///������Ϣ
	TThostFtdcErrorMsgType	ErrorMsg;
};

///��ѯ���󱨵�����
struct CThostFtdcErrorConditionalOrderField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
	///��������
	TThostFtdcOrderRefType	OrderRef;
	///�û�����
	TThostFtdcUserIDType	UserID;
	///�����۸�����
	TThostFtdcOrderPriceTypeType	OrderPriceType;
	///��������
	TThostFtdcDirectionType	Direction;
	///��Ͽ�ƽ��־
	TThostFtdcCombOffsetFlagType	CombOffsetFlag;
	///���Ͷ���ױ���־
	TThostFtdcCombHedgeFlagType	CombHedgeFlag;
	///�۸�
	TThostFtdcPriceType	LimitPrice;
	///����
	TThostFtdcVolumeType	VolumeTotalOriginal;
	///��Ч������
	TThostFtdcTimeConditionType	TimeCondition;
	///GTD����
	TThostFtdcDateType	GTDDate;
	///�ɽ�������
	TThostFtdcVolumeConditionType	VolumeCondition;
	///��С�ɽ���
	TThostFtdcVolumeType	MinVolume;
	///��������
	TThostFtdcContingentConditionType	ContingentCondition;
	///ֹ���
	TThostFtdcPriceType	StopPrice;
	///ǿƽԭ��
	TThostFtdcForceCloseReasonType	ForceCloseReason;
	///�Զ������־
	TThostFtdcBoolType	IsAutoSuspend;
	///ҵ��Ԫ
	TThostFtdcBusinessUnitType	BusinessUnit;
	///������
	TThostFtdcRequestIDType	RequestID;
	///���ر������
	TThostFtdcOrderLocalIDType	OrderLocalID;
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///��Ա����
	TThostFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TThostFtdcClientIDType	ClientID;
	///��Լ�ڽ������Ĵ���
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///����������Ա����
	TThostFtdcTraderIDType	TraderID;
	///��װ���
	TThostFtdcInstallIDType	InstallID;
	///�����ύ״̬
	TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///������ʾ���
	TThostFtdcSequenceNoType	NotifySequence;
	///������
	TThostFtdcDateType	TradingDay;
	///������
	TThostFtdcSettlementIDType	SettlementID;
	///�������
	TThostFtdcOrderSysIDType	OrderSysID;
	///������Դ
	TThostFtdcOrderSourceType	OrderSource;
	///����״̬
	TThostFtdcOrderStatusType	OrderStatus;
	///��������
	TThostFtdcOrderTypeType	OrderType;
	///��ɽ�����
	TThostFtdcVolumeType	VolumeTraded;
	///ʣ������
	TThostFtdcVolumeType	VolumeTotal;
	///��������
	TThostFtdcDateType	InsertDate;
	///ί��ʱ��
	TThostFtdcTimeType	InsertTime;
	///����ʱ��
	TThostFtdcTimeType	ActiveTime;
	///����ʱ��
	TThostFtdcTimeType	SuspendTime;
	///����޸�ʱ��
	TThostFtdcTimeType	UpdateTime;
	///����ʱ��
	TThostFtdcTimeType	CancelTime;
	///����޸Ľ���������Ա����
	TThostFtdcTraderIDType	ActiveTraderID;
	///�����Ա���
	TThostFtdcParticipantIDType	ClearingPartID;
	///���
	TThostFtdcSequenceNoType	SequenceNo;
	///ǰ�ñ��
	TThostFtdcFrontIDType	FrontID;
	///�Ự���
	TThostFtdcSessionIDType	SessionID;
	///�û��˲�Ʒ��Ϣ
	TThostFtdcProductInfoType	UserProductInfo;
	///״̬��Ϣ
	TThostFtdcErrorMsgType	StatusMsg;
	///�û�ǿ����־
	TThostFtdcBoolType	UserForceClose;
	///�����û�����
	TThostFtdcUserIDType	ActiveUserID;
	///���͹�˾�������
	TThostFtdcSequenceNoType	BrokerOrderSeq;
	///��ر���
	TThostFtdcOrderSysIDType	RelativeOrderSysID;
	///�������
	TThostFtdcErrorIDType	ErrorID;
	///������Ϣ
	TThostFtdcErrorMsgType	ErrorMsg;
};

///��ѯ���󱨵�����
struct CThostFtdcQryErrOrderActionField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
};

///���󱨵�����
struct CThostFtdcErrOrderActionField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///������������
	TThostFtdcOrderActionRefType	OrderActionRef;
	///��������
	TThostFtdcOrderRefType	OrderRef;
	///������
	TThostFtdcRequestIDType	RequestID;
	///ǰ�ñ��
	TThostFtdcFrontIDType	FrontID;
	///�Ự���
	TThostFtdcSessionIDType	SessionID;
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///�������
	TThostFtdcOrderSysIDType	OrderSysID;
	///������־
	TThostFtdcActionFlagType	ActionFlag;
	///�۸�
	TThostFtdcPriceType	LimitPrice;
	///�����仯
	TThostFtdcVolumeType	VolumeChange;
	///��������
	TThostFtdcDateType	ActionDate;
	///����ʱ��
	TThostFtdcTimeType	ActionTime;
	///����������Ա����
	TThostFtdcTraderIDType	TraderID;
	///��װ���
	TThostFtdcInstallIDType	InstallID;
	///���ر������
	TThostFtdcOrderLocalIDType	OrderLocalID;
	///�������ر��
	TThostFtdcOrderLocalIDType	ActionLocalID;
	///��Ա����
	TThostFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TThostFtdcClientIDType	ClientID;
	///ҵ��Ԫ
	TThostFtdcBusinessUnitType	BusinessUnit;
	///��������״̬
	TThostFtdcOrderActionStatusType	OrderActionStatus;
	///�û�����
	TThostFtdcUserIDType	UserID;
	///״̬��Ϣ
	TThostFtdcErrorMsgType	StatusMsg;
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
	///�������
	TThostFtdcErrorIDType	ErrorID;
	///������Ϣ
	TThostFtdcErrorMsgType	ErrorMsg;
};

///��ѯ������״̬
struct CThostFtdcQryExchangeSequenceField
{
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
};

///������״̬
struct CThostFtdcExchangeSequenceField
{
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///���
	TThostFtdcSequenceNoType	SequenceNo;
	///��Լ����״̬
	TThostFtdcInstrumentStatusType	MarketStatus;
};

///���ݼ۸��ѯ��󱨵�����
struct CThostFtdcQueryMaxOrderVolumeWithPriceField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
	///��������
	TThostFtdcDirectionType	Direction;
	///��ƽ��־
	TThostFtdcOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	TThostFtdcHedgeFlagType	HedgeFlag;
	///���������������
	TThostFtdcVolumeType	MaxVolume;
	///�����۸�
	TThostFtdcPriceType	Price;
};

///��ѯ���͹�˾���ײ���
struct CThostFtdcQryBrokerTradingParamsField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
};

///���͹�˾���ײ���
struct CThostFtdcBrokerTradingParamsField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///��֤��۸�����
	TThostFtdcMarginPriceTypeType	MarginPriceType;
	///ӯ���㷨
	TThostFtdcAlgorithmType	Algorithm;
	///�����Ƿ����ƽ��ӯ��
	TThostFtdcIncludeCloseProfitType	AvailIncludeCloseProfit;
};

///��ѯ���͹�˾�����㷨
struct CThostFtdcQryBrokerTradingAlgosField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
};

///���͹�˾�����㷨
struct CThostFtdcBrokerTradingAlgosField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
	///�ֲִ����㷨���
	TThostFtdcHandlePositionAlgoIDType	HandlePositionAlgoID;
	///Ѱ�ұ�֤�����㷨���
	TThostFtdcFindMarginRateAlgoIDType	FindMarginRateAlgoID;
	///�ʽ����㷨���
	TThostFtdcHandleTradingAccountAlgoIDType	HandleTradingAccountAlgoID;
};

///��ѯ���͹�˾�ʽ�
struct CThostFtdcQueryBrokerDepositField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
};

///���͹�˾�ʽ�
struct CThostFtdcBrokerDepositField
{
	///��������
	TThostFtdcTradeDateType	TradingDay;
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///��Ա����
	TThostFtdcParticipantIDType	ParticipantID;
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///�ϴν���׼����
	TThostFtdcMoneyType	PreBalance;
	///��ǰ��֤���ܶ�
	TThostFtdcMoneyType	CurrMargin;
	///ƽ��ӯ��
	TThostFtdcMoneyType	CloseProfit;
	///�ڻ�����׼����
	TThostFtdcMoneyType	Balance;
	///�����
	TThostFtdcMoneyType	Deposit;
	///������
	TThostFtdcMoneyType	Withdraw;
	///�����ʽ�
	TThostFtdcMoneyType	Available;
	///����׼����
	TThostFtdcMoneyType	Reserve;
	///����ı�֤��
	TThostFtdcMoneyType	FrozenMargin;
};

///��ѯ��֤����ϵͳ���͹�˾��Կ
struct CThostFtdcQryCFMMCBrokerKeyField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
};

///��֤����ϵͳ���͹�˾��Կ
struct CThostFtdcCFMMCBrokerKeyField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///���͹�˾ͳһ����
	TThostFtdcParticipantIDType	ParticipantID;
	///��Կ��������
	TThostFtdcDateType	CreateDate;
	///��Կ����ʱ��
	TThostFtdcTimeType	CreateTime;
	///��Կ���
	TThostFtdcSequenceNoType	KeyID;
	///��̬��Կ
	TThostFtdcCFMMCKeyType	CurrentKey;
	///��̬��Կ����
	TThostFtdcCFMMCKeyKindType	KeyKind;
};

///��֤����ϵͳ���͹�˾�ʽ��˻���Կ
struct CThostFtdcCFMMCTradingAccountKeyField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///���͹�˾ͳһ����
	TThostFtdcParticipantIDType	ParticipantID;
	///Ͷ�����ʺ�
	TThostFtdcAccountIDType	AccountID;
	///��Կ���
	TThostFtdcSequenceNoType	KeyID;
	///��̬��Կ
	TThostFtdcCFMMCKeyType	CurrentKey;
};

///�����ѯ��֤����ϵͳ���͹�˾�ʽ��˻���Կ
struct CThostFtdcQryCFMMCTradingAccountKeyField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
};

///�û���̬���Ʋ���
struct CThostFtdcBrokerUserOTPParamField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TThostFtdcUserIDType	UserID;
	///��̬�����ṩ��
	TThostFtdcOTPVendorsIDType	OTPVendorsID;
	///��̬�������к�
	TThostFtdcSerialNumberType	SerialNumber;
	///������Կ
	TThostFtdcAuthKeyType	AuthKey;
	///Ư��ֵ
	TThostFtdcLastDriftType	LastDrift;
	///�ɹ�ֵ
	TThostFtdcLastSuccessType	LastSuccess;
	///��̬��������
	TThostFtdcOTPTypeType	OTPType;
};

///�ֹ�ͬ���û���̬����
struct CThostFtdcManualSyncBrokerUserOTPField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TThostFtdcUserIDType	UserID;
	///��̬��������
	TThostFtdcOTPTypeType	OTPType;
	///��һ����̬����
	TThostFtdcPasswordType	FirstOTP;
	///�ڶ�����̬����
	TThostFtdcPasswordType	SecondOTP;
};

///Ͷ������������ģ��
struct CThostFtdcCommRateModelField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///��������ģ�����
	TThostFtdcInvestorIDType	CommModelID;
	///ģ������
	TThostFtdcCommModelNameType	CommModelName;
};

///�����ѯͶ������������ģ��
struct CThostFtdcQryCommRateModelField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///��������ģ�����
	TThostFtdcInvestorIDType	CommModelID;
};

///�ֵ��۵���Ϣ
struct CThostFtdcEWarrantOffsetField
{
	///��������
	TThostFtdcTradeDateType	TradingDay;
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
	///��������
	TThostFtdcDirectionType	Direction;
	///Ͷ���ױ���־
	TThostFtdcHedgeFlagType	HedgeFlag;
	///����
	TThostFtdcVolumeType	Volume;
};

///��ѯ�ֵ��۵���Ϣ
struct CThostFtdcQryEWarrantOffsetField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TThostFtdcInstrumentIDType	InstrumentID;
};

///ת�ʿ�������
struct CThostFtdcReqOpenAccountField
{
	///ҵ������
	TThostFtdcTradeCodeType	TradeCode;
	///���д���
	TThostFtdcBankIDType	BankID;
	///���з�֧��������
	TThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TThostFtdcSessionIDType	SessionID;
	///�ͻ�����
	TThostFtdcIndividualNameType	CustomerName;
	///֤������
	TThostFtdcIdCardTypeType	IdCardType;
	///֤������
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�Ա�
	TThostFtdcGenderType	Gender;
	///���Ҵ���
	TThostFtdcCountryCodeType	CountryCode;
	///�ͻ�����
	TThostFtdcCustTypeType	CustType;
	///��ַ
	TThostFtdcAddressType	Address;
	///�ʱ�
	TThostFtdcZipCodeType	ZipCode;
	///�绰����
	TThostFtdcTelephoneType	Telephone;
	///�ֻ�
	TThostFtdcMobilePhoneType	MobilePhone;
	///����
	TThostFtdcFaxType	Fax;
	///�����ʼ�
	TThostFtdcEMailType	EMail;
	///�ʽ��˻�״̬
	TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
	///�����ʺ�
	TThostFtdcBankAccountType	BankAccount;
	///��������
	TThostFtdcPasswordType	BankPassWord;
	///Ͷ�����ʺ�
	TThostFtdcAccountIDType	AccountID;
	///�ڻ�����
	TThostFtdcPasswordType	Password;
	///��װ���
	TThostFtdcInstallIDType	InstallID;
	///��֤�ͻ�֤�������־
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///���ִ���
	TThostFtdcCurrencyIDType	CurrencyID;
	///�㳮��־
	TThostFtdcCashExchangeCodeType	CashExchangeCode;
	///ժҪ
	TThostFtdcDigestType	Digest;
	///�����ʺ�����
	TThostFtdcBankAccTypeType	BankAccType;
	///������־
	TThostFtdcDeviceIDType	DeviceID;
	///�ڻ���λ�ʺ�����
	TThostFtdcBankAccTypeType	BankSecuAccType;
	///�ڻ���˾���б���
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///�ڻ���λ�ʺ�
	TThostFtdcBankAccountType	BankSecuAcc;
	///���������־
	TThostFtdcPwdFlagType	BankPwdFlag;
	///�ڻ��ʽ�����˶Ա�־
	TThostFtdcPwdFlagType	SecuPwdFlag;
	///���׹�Ա
	TThostFtdcOperNoType	OperNo;
	///����ID
	TThostFtdcTIDType	TID;
};

///ת����������
struct CThostFtdcReqCancelAccountField
{
	///ҵ������
	TThostFtdcTradeCodeType	TradeCode;
	///���д���
	TThostFtdcBankIDType	BankID;
	///���з�֧��������
	TThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TThostFtdcSessionIDType	SessionID;
	///�ͻ�����
	TThostFtdcIndividualNameType	CustomerName;
	///֤������
	TThostFtdcIdCardTypeType	IdCardType;
	///֤������
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�Ա�
	TThostFtdcGenderType	Gender;
	///���Ҵ���
	TThostFtdcCountryCodeType	CountryCode;
	///�ͻ�����
	TThostFtdcCustTypeType	CustType;
	///��ַ
	TThostFtdcAddressType	Address;
	///�ʱ�
	TThostFtdcZipCodeType	ZipCode;
	///�绰����
	TThostFtdcTelephoneType	Telephone;
	///�ֻ�
	TThostFtdcMobilePhoneType	MobilePhone;
	///����
	TThostFtdcFaxType	Fax;
	///�����ʼ�
	TThostFtdcEMailType	EMail;
	///�ʽ��˻�״̬
	TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
	///�����ʺ�
	TThostFtdcBankAccountType	BankAccount;
	///��������
	TThostFtdcPasswordType	BankPassWord;
	///Ͷ�����ʺ�
	TThostFtdcAccountIDType	AccountID;
	///�ڻ�����
	TThostFtdcPasswordType	Password;
	///��װ���
	TThostFtdcInstallIDType	InstallID;
	///��֤�ͻ�֤�������־
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///���ִ���
	TThostFtdcCurrencyIDType	CurrencyID;
	///�㳮��־
	TThostFtdcCashExchangeCodeType	CashExchangeCode;
	///ժҪ
	TThostFtdcDigestType	Digest;
	///�����ʺ�����
	TThostFtdcBankAccTypeType	BankAccType;
	///������־
	TThostFtdcDeviceIDType	DeviceID;
	///�ڻ���λ�ʺ�����
	TThostFtdcBankAccTypeType	BankSecuAccType;
	///�ڻ���˾���б���
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///�ڻ���λ�ʺ�
	TThostFtdcBankAccountType	BankSecuAcc;
	///���������־
	TThostFtdcPwdFlagType	BankPwdFlag;
	///�ڻ��ʽ�����˶Ա�־
	TThostFtdcPwdFlagType	SecuPwdFlag;
	///���׹�Ա
	TThostFtdcOperNoType	OperNo;
	///����ID
	TThostFtdcTIDType	TID;
};

///��������˻�����
struct CThostFtdcReqChangeAccountField
{
	///ҵ������
	TThostFtdcTradeCodeType	TradeCode;
	///���д���
	TThostFtdcBankIDType	BankID;
	///���з�֧��������
	TThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TThostFtdcSessionIDType	SessionID;
	///�ͻ�����
	TThostFtdcIndividualNameType	CustomerName;
	///֤������
	TThostFtdcIdCardTypeType	IdCardType;
	///֤������
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�Ա�
	TThostFtdcGenderType	Gender;
	///���Ҵ���
	TThostFtdcCountryCodeType	CountryCode;
	///�ͻ�����
	TThostFtdcCustTypeType	CustType;
	///��ַ
	TThostFtdcAddressType	Address;
	///�ʱ�
	TThostFtdcZipCodeType	ZipCode;
	///�绰����
	TThostFtdcTelephoneType	Telephone;
	///�ֻ�
	TThostFtdcMobilePhoneType	MobilePhone;
	///����
	TThostFtdcFaxType	Fax;
	///�����ʼ�
	TThostFtdcEMailType	EMail;
	///�ʽ��˻�״̬
	TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
	///�����ʺ�
	TThostFtdcBankAccountType	BankAccount;
	///��������
	TThostFtdcPasswordType	BankPassWord;
	///�������ʺ�
	TThostFtdcBankAccountType	NewBankAccount;
	///����������
	TThostFtdcPasswordType	NewBankPassWord;
	///Ͷ�����ʺ�
	TThostFtdcAccountIDType	AccountID;
	///�ڻ�����
	TThostFtdcPasswordType	Password;
	///�����ʺ�����
	TThostFtdcBankAccTypeType	BankAccType;
	///��װ���
	TThostFtdcInstallIDType	InstallID;
	///��֤�ͻ�֤�������־
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///���ִ���
	TThostFtdcCurrencyIDType	CurrencyID;
	///�ڻ���˾���б���
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///���������־
	TThostFtdcPwdFlagType	BankPwdFlag;
	///�ڻ��ʽ�����˶Ա�־
	TThostFtdcPwdFlagType	SecuPwdFlag;
	///����ID
	TThostFtdcTIDType	TID;
	///ժҪ
	TThostFtdcDigestType	Digest;
};

///ת������
struct CThostFtdcReqTransferField
{
	///ҵ������
	TThostFtdcTradeCodeType	TradeCode;
	///���д���
	TThostFtdcBankIDType	BankID;
	///���з�֧��������
	TThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TThostFtdcSessionIDType	SessionID;
	///�ͻ�����
	TThostFtdcIndividualNameType	CustomerName;
	///֤������
	TThostFtdcIdCardTypeType	IdCardType;
	///֤������
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�ͻ�����
	TThostFtdcCustTypeType	CustType;
	///�����ʺ�
	TThostFtdcBankAccountType	BankAccount;
	///��������
	TThostFtdcPasswordType	BankPassWord;
	///Ͷ�����ʺ�
	TThostFtdcAccountIDType	AccountID;
	///�ڻ�����
	TThostFtdcPasswordType	Password;
	///��װ���
	TThostFtdcInstallIDType	InstallID;
	///�ڻ���˾��ˮ��
	TThostFtdcFutureSerialType	FutureSerial;
	///�û���ʶ
	TThostFtdcUserIDType	UserID;
	///��֤�ͻ�֤�������־
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///���ִ���
	TThostFtdcCurrencyIDType	CurrencyID;
	///ת�ʽ��
	TThostFtdcTradeAmountType	TradeAmount;
	///�ڻ���ȡ���
	TThostFtdcTradeAmountType	FutureFetchAmount;
	///����֧����־
	TThostFtdcFeePayFlagType	FeePayFlag;
	///Ӧ�տͻ�����
	TThostFtdcCustFeeType	CustFee;
	///Ӧ���ڻ���˾����
	TThostFtdcFutureFeeType	BrokerFee;
	///���ͷ������շ�����Ϣ
	TThostFtdcAddInfoType	Message;
	///ժҪ
	TThostFtdcDigestType	Digest;
	///�����ʺ�����
	TThostFtdcBankAccTypeType	BankAccType;
	///������־
	TThostFtdcDeviceIDType	DeviceID;
	///�ڻ���λ�ʺ�����
	TThostFtdcBankAccTypeType	BankSecuAccType;
	///�ڻ���˾���б���
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///�ڻ���λ�ʺ�
	TThostFtdcBankAccountType	BankSecuAcc;
	///���������־
	TThostFtdcPwdFlagType	BankPwdFlag;
	///�ڻ��ʽ�����˶Ա�־
	TThostFtdcPwdFlagType	SecuPwdFlag;
	///���׹�Ա
	TThostFtdcOperNoType	OperNo;
	///������
	TThostFtdcRequestIDType	RequestID;
	///����ID
	TThostFtdcTIDType	TID;
	///ת�˽���״̬
	TThostFtdcTransferStatusType	TransferStatus;
};

///���з��������ʽ�ת�ڻ���Ӧ
struct CThostFtdcRspTransferField
{
	///ҵ������
	TThostFtdcTradeCodeType	TradeCode;
	///���д���
	TThostFtdcBankIDType	BankID;
	///���з�֧��������
	TThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TThostFtdcSessionIDType	SessionID;
	///�ͻ�����
	TThostFtdcIndividualNameType	CustomerName;
	///֤������
	TThostFtdcIdCardTypeType	IdCardType;
	///֤������
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�ͻ�����
	TThostFtdcCustTypeType	CustType;
	///�����ʺ�
	TThostFtdcBankAccountType	BankAccount;
	///��������
	TThostFtdcPasswordType	BankPassWord;
	///Ͷ�����ʺ�
	TThostFtdcAccountIDType	AccountID;
	///�ڻ�����
	TThostFtdcPasswordType	Password;
	///��װ���
	TThostFtdcInstallIDType	InstallID;
	///�ڻ���˾��ˮ��
	TThostFtdcFutureSerialType	FutureSerial;
	///�û���ʶ
	TThostFtdcUserIDType	UserID;
	///��֤�ͻ�֤�������־
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///���ִ���
	TThostFtdcCurrencyIDType	CurrencyID;
	///ת�ʽ��
	TThostFtdcTradeAmountType	TradeAmount;
	///�ڻ���ȡ���
	TThostFtdcTradeAmountType	FutureFetchAmount;
	///����֧����־
	TThostFtdcFeePayFlagType	FeePayFlag;
	///Ӧ�տͻ�����
	TThostFtdcCustFeeType	CustFee;
	///Ӧ���ڻ���˾����
	TThostFtdcFutureFeeType	BrokerFee;
	///���ͷ������շ�����Ϣ
	TThostFtdcAddInfoType	Message;
	///ժҪ
	TThostFtdcDigestType	Digest;
	///�����ʺ�����
	TThostFtdcBankAccTypeType	BankAccType;
	///������־
	TThostFtdcDeviceIDType	DeviceID;
	///�ڻ���λ�ʺ�����
	TThostFtdcBankAccTypeType	BankSecuAccType;
	///�ڻ���˾���б���
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///�ڻ���λ�ʺ�
	TThostFtdcBankAccountType	BankSecuAcc;
	///���������־
	TThostFtdcPwdFlagType	BankPwdFlag;
	///�ڻ��ʽ�����˶Ա�־
	TThostFtdcPwdFlagType	SecuPwdFlag;
	///���׹�Ա
	TThostFtdcOperNoType	OperNo;
	///������
	TThostFtdcRequestIDType	RequestID;
	///����ID
	TThostFtdcTIDType	TID;
	///ת�˽���״̬
	TThostFtdcTransferStatusType	TransferStatus;
	///�������
	TThostFtdcErrorIDType	ErrorID;
	///������Ϣ
	TThostFtdcErrorMsgType	ErrorMsg;
};

///��������
struct CThostFtdcReqRepealField
{
	///����ʱ����
	TThostFtdcRepealTimeIntervalType	RepealTimeInterval;
	///�Ѿ���������
	TThostFtdcRepealedTimesType	RepealedTimes;
	///���г�����־
	TThostFtdcBankRepealFlagType	BankRepealFlag;
	///���̳�����־
	TThostFtdcBrokerRepealFlagType	BrokerRepealFlag;
	///������ƽ̨��ˮ��
	TThostFtdcPlateSerialType	PlateRepealSerial;
	///������������ˮ��
	TThostFtdcBankSerialType	BankRepealSerial;
	///�������ڻ���ˮ��
	TThostFtdcFutureSerialType	FutureRepealSerial;
	///ҵ������
	TThostFtdcTradeCodeType	TradeCode;
	///���д���
	TThostFtdcBankIDType	BankID;
	///���з�֧��������
	TThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TThostFtdcSessionIDType	SessionID;
	///�ͻ�����
	TThostFtdcIndividualNameType	CustomerName;
	///֤������
	TThostFtdcIdCardTypeType	IdCardType;
	///֤������
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�ͻ�����
	TThostFtdcCustTypeType	CustType;
	///�����ʺ�
	TThostFtdcBankAccountType	BankAccount;
	///��������
	TThostFtdcPasswordType	BankPassWord;
	///Ͷ�����ʺ�
	TThostFtdcAccountIDType	AccountID;
	///�ڻ�����
	TThostFtdcPasswordType	Password;
	///��װ���
	TThostFtdcInstallIDType	InstallID;
	///�ڻ���˾��ˮ��
	TThostFtdcFutureSerialType	FutureSerial;
	///�û���ʶ
	TThostFtdcUserIDType	UserID;
	///��֤�ͻ�֤�������־
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///���ִ���
	TThostFtdcCurrencyIDType	CurrencyID;
	///ת�ʽ��
	TThostFtdcTradeAmountType	TradeAmount;
	///�ڻ���ȡ���
	TThostFtdcTradeAmountType	FutureFetchAmount;
	///����֧����־
	TThostFtdcFeePayFlagType	FeePayFlag;
	///Ӧ�տͻ�����
	TThostFtdcCustFeeType	CustFee;
	///Ӧ���ڻ���˾����
	TThostFtdcFutureFeeType	BrokerFee;
	///���ͷ������շ�����Ϣ
	TThostFtdcAddInfoType	Message;
	///ժҪ
	TThostFtdcDigestType	Digest;
	///�����ʺ�����
	TThostFtdcBankAccTypeType	BankAccType;
	///������־
	TThostFtdcDeviceIDType	DeviceID;
	///�ڻ���λ�ʺ�����
	TThostFtdcBankAccTypeType	BankSecuAccType;
	///�ڻ���˾���б���
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///�ڻ���λ�ʺ�
	TThostFtdcBankAccountType	BankSecuAcc;
	///���������־
	TThostFtdcPwdFlagType	BankPwdFlag;
	///�ڻ��ʽ�����˶Ա�־
	TThostFtdcPwdFlagType	SecuPwdFlag;
	///���׹�Ա
	TThostFtdcOperNoType	OperNo;
	///������
	TThostFtdcRequestIDType	RequestID;
	///����ID
	TThostFtdcTIDType	TID;
	///ת�˽���״̬
	TThostFtdcTransferStatusType	TransferStatus;
};

///������Ӧ
struct CThostFtdcRspRepealField
{
	///����ʱ����
	TThostFtdcRepealTimeIntervalType	RepealTimeInterval;
	///�Ѿ���������
	TThostFtdcRepealedTimesType	RepealedTimes;
	///���г�����־
	TThostFtdcBankRepealFlagType	BankRepealFlag;
	///���̳�����־
	TThostFtdcBrokerRepealFlagType	BrokerRepealFlag;
	///������ƽ̨��ˮ��
	TThostFtdcPlateSerialType	PlateRepealSerial;
	///������������ˮ��
	TThostFtdcBankSerialType	BankRepealSerial;
	///�������ڻ���ˮ��
	TThostFtdcFutureSerialType	FutureRepealSerial;
	///ҵ������
	TThostFtdcTradeCodeType	TradeCode;
	///���д���
	TThostFtdcBankIDType	BankID;
	///���з�֧��������
	TThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TThostFtdcSessionIDType	SessionID;
	///�ͻ�����
	TThostFtdcIndividualNameType	CustomerName;
	///֤������
	TThostFtdcIdCardTypeType	IdCardType;
	///֤������
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�ͻ�����
	TThostFtdcCustTypeType	CustType;
	///�����ʺ�
	TThostFtdcBankAccountType	BankAccount;
	///��������
	TThostFtdcPasswordType	BankPassWord;
	///Ͷ�����ʺ�
	TThostFtdcAccountIDType	AccountID;
	///�ڻ�����
	TThostFtdcPasswordType	Password;
	///��װ���
	TThostFtdcInstallIDType	InstallID;
	///�ڻ���˾��ˮ��
	TThostFtdcFutureSerialType	FutureSerial;
	///�û���ʶ
	TThostFtdcUserIDType	UserID;
	///��֤�ͻ�֤�������־
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///���ִ���
	TThostFtdcCurrencyIDType	CurrencyID;
	///ת�ʽ��
	TThostFtdcTradeAmountType	TradeAmount;
	///�ڻ���ȡ���
	TThostFtdcTradeAmountType	FutureFetchAmount;
	///����֧����־
	TThostFtdcFeePayFlagType	FeePayFlag;
	///Ӧ�տͻ�����
	TThostFtdcCustFeeType	CustFee;
	///Ӧ���ڻ���˾����
	TThostFtdcFutureFeeType	BrokerFee;
	///���ͷ������շ�����Ϣ
	TThostFtdcAddInfoType	Message;
	///ժҪ
	TThostFtdcDigestType	Digest;
	///�����ʺ�����
	TThostFtdcBankAccTypeType	BankAccType;
	///������־
	TThostFtdcDeviceIDType	DeviceID;
	///�ڻ���λ�ʺ�����
	TThostFtdcBankAccTypeType	BankSecuAccType;
	///�ڻ���˾���б���
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///�ڻ���λ�ʺ�
	TThostFtdcBankAccountType	BankSecuAcc;
	///���������־
	TThostFtdcPwdFlagType	BankPwdFlag;
	///�ڻ��ʽ�����˶Ա�־
	TThostFtdcPwdFlagType	SecuPwdFlag;
	///���׹�Ա
	TThostFtdcOperNoType	OperNo;
	///������
	TThostFtdcRequestIDType	RequestID;
	///����ID
	TThostFtdcTIDType	TID;
	///ת�˽���״̬
	TThostFtdcTransferStatusType	TransferStatus;
	///�������
	TThostFtdcErrorIDType	ErrorID;
	///������Ϣ
	TThostFtdcErrorMsgType	ErrorMsg;
};

///��ѯ�˻���Ϣ����
struct CThostFtdcReqQueryAccountField
{
	///ҵ������
	TThostFtdcTradeCodeType	TradeCode;
	///���д���
	TThostFtdcBankIDType	BankID;
	///���з�֧��������
	TThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TThostFtdcSessionIDType	SessionID;
	///�ͻ�����
	TThostFtdcIndividualNameType	CustomerName;
	///֤������
	TThostFtdcIdCardTypeType	IdCardType;
	///֤������
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�ͻ�����
	TThostFtdcCustTypeType	CustType;
	///�����ʺ�
	TThostFtdcBankAccountType	BankAccount;
	///��������
	TThostFtdcPasswordType	BankPassWord;
	///Ͷ�����ʺ�
	TThostFtdcAccountIDType	AccountID;
	///�ڻ�����
	TThostFtdcPasswordType	Password;
	///�ڻ���˾��ˮ��
	TThostFtdcFutureSerialType	FutureSerial;
	///��װ���
	TThostFtdcInstallIDType	InstallID;
	///�û���ʶ
	TThostFtdcUserIDType	UserID;
	///��֤�ͻ�֤�������־
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///���ִ���
	TThostFtdcCurrencyIDType	CurrencyID;
	///ժҪ
	TThostFtdcDigestType	Digest;
	///�����ʺ�����
	TThostFtdcBankAccTypeType	BankAccType;
	///������־
	TThostFtdcDeviceIDType	DeviceID;
	///�ڻ���λ�ʺ�����
	TThostFtdcBankAccTypeType	BankSecuAccType;
	///�ڻ���˾���б���
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///�ڻ���λ�ʺ�
	TThostFtdcBankAccountType	BankSecuAcc;
	///���������־
	TThostFtdcPwdFlagType	BankPwdFlag;
	///�ڻ��ʽ�����˶Ա�־
	TThostFtdcPwdFlagType	SecuPwdFlag;
	///���׹�Ա
	TThostFtdcOperNoType	OperNo;
	///������
	TThostFtdcRequestIDType	RequestID;
	///����ID
	TThostFtdcTIDType	TID;
};

///��ѯ�˻���Ϣ��Ӧ
struct CThostFtdcRspQueryAccountField
{
	///ҵ������
	TThostFtdcTradeCodeType	TradeCode;
	///���д���
	TThostFtdcBankIDType	BankID;
	///���з�֧��������
	TThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TThostFtdcSessionIDType	SessionID;
	///�ͻ�����
	TThostFtdcIndividualNameType	CustomerName;
	///֤������
	TThostFtdcIdCardTypeType	IdCardType;
	///֤������
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�ͻ�����
	TThostFtdcCustTypeType	CustType;
	///�����ʺ�
	TThostFtdcBankAccountType	BankAccount;
	///��������
	TThostFtdcPasswordType	BankPassWord;
	///Ͷ�����ʺ�
	TThostFtdcAccountIDType	AccountID;
	///�ڻ�����
	TThostFtdcPasswordType	Password;
	///�ڻ���˾��ˮ��
	TThostFtdcFutureSerialType	FutureSerial;
	///��װ���
	TThostFtdcInstallIDType	InstallID;
	///�û���ʶ
	TThostFtdcUserIDType	UserID;
	///��֤�ͻ�֤�������־
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///���ִ���
	TThostFtdcCurrencyIDType	CurrencyID;
	///ժҪ
	TThostFtdcDigestType	Digest;
	///�����ʺ�����
	TThostFtdcBankAccTypeType	BankAccType;
	///������־
	TThostFtdcDeviceIDType	DeviceID;
	///�ڻ���λ�ʺ�����
	TThostFtdcBankAccTypeType	BankSecuAccType;
	///�ڻ���˾���б���
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///�ڻ���λ�ʺ�
	TThostFtdcBankAccountType	BankSecuAcc;
	///���������־
	TThostFtdcPwdFlagType	BankPwdFlag;
	///�ڻ��ʽ�����˶Ա�־
	TThostFtdcPwdFlagType	SecuPwdFlag;
	///���׹�Ա
	TThostFtdcOperNoType	OperNo;
	///������
	TThostFtdcRequestIDType	RequestID;
	///����ID
	TThostFtdcTIDType	TID;
	///���п��ý��
	TThostFtdcTradeAmountType	BankUseAmount;
	///���п�ȡ���
	TThostFtdcTradeAmountType	BankFetchAmount;
};

///����ǩ��ǩ��
struct CThostFtdcFutureSignIOField
{
	///ҵ������
	TThostFtdcTradeCodeType	TradeCode;
	///���д���
	TThostFtdcBankIDType	BankID;
	///���з�֧��������
	TThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TThostFtdcSessionIDType	SessionID;
	///��װ���
	TThostFtdcInstallIDType	InstallID;
	///�û���ʶ
	TThostFtdcUserIDType	UserID;
	///ժҪ
	TThostFtdcDigestType	Digest;
	///���ִ���
	TThostFtdcCurrencyIDType	CurrencyID;
	///������־
	TThostFtdcDeviceIDType	DeviceID;
	///�ڻ���˾���б���
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///���׹�Ա
	TThostFtdcOperNoType	OperNo;
	///������
	TThostFtdcRequestIDType	RequestID;
	///����ID
	TThostFtdcTIDType	TID;
};

///����ǩ����Ӧ
struct CThostFtdcRspFutureSignInField
{
	///ҵ������
	TThostFtdcTradeCodeType	TradeCode;
	///���д���
	TThostFtdcBankIDType	BankID;
	///���з�֧��������
	TThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TThostFtdcSessionIDType	SessionID;
	///��װ���
	TThostFtdcInstallIDType	InstallID;
	///�û���ʶ
	TThostFtdcUserIDType	UserID;
	///ժҪ
	TThostFtdcDigestType	Digest;
	///���ִ���
	TThostFtdcCurrencyIDType	CurrencyID;
	///������־
	TThostFtdcDeviceIDType	DeviceID;
	///�ڻ���˾���б���
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///���׹�Ա
	TThostFtdcOperNoType	OperNo;
	///������
	TThostFtdcRequestIDType	RequestID;
	///����ID
	TThostFtdcTIDType	TID;
	///�������
	TThostFtdcErrorIDType	ErrorID;
	///������Ϣ
	TThostFtdcErrorMsgType	ErrorMsg;
	///PIN��Կ
	TThostFtdcPasswordKeyType	PinKey;
	///MAC��Կ
	TThostFtdcPasswordKeyType	MacKey;
};

///����ǩ������
struct CThostFtdcReqFutureSignOutField
{
	///ҵ������
	TThostFtdcTradeCodeType	TradeCode;
	///���д���
	TThostFtdcBankIDType	BankID;
	///���з�֧��������
	TThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TThostFtdcSessionIDType	SessionID;
	///��װ���
	TThostFtdcInstallIDType	InstallID;
	///�û���ʶ
	TThostFtdcUserIDType	UserID;
	///ժҪ
	TThostFtdcDigestType	Digest;
	///���ִ���
	TThostFtdcCurrencyIDType	CurrencyID;
	///������־
	TThostFtdcDeviceIDType	DeviceID;
	///�ڻ���˾���б���
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///���׹�Ա
	TThostFtdcOperNoType	OperNo;
	///������
	TThostFtdcRequestIDType	RequestID;
	///����ID
	TThostFtdcTIDType	TID;
};

///����ǩ����Ӧ
struct CThostFtdcRspFutureSignOutField
{
	///ҵ������
	TThostFtdcTradeCodeType	TradeCode;
	///���д���
	TThostFtdcBankIDType	BankID;
	///���з�֧��������
	TThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TThostFtdcSessionIDType	SessionID;
	///��װ���
	TThostFtdcInstallIDType	InstallID;
	///�û���ʶ
	TThostFtdcUserIDType	UserID;
	///ժҪ
	TThostFtdcDigestType	Digest;
	///���ִ���
	TThostFtdcCurrencyIDType	CurrencyID;
	///������־
	TThostFtdcDeviceIDType	DeviceID;
	///�ڻ���˾���б���
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///���׹�Ա
	TThostFtdcOperNoType	OperNo;
	///������
	TThostFtdcRequestIDType	RequestID;
	///����ID
	TThostFtdcTIDType	TID;
	///�������
	TThostFtdcErrorIDType	ErrorID;
	///������Ϣ
	TThostFtdcErrorMsgType	ErrorMsg;
};

///��ѯָ����ˮ�ŵĽ��׽������
struct CThostFtdcReqQueryTradeResultBySerialField
{
	///ҵ������
	TThostFtdcTradeCodeType	TradeCode;
	///���д���
	TThostFtdcBankIDType	BankID;
	///���з�֧��������
	TThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TThostFtdcSessionIDType	SessionID;
	///��ˮ��
	TThostFtdcSerialType	Reference;
	///����ˮ�ŷ����ߵĻ�������
	TThostFtdcInstitutionTypeType	RefrenceIssureType;
	///����ˮ�ŷ����߻�������
	TThostFtdcOrganCodeType	RefrenceIssure;
	///�ͻ�����
	TThostFtdcIndividualNameType	CustomerName;
	///֤������
	TThostFtdcIdCardTypeType	IdCardType;
	///֤������
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�ͻ�����
	TThostFtdcCustTypeType	CustType;
	///�����ʺ�
	TThostFtdcBankAccountType	BankAccount;
	///��������
	TThostFtdcPasswordType	BankPassWord;
	///Ͷ�����ʺ�
	TThostFtdcAccountIDType	AccountID;
	///�ڻ�����
	TThostFtdcPasswordType	Password;
	///���ִ���
	TThostFtdcCurrencyIDType	CurrencyID;
	///ת�ʽ��
	TThostFtdcTradeAmountType	TradeAmount;
	///ժҪ
	TThostFtdcDigestType	Digest;
};

///��ѯָ����ˮ�ŵĽ��׽����Ӧ
struct CThostFtdcRspQueryTradeResultBySerialField
{
	///ҵ������
	TThostFtdcTradeCodeType	TradeCode;
	///���д���
	TThostFtdcBankIDType	BankID;
	///���з�֧��������
	TThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TThostFtdcSessionIDType	SessionID;
	///�������
	TThostFtdcErrorIDType	ErrorID;
	///������Ϣ
	TThostFtdcErrorMsgType	ErrorMsg;
	///��ˮ��
	TThostFtdcSerialType	Reference;
	///����ˮ�ŷ����ߵĻ�������
	TThostFtdcInstitutionTypeType	RefrenceIssureType;
	///����ˮ�ŷ����߻�������
	TThostFtdcOrganCodeType	RefrenceIssure;
	///ԭʼ���ش���
	TThostFtdcReturnCodeType	OriginReturnCode;
	///ԭʼ����������
	TThostFtdcDescrInfoForReturnCodeType	OriginDescrInfoForReturnCode;
	///�����ʺ�
	TThostFtdcBankAccountType	BankAccount;
	///��������
	TThostFtdcPasswordType	BankPassWord;
	///Ͷ�����ʺ�
	TThostFtdcAccountIDType	AccountID;
	///�ڻ�����
	TThostFtdcPasswordType	Password;
	///���ִ���
	TThostFtdcCurrencyIDType	CurrencyID;
	///ת�ʽ��
	TThostFtdcTradeAmountType	TradeAmount;
	///ժҪ
	TThostFtdcDigestType	Digest;
};

///�����ļ���������
struct CThostFtdcReqDayEndFileReadyField
{
	///ҵ������
	TThostFtdcTradeCodeType	TradeCode;
	///���д���
	TThostFtdcBankIDType	BankID;
	///���з�֧��������
	TThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TThostFtdcSessionIDType	SessionID;
	///�ļ�ҵ����
	TThostFtdcFileBusinessCodeType	FileBusinessCode;
	///ժҪ
	TThostFtdcDigestType	Digest;
};

///���ؽ��
struct CThostFtdcReturnResultField
{
	///���ش���
	TThostFtdcReturnCodeType	ReturnCode;
	///����������
	TThostFtdcDescrInfoForReturnCodeType	DescrInfoForReturnCode;
};

///��֤�ڻ��ʽ�����
struct CThostFtdcVerifyFuturePasswordField
{
	///ҵ������
	TThostFtdcTradeCodeType	TradeCode;
	///���д���
	TThostFtdcBankIDType	BankID;
	///���з�֧��������
	TThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TThostFtdcSessionIDType	SessionID;
	///Ͷ�����ʺ�
	TThostFtdcAccountIDType	AccountID;
	///�ڻ�����
	TThostFtdcPasswordType	Password;
	///�����ʺ�
	TThostFtdcBankAccountType	BankAccount;
	///��������
	TThostFtdcPasswordType	BankPassWord;
	///��װ���
	TThostFtdcInstallIDType	InstallID;
	///����ID
	TThostFtdcTIDType	TID;
};

///��֤�ͻ���Ϣ
struct CThostFtdcVerifyCustInfoField
{
	///�ͻ�����
	TThostFtdcIndividualNameType	CustomerName;
	///֤������
	TThostFtdcIdCardTypeType	IdCardType;
	///֤������
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�ͻ�����
	TThostFtdcCustTypeType	CustType;
};

///��֤�ڻ��ʽ�����Ϳͻ���Ϣ
struct CThostFtdcVerifyFuturePasswordAndCustInfoField
{
	///�ͻ�����
	TThostFtdcIndividualNameType	CustomerName;
	///֤������
	TThostFtdcIdCardTypeType	IdCardType;
	///֤������
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�ͻ�����
	TThostFtdcCustTypeType	CustType;
	///Ͷ�����ʺ�
	TThostFtdcAccountIDType	AccountID;
	///�ڻ�����
	TThostFtdcPasswordType	Password;
};

///��֤�ڻ��ʽ�����Ϳͻ���Ϣ
struct CThostFtdcDepositResultInformField
{
	///�������ˮ�ţ�����ˮ��Ϊ���ڱ��̷��ص���ˮ��
	TThostFtdcDepositSeqNoType	DepositSeqNo;
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///�����
	TThostFtdcMoneyType	Deposit;
	///������
	TThostFtdcRequestIDType	RequestID;
	///���ش���
	TThostFtdcReturnCodeType	ReturnCode;
	///����������
	TThostFtdcDescrInfoForReturnCodeType	DescrInfoForReturnCode;
};

///���׺��������ڱ��̷�����Կͬ������
struct CThostFtdcReqSyncKeyField
{
	///ҵ������
	TThostFtdcTradeCodeType	TradeCode;
	///���д���
	TThostFtdcBankIDType	BankID;
	///���з�֧��������
	TThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TThostFtdcSessionIDType	SessionID;
	///��װ���
	TThostFtdcInstallIDType	InstallID;
	///�û���ʶ
	TThostFtdcUserIDType	UserID;
	///���׺��ĸ����ڱ��̵���Ϣ
	TThostFtdcAddInfoType	Message;
	///������־
	TThostFtdcDeviceIDType	DeviceID;
	///�ڻ���˾���б���
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///���׹�Ա
	TThostFtdcOperNoType	OperNo;
	///������
	TThostFtdcRequestIDType	RequestID;
	///����ID
	TThostFtdcTIDType	TID;
};

///���׺��������ڱ��̷�����Կͬ����Ӧ
struct CThostFtdcRspSyncKeyField
{
	///ҵ������
	TThostFtdcTradeCodeType	TradeCode;
	///���д���
	TThostFtdcBankIDType	BankID;
	///���з�֧��������
	TThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TThostFtdcSessionIDType	SessionID;
	///��װ���
	TThostFtdcInstallIDType	InstallID;
	///�û���ʶ
	TThostFtdcUserIDType	UserID;
	///���׺��ĸ����ڱ��̵���Ϣ
	TThostFtdcAddInfoType	Message;
	///������־
	TThostFtdcDeviceIDType	DeviceID;
	///�ڻ���˾���б���
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///���׹�Ա
	TThostFtdcOperNoType	OperNo;
	///������
	TThostFtdcRequestIDType	RequestID;
	///����ID
	TThostFtdcTIDType	TID;
	///�������
	TThostFtdcErrorIDType	ErrorID;
	///������Ϣ
	TThostFtdcErrorMsgType	ErrorMsg;
};

///��ѯ�˻���Ϣ֪ͨ
struct CThostFtdcNotifyQueryAccountField
{
	///ҵ������
	TThostFtdcTradeCodeType	TradeCode;
	///���д���
	TThostFtdcBankIDType	BankID;
	///���з�֧��������
	TThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TThostFtdcSessionIDType	SessionID;
	///�ͻ�����
	TThostFtdcIndividualNameType	CustomerName;
	///֤������
	TThostFtdcIdCardTypeType	IdCardType;
	///֤������
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�ͻ�����
	TThostFtdcCustTypeType	CustType;
	///�����ʺ�
	TThostFtdcBankAccountType	BankAccount;
	///��������
	TThostFtdcPasswordType	BankPassWord;
	///Ͷ�����ʺ�
	TThostFtdcAccountIDType	AccountID;
	///�ڻ�����
	TThostFtdcPasswordType	Password;
	///�ڻ���˾��ˮ��
	TThostFtdcFutureSerialType	FutureSerial;
	///��װ���
	TThostFtdcInstallIDType	InstallID;
	///�û���ʶ
	TThostFtdcUserIDType	UserID;
	///��֤�ͻ�֤�������־
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///���ִ���
	TThostFtdcCurrencyIDType	CurrencyID;
	///ժҪ
	TThostFtdcDigestType	Digest;
	///�����ʺ�����
	TThostFtdcBankAccTypeType	BankAccType;
	///������־
	TThostFtdcDeviceIDType	DeviceID;
	///�ڻ���λ�ʺ�����
	TThostFtdcBankAccTypeType	BankSecuAccType;
	///�ڻ���˾���б���
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///�ڻ���λ�ʺ�
	TThostFtdcBankAccountType	BankSecuAcc;
	///���������־
	TThostFtdcPwdFlagType	BankPwdFlag;
	///�ڻ��ʽ�����˶Ա�־
	TThostFtdcPwdFlagType	SecuPwdFlag;
	///���׹�Ա
	TThostFtdcOperNoType	OperNo;
	///������
	TThostFtdcRequestIDType	RequestID;
	///����ID
	TThostFtdcTIDType	TID;
	///���п��ý��
	TThostFtdcTradeAmountType	BankUseAmount;
	///���п�ȡ���
	TThostFtdcTradeAmountType	BankFetchAmount;
	///�������
	TThostFtdcErrorIDType	ErrorID;
	///������Ϣ
	TThostFtdcErrorMsgType	ErrorMsg;
};

///����ת�˽�����ˮ��
struct CThostFtdcTransferSerialField
{
	///ƽ̨��ˮ��
	TThostFtdcPlateSerialType	PlateSerial;
	///���׷�������
	TThostFtdcTradeDateType	TradeDate;
	///��������
	TThostFtdcDateType	TradingDay;
	///����ʱ��
	TThostFtdcTradeTimeType	TradeTime;
	///���״���
	TThostFtdcTradeCodeType	TradeCode;
	///�Ự���
	TThostFtdcSessionIDType	SessionID;
	///���б���
	TThostFtdcBankIDType	BankID;
	///���з�֧��������
	TThostFtdcBankBrchIDType	BankBranchID;
	///�����ʺ�����
	TThostFtdcBankAccTypeType	BankAccType;
	///�����ʺ�
	TThostFtdcBankAccountType	BankAccount;
	///������ˮ��
	TThostFtdcBankSerialType	BankSerial;
	///�ڻ���˾����
	TThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///�ڻ���˾�ʺ�����
	TThostFtdcFutureAccTypeType	FutureAccType;
	///Ͷ�����ʺ�
	TThostFtdcAccountIDType	AccountID;
	///Ͷ���ߴ���
	TThostFtdcInvestorIDType	InvestorID;
	///�ڻ���˾��ˮ��
	TThostFtdcFutureSerialType	FutureSerial;
	///֤������
	TThostFtdcIdCardTypeType	IdCardType;
	///֤������
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///���ִ���
	TThostFtdcCurrencyIDType	CurrencyID;
	///���׽��
	TThostFtdcTradeAmountType	TradeAmount;
	///Ӧ�տͻ�����
	TThostFtdcCustFeeType	CustFee;
	///Ӧ���ڻ���˾����
	TThostFtdcFutureFeeType	BrokerFee;
	///��Ч��־
	TThostFtdcAvailabilityFlagType	AvailabilityFlag;
	///����Ա
	TThostFtdcOperatorCodeType	OperatorCode;
	///�������ʺ�
	TThostFtdcBankAccountType	BankNewAccount;
	///�������
	TThostFtdcErrorIDType	ErrorID;
	///������Ϣ
	TThostFtdcErrorMsgType	ErrorMsg;
};

///�����ѯת����ˮ
struct CThostFtdcQryTransferSerialField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ�����ʺ�
	TThostFtdcAccountIDType	AccountID;
	///���б���
	TThostFtdcBankIDType	BankID;
};

///����ǩ��֪ͨ
struct CThostFtdcNotifyFutureSignInField
{
	///ҵ������
	TThostFtdcTradeCodeType	TradeCode;
	///���д���
	TThostFtdcBankIDType	BankID;
	///���з�֧��������
	TThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TThostFtdcSessionIDType	SessionID;
	///��װ���
	TThostFtdcInstallIDType	InstallID;
	///�û���ʶ
	TThostFtdcUserIDType	UserID;
	///ժҪ
	TThostFtdcDigestType	Digest;
	///���ִ���
	TThostFtdcCurrencyIDType	CurrencyID;
	///������־
	TThostFtdcDeviceIDType	DeviceID;
	///�ڻ���˾���б���
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///���׹�Ա
	TThostFtdcOperNoType	OperNo;
	///������
	TThostFtdcRequestIDType	RequestID;
	///����ID
	TThostFtdcTIDType	TID;
	///�������
	TThostFtdcErrorIDType	ErrorID;
	///������Ϣ
	TThostFtdcErrorMsgType	ErrorMsg;
	///PIN��Կ
	TThostFtdcPasswordKeyType	PinKey;
	///MAC��Կ
	TThostFtdcPasswordKeyType	MacKey;
};

///����ǩ��֪ͨ
struct CThostFtdcNotifyFutureSignOutField
{
	///ҵ������
	TThostFtdcTradeCodeType	TradeCode;
	///���д���
	TThostFtdcBankIDType	BankID;
	///���з�֧��������
	TThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TThostFtdcSessionIDType	SessionID;
	///��װ���
	TThostFtdcInstallIDType	InstallID;
	///�û���ʶ
	TThostFtdcUserIDType	UserID;
	///ժҪ
	TThostFtdcDigestType	Digest;
	///���ִ���
	TThostFtdcCurrencyIDType	CurrencyID;
	///������־
	TThostFtdcDeviceIDType	DeviceID;
	///�ڻ���˾���б���
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///���׹�Ա
	TThostFtdcOperNoType	OperNo;
	///������
	TThostFtdcRequestIDType	RequestID;
	///����ID
	TThostFtdcTIDType	TID;
	///�������
	TThostFtdcErrorIDType	ErrorID;
	///������Ϣ
	TThostFtdcErrorMsgType	ErrorMsg;
};

///���׺��������ڱ��̷�����Կͬ�����������֪ͨ
struct CThostFtdcNotifySyncKeyField
{
	///ҵ������
	TThostFtdcTradeCodeType	TradeCode;
	///���д���
	TThostFtdcBankIDType	BankID;
	///���з�֧��������
	TThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TThostFtdcSessionIDType	SessionID;
	///��װ���
	TThostFtdcInstallIDType	InstallID;
	///�û���ʶ
	TThostFtdcUserIDType	UserID;
	///���׺��ĸ����ڱ��̵���Ϣ
	TThostFtdcAddInfoType	Message;
	///������־
	TThostFtdcDeviceIDType	DeviceID;
	///�ڻ���˾���б���
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///���׹�Ա
	TThostFtdcOperNoType	OperNo;
	///������
	TThostFtdcRequestIDType	RequestID;
	///����ID
	TThostFtdcTIDType	TID;
	///�������
	TThostFtdcErrorIDType	ErrorID;
	///������Ϣ
	TThostFtdcErrorMsgType	ErrorMsg;
};

///�����ѯ����ǩԼ��ϵ
struct CThostFtdcQryAccountregisterField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///Ͷ�����ʺ�
	TThostFtdcAccountIDType	AccountID;
	///���б���
	TThostFtdcBankIDType	BankID;
};

///�ͻ���������Ϣ��
struct CThostFtdcAccountregisterField
{
	///��������
	TThostFtdcTradeDateType	TradeDay;
	///���б���
	TThostFtdcBankIDType	BankID;
	///���з�֧��������
	TThostFtdcBankBrchIDType	BankBranchID;
	///�����ʺ�
	TThostFtdcBankAccountType	BankAccount;
	///�ڻ���˾����
	TThostFtdcBrokerIDType	BrokerID;
	///�ڻ���˾��֧��������
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///Ͷ�����ʺ�
	TThostFtdcAccountIDType	AccountID;
	///֤������
	TThostFtdcIdCardTypeType	IdCardType;
	///֤������
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�ͻ�����
	TThostFtdcIndividualNameType	CustomerName;
	///���ִ���
	TThostFtdcCurrencyIDType	CurrencyID;
	///���������
	TThostFtdcOpenOrDestroyType	OpenOrDestroy;
	///ǩԼ����
	TThostFtdcTradeDateType	RegDate;
	///��Լ����
	TThostFtdcTradeDateType	OutDate;
	///����ID
	TThostFtdcTIDType	TID;
	///�ͻ�����
	TThostFtdcCustTypeType	CustType;
	///�����ʺ�����
	TThostFtdcBankAccTypeType	BankAccType;
};

///���ڿ�����Ϣ
struct CThostFtdcOpenAccountField
{
	///ҵ������
	TThostFtdcTradeCodeType	TradeCode;
	///���д���
	TThostFtdcBankIDType	BankID;
	///���з�֧��������
	TThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TThostFtdcSessionIDType	SessionID;
	///�ͻ�����
	TThostFtdcIndividualNameType	CustomerName;
	///֤������
	TThostFtdcIdCardTypeType	IdCardType;
	///֤������
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�Ա�
	TThostFtdcGenderType	Gender;
	///���Ҵ���
	TThostFtdcCountryCodeType	CountryCode;
	///�ͻ�����
	TThostFtdcCustTypeType	CustType;
	///��ַ
	TThostFtdcAddressType	Address;
	///�ʱ�
	TThostFtdcZipCodeType	ZipCode;
	///�绰����
	TThostFtdcTelephoneType	Telephone;
	///�ֻ�
	TThostFtdcMobilePhoneType	MobilePhone;
	///����
	TThostFtdcFaxType	Fax;
	///�����ʼ�
	TThostFtdcEMailType	EMail;
	///�ʽ��˻�״̬
	TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
	///�����ʺ�
	TThostFtdcBankAccountType	BankAccount;
	///��������
	TThostFtdcPasswordType	BankPassWord;
	///Ͷ�����ʺ�
	TThostFtdcAccountIDType	AccountID;
	///�ڻ�����
	TThostFtdcPasswordType	Password;
	///��װ���
	TThostFtdcInstallIDType	InstallID;
	///��֤�ͻ�֤�������־
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///���ִ���
	TThostFtdcCurrencyIDType	CurrencyID;
	///�㳮��־
	TThostFtdcCashExchangeCodeType	CashExchangeCode;
	///ժҪ
	TThostFtdcDigestType	Digest;
	///�����ʺ�����
	TThostFtdcBankAccTypeType	BankAccType;
	///������־
	TThostFtdcDeviceIDType	DeviceID;
	///�ڻ���λ�ʺ�����
	TThostFtdcBankAccTypeType	BankSecuAccType;
	///�ڻ���˾���б���
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///�ڻ���λ�ʺ�
	TThostFtdcBankAccountType	BankSecuAcc;
	///���������־
	TThostFtdcPwdFlagType	BankPwdFlag;
	///�ڻ��ʽ�����˶Ա�־
	TThostFtdcPwdFlagType	SecuPwdFlag;
	///���׹�Ա
	TThostFtdcOperNoType	OperNo;
	///����ID
	TThostFtdcTIDType	TID;
	///�������
	TThostFtdcErrorIDType	ErrorID;
	///������Ϣ
	TThostFtdcErrorMsgType	ErrorMsg;
};

///����������Ϣ
struct CThostFtdcCancelAccountField
{
	///ҵ������
	TThostFtdcTradeCodeType	TradeCode;
	///���д���
	TThostFtdcBankIDType	BankID;
	///���з�֧��������
	TThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TThostFtdcSessionIDType	SessionID;
	///�ͻ�����
	TThostFtdcIndividualNameType	CustomerName;
	///֤������
	TThostFtdcIdCardTypeType	IdCardType;
	///֤������
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�Ա�
	TThostFtdcGenderType	Gender;
	///���Ҵ���
	TThostFtdcCountryCodeType	CountryCode;
	///�ͻ�����
	TThostFtdcCustTypeType	CustType;
	///��ַ
	TThostFtdcAddressType	Address;
	///�ʱ�
	TThostFtdcZipCodeType	ZipCode;
	///�绰����
	TThostFtdcTelephoneType	Telephone;
	///�ֻ�
	TThostFtdcMobilePhoneType	MobilePhone;
	///����
	TThostFtdcFaxType	Fax;
	///�����ʼ�
	TThostFtdcEMailType	EMail;
	///�ʽ��˻�״̬
	TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
	///�����ʺ�
	TThostFtdcBankAccountType	BankAccount;
	///��������
	TThostFtdcPasswordType	BankPassWord;
	///Ͷ�����ʺ�
	TThostFtdcAccountIDType	AccountID;
	///�ڻ�����
	TThostFtdcPasswordType	Password;
	///��װ���
	TThostFtdcInstallIDType	InstallID;
	///��֤�ͻ�֤�������־
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///���ִ���
	TThostFtdcCurrencyIDType	CurrencyID;
	///�㳮��־
	TThostFtdcCashExchangeCodeType	CashExchangeCode;
	///ժҪ
	TThostFtdcDigestType	Digest;
	///�����ʺ�����
	TThostFtdcBankAccTypeType	BankAccType;
	///������־
	TThostFtdcDeviceIDType	DeviceID;
	///�ڻ���λ�ʺ�����
	TThostFtdcBankAccTypeType	BankSecuAccType;
	///�ڻ���˾���б���
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///�ڻ���λ�ʺ�
	TThostFtdcBankAccountType	BankSecuAcc;
	///���������־
	TThostFtdcPwdFlagType	BankPwdFlag;
	///�ڻ��ʽ�����˶Ա�־
	TThostFtdcPwdFlagType	SecuPwdFlag;
	///���׹�Ա
	TThostFtdcOperNoType	OperNo;
	///����ID
	TThostFtdcTIDType	TID;
	///�������
	TThostFtdcErrorIDType	ErrorID;
	///������Ϣ
	TThostFtdcErrorMsgType	ErrorMsg;
};

///���ڱ�������˺���Ϣ
struct CThostFtdcChangeAccountField
{
	///ҵ������
	TThostFtdcTradeCodeType	TradeCode;
	///���д���
	TThostFtdcBankIDType	BankID;
	///���з�֧��������
	TThostFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TThostFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TThostFtdcTradeDateType	TradeDate;
	///����ʱ��
	TThostFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TThostFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TThostFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TThostFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TThostFtdcLastFragmentType	LastFragment;
	///�Ự��
	TThostFtdcSessionIDType	SessionID;
	///�ͻ�����
	TThostFtdcIndividualNameType	CustomerName;
	///֤������
	TThostFtdcIdCardTypeType	IdCardType;
	///֤������
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�Ա�
	TThostFtdcGenderType	Gender;
	///���Ҵ���
	TThostFtdcCountryCodeType	CountryCode;
	///�ͻ�����
	TThostFtdcCustTypeType	CustType;
	///��ַ
	TThostFtdcAddressType	Address;
	///�ʱ�
	TThostFtdcZipCodeType	ZipCode;
	///�绰����
	TThostFtdcTelephoneType	Telephone;
	///�ֻ�
	TThostFtdcMobilePhoneType	MobilePhone;
	///����
	TThostFtdcFaxType	Fax;
	///�����ʼ�
	TThostFtdcEMailType	EMail;
	///�ʽ��˻�״̬
	TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
	///�����ʺ�
	TThostFtdcBankAccountType	BankAccount;
	///��������
	TThostFtdcPasswordType	BankPassWord;
	///�������ʺ�
	TThostFtdcBankAccountType	NewBankAccount;
	///����������
	TThostFtdcPasswordType	NewBankPassWord;
	///Ͷ�����ʺ�
	TThostFtdcAccountIDType	AccountID;
	///�ڻ�����
	TThostFtdcPasswordType	Password;
	///�����ʺ�����
	TThostFtdcBankAccTypeType	BankAccType;
	///��װ���
	TThostFtdcInstallIDType	InstallID;
	///��֤�ͻ�֤�������־
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///���ִ���
	TThostFtdcCurrencyIDType	CurrencyID;
	///�ڻ���˾���б���
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///���������־
	TThostFtdcPwdFlagType	BankPwdFlag;
	///�ڻ��ʽ�����˶Ա�־
	TThostFtdcPwdFlagType	SecuPwdFlag;
	///����ID
	TThostFtdcTIDType	TID;
	///ժҪ
	TThostFtdcDigestType	Digest;
	///�������
	TThostFtdcErrorIDType	ErrorID;
	///������Ϣ
	TThostFtdcErrorMsgType	ErrorMsg;
};

///�ֱ����Ľ���Ȩ��
struct CThostFtdcUserRightsAssignField
{
	///Ӧ�õ�Ԫ����
	TThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TThostFtdcUserIDType	UserID;
	///�������Ĵ���
	TThostFtdcDRIdentityIDType	DRIdentityID;
};

///���ù�˾�Ƿ����ڱ���ʾ�Ľ���Ȩ��
struct CThostFtdcBrokerUserRightAssignField
{
	///Ӧ�õ�Ԫ����
	TThostFtdcBrokerIDType	BrokerID;
	///�������Ĵ���
	TThostFtdcDRIdentityIDType	DRIdentityID;
	///�ܷ���
	TThostFtdcBoolType	Tradeable;
};

///�ֱ�����ת������
struct CThostFtdcDRTransferField
{
	///ԭ�������Ĵ���
	TThostFtdcDRIdentityIDType	OrigDRIdentityID;
	///Ŀ�꽻�����Ĵ���
	TThostFtdcDRIdentityIDType	DestDRIdentityID;
	///ԭӦ�õ�Ԫ����
	TThostFtdcBrokerIDType	OrigBrokerID;
	///Ŀ�����õ�Ԫ����
	TThostFtdcBrokerIDType	DestBrokerID;
};

///����Key
struct CThostOrderKeyField
{
    ///��������
    TThostFtdcOrderRefType      OrderRef;
    ///ǰ�ñ��
    TThostFtdcFrontIDType  FrontID;
    ///�Ự���
    TThostFtdcSessionIDType     SessionID;
    ///����������
    TThostFtdcExchangeIDType  ExchangeID;
    ///�������
    TThostFtdcOrderSysIDType  OrderSysID;
};

///����������������
struct CThostFtdcBulkCancelOrderField
{
    ///���͹�˾����
    TThostFtdcBrokerIDType      BrokerID;
    ///Ͷ���ߴ���
    TThostFtdcInvestorIDType    InvestorID;
    ///�û�����
    TThostFtdcUserIDType  UserID;
    ///��������
    TThostFtdcOrderTypeType    OrderType;
    ///��������
    TThostFtdcVolumeType nCount;
    ///��������
    CThostOrderKeyField OrderKey[MAX_ORDER_COUNT];
};

}	// end of namespace KingstarAPI

#endif