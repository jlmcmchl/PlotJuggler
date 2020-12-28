// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_STATUSFRAME_RJ_H_
#define FLATBUFFERS_GENERATED_STATUSFRAME_RJ_H_

#include "flatbuffers/flatbuffers.h"

namespace rj {

struct InitializeStatusFrame;
struct InitializeStatusFrameBuilder;

struct CTREMotorStatusFrame;
struct CTREMotorStatusFrameBuilder;

struct PDPStatusFrame;
struct PDPStatusFrameBuilder;

struct PCMStatusFrame;
struct PCMStatusFrameBuilder;

struct StatusFrameHolder;
struct StatusFrameHolderBuilder;

enum StatusFrame
{
  StatusFrame_NONE = 0,
  StatusFrame_CTREMotorStatusFrame = 1,
  StatusFrame_PDPStatusFrame = 2,
  StatusFrame_PCMStatusFrame = 3,
  StatusFrame_InitializeStatusFrame = 4,
  StatusFrame_MIN = StatusFrame_NONE,
  StatusFrame_MAX = StatusFrame_InitializeStatusFrame
};

inline const StatusFrame (&EnumValuesStatusFrame())[5]
{
  static const StatusFrame values[] = { StatusFrame_NONE,
                                        StatusFrame_CTREMotorStatusFrame,
                                        StatusFrame_PDPStatusFrame,
                                        StatusFrame_PCMStatusFrame,
                                        StatusFrame_InitializeStatusFrame };
  return values;
}

inline const char* const*
EnumNamesStatusFrame()
{
  static const char* const names[6] = {
    "NONE",           "CTREMotorStatusFrame",  "PDPStatusFrame",
    "PCMStatusFrame", "InitializeStatusFrame", nullptr
  };
  return names;
}

inline const char*
EnumNameStatusFrame(StatusFrame e)
{
  if (flatbuffers::IsOutRange(
        e, StatusFrame_NONE, StatusFrame_InitializeStatusFrame))
    return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesStatusFrame()[index];
}

template<typename T>
struct StatusFrameTraits
{
  static const StatusFrame enum_value = StatusFrame_NONE;
};

template<>
struct StatusFrameTraits<rj::CTREMotorStatusFrame>
{
  static const StatusFrame enum_value = StatusFrame_CTREMotorStatusFrame;
};

template<>
struct StatusFrameTraits<rj::PDPStatusFrame>
{
  static const StatusFrame enum_value = StatusFrame_PDPStatusFrame;
};

template<>
struct StatusFrameTraits<rj::PCMStatusFrame>
{
  static const StatusFrame enum_value = StatusFrame_PCMStatusFrame;
};

template<>
struct StatusFrameTraits<rj::InitializeStatusFrame>
{
  static const StatusFrame enum_value = StatusFrame_InitializeStatusFrame;
};

bool
VerifyStatusFrame(flatbuffers::Verifier& verifier,
                  const void* obj,
                  StatusFrame type);
bool
VerifyStatusFrameVector(
  flatbuffers::Verifier& verifier,
  const flatbuffers::Vector<flatbuffers::Offset<void>>* values,
  const flatbuffers::Vector<uint8_t>* types);

struct InitializeStatusFrame FLATBUFFERS_FINAL_CLASS
  : private flatbuffers::Table
{
  typedef InitializeStatusFrameBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE
  {
    VT_TITLE = 4
  };
  const flatbuffers::String* title() const
  {
    return GetPointer<const flatbuffers::String*>(VT_TITLE);
  }
  bool Verify(flatbuffers::Verifier& verifier) const
  {
    return VerifyTableStart(verifier) && VerifyOffset(verifier, VT_TITLE) &&
           verifier.VerifyString(title()) && verifier.EndTable();
  }
};

struct InitializeStatusFrameBuilder
{
  typedef InitializeStatusFrame Table;
  flatbuffers::FlatBufferBuilder& fbb_;
  flatbuffers::uoffset_t start_;
  void add_title(flatbuffers::Offset<flatbuffers::String> title)
  {
    fbb_.AddOffset(InitializeStatusFrame::VT_TITLE, title);
  }
  explicit InitializeStatusFrameBuilder(flatbuffers::FlatBufferBuilder& _fbb)
    : fbb_(_fbb)
  {
    start_ = fbb_.StartTable();
  }
  InitializeStatusFrameBuilder& operator=(const InitializeStatusFrameBuilder&);
  flatbuffers::Offset<InitializeStatusFrame> Finish()
  {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<InitializeStatusFrame>(end);
    return o;
  }
};

inline flatbuffers::Offset<InitializeStatusFrame>
CreateInitializeStatusFrame(flatbuffers::FlatBufferBuilder& _fbb,
                            flatbuffers::Offset<flatbuffers::String> title = 0)
{
  InitializeStatusFrameBuilder builder_(_fbb);
  builder_.add_title(title);
  return builder_.Finish();
}

inline flatbuffers::Offset<InitializeStatusFrame>
CreateInitializeStatusFrameDirect(flatbuffers::FlatBufferBuilder& _fbb,
                                  const char* title = nullptr)
{
  auto title__ = title ? _fbb.CreateString(title) : 0;
  return rj::CreateInitializeStatusFrame(_fbb, title__);
}

struct CTREMotorStatusFrame FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table
{
  typedef CTREMotorStatusFrameBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE
  {
    VT_FIRMWAREVERSION = 4,
    VT_BASEID = 6,
    VT_DEVICEID = 8,
    VT_OUTPUTCURRENT = 10,
    VT_BUSVOLTAGE = 12,
    VT_OUTPUTPERCENT = 14,
    VT_OUTPUTVOLTAGE = 16,
    VT_TEMPERATURE = 18,
    VT_SELECTEDSENSORPOSITION = 20,
    VT_SELECTEDSENSORVELOCITY = 22,
    VT_CLOSEDLOOPERROR = 24,
    VT_INTEGRALACCUMULATOR = 26,
    VT_ERRORDERIVATIVE = 28,
    VT_CLOSEDLOOPTARGET = 30,
    VT_ACTIVETRAJECTORYPOSITION = 32,
    VT_ACTIVETRAJECTORYVELOCITY = 34,
    VT_ACTIVETRAJECTORYARBFEEDFWD = 36,
    VT_FAULTS = 38,
    VT_RESETOCCURED = 40,
    VT_LASTERROR = 42,
    VT_CONTROLMODE = 44,
    VT_STATORCURRENT = 46,
    VT_SUPPLYCURRENT = 48,
    VT_FWDLIMITSWITCHCLOSED = 50,
    VT_REVLIMITSWITCHCLOSED = 52
  };
  int32_t firmwareVersion() const
  {
    return GetField<int32_t>(VT_FIRMWAREVERSION, 0);
  }
  int32_t baseID() const { return GetField<int32_t>(VT_BASEID, 0); }
  int32_t deviceID() const { return GetField<int32_t>(VT_DEVICEID, 0); }
  double outputCurrent() const
  {
    return GetField<double>(VT_OUTPUTCURRENT, 0.0);
  }
  double busVoltage() const { return GetField<double>(VT_BUSVOLTAGE, 0.0); }
  double outputPercent() const
  {
    return GetField<double>(VT_OUTPUTPERCENT, 0.0);
  }
  double outputVoltage() const
  {
    return GetField<double>(VT_OUTPUTVOLTAGE, 0.0);
  }
  double temperature() const { return GetField<double>(VT_TEMPERATURE, 0.0); }
  int32_t selectedSensorPosition() const
  {
    return GetField<int32_t>(VT_SELECTEDSENSORPOSITION, 0);
  }
  int32_t selectedSensorVelocity() const
  {
    return GetField<int32_t>(VT_SELECTEDSENSORVELOCITY, 0);
  }
  int32_t closedLoopError() const
  {
    return GetField<int32_t>(VT_CLOSEDLOOPERROR, 0);
  }
  double integralAccumulator() const
  {
    return GetField<double>(VT_INTEGRALACCUMULATOR, 0.0);
  }
  double errorDerivative() const
  {
    return GetField<double>(VT_ERRORDERIVATIVE, 0.0);
  }
  double closedLoopTarget() const
  {
    return GetField<double>(VT_CLOSEDLOOPTARGET, 0.0);
  }
  int32_t activeTrajectoryPosition() const
  {
    return GetField<int32_t>(VT_ACTIVETRAJECTORYPOSITION, 0);
  }
  int32_t activeTrajectoryVelocity() const
  {
    return GetField<int32_t>(VT_ACTIVETRAJECTORYVELOCITY, 0);
  }
  double activeTrajectoryArbFeedFwd() const
  {
    return GetField<double>(VT_ACTIVETRAJECTORYARBFEEDFWD, 0.0);
  }
  int32_t faults() const { return GetField<int32_t>(VT_FAULTS, 0); }
  bool resetOccured() const
  {
    return GetField<uint8_t>(VT_RESETOCCURED, 0) != 0;
  }
  int32_t lastError() const { return GetField<int32_t>(VT_LASTERROR, 0); }
  int32_t controlMode() const { return GetField<int32_t>(VT_CONTROLMODE, 0); }
  double statorCurrent() const
  {
    return GetField<double>(VT_STATORCURRENT, 0.0);
  }
  double supplyCurrent() const
  {
    return GetField<double>(VT_SUPPLYCURRENT, 0.0);
  }
  int32_t fwdLimitSwitchClosed() const
  {
    return GetField<int32_t>(VT_FWDLIMITSWITCHCLOSED, 0);
  }
  int32_t revLimitSwitchClosed() const
  {
    return GetField<int32_t>(VT_REVLIMITSWITCHCLOSED, 0);
  }
  bool Verify(flatbuffers::Verifier& verifier) const
  {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_FIRMWAREVERSION) &&
           VerifyField<int32_t>(verifier, VT_BASEID) &&
           VerifyField<int32_t>(verifier, VT_DEVICEID) &&
           VerifyField<double>(verifier, VT_OUTPUTCURRENT) &&
           VerifyField<double>(verifier, VT_BUSVOLTAGE) &&
           VerifyField<double>(verifier, VT_OUTPUTPERCENT) &&
           VerifyField<double>(verifier, VT_OUTPUTVOLTAGE) &&
           VerifyField<double>(verifier, VT_TEMPERATURE) &&
           VerifyField<int32_t>(verifier, VT_SELECTEDSENSORPOSITION) &&
           VerifyField<int32_t>(verifier, VT_SELECTEDSENSORVELOCITY) &&
           VerifyField<int32_t>(verifier, VT_CLOSEDLOOPERROR) &&
           VerifyField<double>(verifier, VT_INTEGRALACCUMULATOR) &&
           VerifyField<double>(verifier, VT_ERRORDERIVATIVE) &&
           VerifyField<double>(verifier, VT_CLOSEDLOOPTARGET) &&
           VerifyField<int32_t>(verifier, VT_ACTIVETRAJECTORYPOSITION) &&
           VerifyField<int32_t>(verifier, VT_ACTIVETRAJECTORYVELOCITY) &&
           VerifyField<double>(verifier, VT_ACTIVETRAJECTORYARBFEEDFWD) &&
           VerifyField<int32_t>(verifier, VT_FAULTS) &&
           VerifyField<uint8_t>(verifier, VT_RESETOCCURED) &&
           VerifyField<int32_t>(verifier, VT_LASTERROR) &&
           VerifyField<int32_t>(verifier, VT_CONTROLMODE) &&
           VerifyField<double>(verifier, VT_STATORCURRENT) &&
           VerifyField<double>(verifier, VT_SUPPLYCURRENT) &&
           VerifyField<int32_t>(verifier, VT_FWDLIMITSWITCHCLOSED) &&
           VerifyField<int32_t>(verifier, VT_REVLIMITSWITCHCLOSED) &&
           verifier.EndTable();
  }
};

struct CTREMotorStatusFrameBuilder
{
  typedef CTREMotorStatusFrame Table;
  flatbuffers::FlatBufferBuilder& fbb_;
  flatbuffers::uoffset_t start_;
  void add_firmwareVersion(int32_t firmwareVersion)
  {
    fbb_.AddElement<int32_t>(
      CTREMotorStatusFrame::VT_FIRMWAREVERSION, firmwareVersion, 0);
  }
  void add_baseID(int32_t baseID)
  {
    fbb_.AddElement<int32_t>(CTREMotorStatusFrame::VT_BASEID, baseID, 0);
  }
  void add_deviceID(int32_t deviceID)
  {
    fbb_.AddElement<int32_t>(CTREMotorStatusFrame::VT_DEVICEID, deviceID, 0);
  }
  void add_outputCurrent(double outputCurrent)
  {
    fbb_.AddElement<double>(
      CTREMotorStatusFrame::VT_OUTPUTCURRENT, outputCurrent, 0.0);
  }
  void add_busVoltage(double busVoltage)
  {
    fbb_.AddElement<double>(
      CTREMotorStatusFrame::VT_BUSVOLTAGE, busVoltage, 0.0);
  }
  void add_outputPercent(double outputPercent)
  {
    fbb_.AddElement<double>(
      CTREMotorStatusFrame::VT_OUTPUTPERCENT, outputPercent, 0.0);
  }
  void add_outputVoltage(double outputVoltage)
  {
    fbb_.AddElement<double>(
      CTREMotorStatusFrame::VT_OUTPUTVOLTAGE, outputVoltage, 0.0);
  }
  void add_temperature(double temperature)
  {
    fbb_.AddElement<double>(
      CTREMotorStatusFrame::VT_TEMPERATURE, temperature, 0.0);
  }
  void add_selectedSensorPosition(int32_t selectedSensorPosition)
  {
    fbb_.AddElement<int32_t>(CTREMotorStatusFrame::VT_SELECTEDSENSORPOSITION,
                             selectedSensorPosition,
                             0);
  }
  void add_selectedSensorVelocity(int32_t selectedSensorVelocity)
  {
    fbb_.AddElement<int32_t>(CTREMotorStatusFrame::VT_SELECTEDSENSORVELOCITY,
                             selectedSensorVelocity,
                             0);
  }
  void add_closedLoopError(int32_t closedLoopError)
  {
    fbb_.AddElement<int32_t>(
      CTREMotorStatusFrame::VT_CLOSEDLOOPERROR, closedLoopError, 0);
  }
  void add_integralAccumulator(double integralAccumulator)
  {
    fbb_.AddElement<double>(
      CTREMotorStatusFrame::VT_INTEGRALACCUMULATOR, integralAccumulator, 0.0);
  }
  void add_errorDerivative(double errorDerivative)
  {
    fbb_.AddElement<double>(
      CTREMotorStatusFrame::VT_ERRORDERIVATIVE, errorDerivative, 0.0);
  }
  void add_closedLoopTarget(double closedLoopTarget)
  {
    fbb_.AddElement<double>(
      CTREMotorStatusFrame::VT_CLOSEDLOOPTARGET, closedLoopTarget, 0.0);
  }
  void add_activeTrajectoryPosition(int32_t activeTrajectoryPosition)
  {
    fbb_.AddElement<int32_t>(CTREMotorStatusFrame::VT_ACTIVETRAJECTORYPOSITION,
                             activeTrajectoryPosition,
                             0);
  }
  void add_activeTrajectoryVelocity(int32_t activeTrajectoryVelocity)
  {
    fbb_.AddElement<int32_t>(CTREMotorStatusFrame::VT_ACTIVETRAJECTORYVELOCITY,
                             activeTrajectoryVelocity,
                             0);
  }
  void add_activeTrajectoryArbFeedFwd(double activeTrajectoryArbFeedFwd)
  {
    fbb_.AddElement<double>(CTREMotorStatusFrame::VT_ACTIVETRAJECTORYARBFEEDFWD,
                            activeTrajectoryArbFeedFwd,
                            0.0);
  }
  void add_faults(int32_t faults)
  {
    fbb_.AddElement<int32_t>(CTREMotorStatusFrame::VT_FAULTS, faults, 0);
  }
  void add_resetOccured(bool resetOccured)
  {
    fbb_.AddElement<uint8_t>(CTREMotorStatusFrame::VT_RESETOCCURED,
                             static_cast<uint8_t>(resetOccured),
                             0);
  }
  void add_lastError(int32_t lastError)
  {
    fbb_.AddElement<int32_t>(CTREMotorStatusFrame::VT_LASTERROR, lastError, 0);
  }
  void add_controlMode(int32_t controlMode)
  {
    fbb_.AddElement<int32_t>(
      CTREMotorStatusFrame::VT_CONTROLMODE, controlMode, 0);
  }
  void add_statorCurrent(double statorCurrent)
  {
    fbb_.AddElement<double>(
      CTREMotorStatusFrame::VT_STATORCURRENT, statorCurrent, 0.0);
  }
  void add_supplyCurrent(double supplyCurrent)
  {
    fbb_.AddElement<double>(
      CTREMotorStatusFrame::VT_SUPPLYCURRENT, supplyCurrent, 0.0);
  }
  void add_fwdLimitSwitchClosed(int32_t fwdLimitSwitchClosed)
  {
    fbb_.AddElement<int32_t>(
      CTREMotorStatusFrame::VT_FWDLIMITSWITCHCLOSED, fwdLimitSwitchClosed, 0);
  }
  void add_revLimitSwitchClosed(int32_t revLimitSwitchClosed)
  {
    fbb_.AddElement<int32_t>(
      CTREMotorStatusFrame::VT_REVLIMITSWITCHCLOSED, revLimitSwitchClosed, 0);
  }
  explicit CTREMotorStatusFrameBuilder(flatbuffers::FlatBufferBuilder& _fbb)
    : fbb_(_fbb)
  {
    start_ = fbb_.StartTable();
  }
  CTREMotorStatusFrameBuilder& operator=(const CTREMotorStatusFrameBuilder&);
  flatbuffers::Offset<CTREMotorStatusFrame> Finish()
  {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<CTREMotorStatusFrame>(end);
    return o;
  }
};

inline flatbuffers::Offset<CTREMotorStatusFrame>
CreateCTREMotorStatusFrame(flatbuffers::FlatBufferBuilder& _fbb,
                           int32_t firmwareVersion = 0,
                           int32_t baseID = 0,
                           int32_t deviceID = 0,
                           double outputCurrent = 0.0,
                           double busVoltage = 0.0,
                           double outputPercent = 0.0,
                           double outputVoltage = 0.0,
                           double temperature = 0.0,
                           int32_t selectedSensorPosition = 0,
                           int32_t selectedSensorVelocity = 0,
                           int32_t closedLoopError = 0,
                           double integralAccumulator = 0.0,
                           double errorDerivative = 0.0,
                           double closedLoopTarget = 0.0,
                           int32_t activeTrajectoryPosition = 0,
                           int32_t activeTrajectoryVelocity = 0,
                           double activeTrajectoryArbFeedFwd = 0.0,
                           int32_t faults = 0,
                           bool resetOccured = false,
                           int32_t lastError = 0,
                           int32_t controlMode = 0,
                           double statorCurrent = 0.0,
                           double supplyCurrent = 0.0,
                           int32_t fwdLimitSwitchClosed = 0,
                           int32_t revLimitSwitchClosed = 0)
{
  CTREMotorStatusFrameBuilder builder_(_fbb);
  builder_.add_supplyCurrent(supplyCurrent);
  builder_.add_statorCurrent(statorCurrent);
  builder_.add_activeTrajectoryArbFeedFwd(activeTrajectoryArbFeedFwd);
  builder_.add_closedLoopTarget(closedLoopTarget);
  builder_.add_errorDerivative(errorDerivative);
  builder_.add_integralAccumulator(integralAccumulator);
  builder_.add_temperature(temperature);
  builder_.add_outputVoltage(outputVoltage);
  builder_.add_outputPercent(outputPercent);
  builder_.add_busVoltage(busVoltage);
  builder_.add_outputCurrent(outputCurrent);
  builder_.add_revLimitSwitchClosed(revLimitSwitchClosed);
  builder_.add_fwdLimitSwitchClosed(fwdLimitSwitchClosed);
  builder_.add_controlMode(controlMode);
  builder_.add_lastError(lastError);
  builder_.add_faults(faults);
  builder_.add_activeTrajectoryVelocity(activeTrajectoryVelocity);
  builder_.add_activeTrajectoryPosition(activeTrajectoryPosition);
  builder_.add_closedLoopError(closedLoopError);
  builder_.add_selectedSensorVelocity(selectedSensorVelocity);
  builder_.add_selectedSensorPosition(selectedSensorPosition);
  builder_.add_deviceID(deviceID);
  builder_.add_baseID(baseID);
  builder_.add_firmwareVersion(firmwareVersion);
  builder_.add_resetOccured(resetOccured);
  return builder_.Finish();
}

struct PDPStatusFrame FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table
{
  typedef PDPStatusFrameBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE
  {
    VT_MODULE_ = 4,
    VT_VOLTAGE = 6,
    VT_TEMPERATURE = 8,
    VT_CHANNELCURRENT = 10,
    VT_TOTALCURRENT = 12,
    VT_TOTALPOWER = 14,
    VT_TOTALENERGY = 16
  };
  int32_t module_() const { return GetField<int32_t>(VT_MODULE_, 0); }
  double voltage() const { return GetField<double>(VT_VOLTAGE, 0.0); }
  double temperature() const { return GetField<double>(VT_TEMPERATURE, 0.0); }
  const flatbuffers::Vector<double>* channelCurrent() const
  {
    return GetPointer<const flatbuffers::Vector<double>*>(VT_CHANNELCURRENT);
  }
  double totalCurrent() const { return GetField<double>(VT_TOTALCURRENT, 0.0); }
  double totalPower() const { return GetField<double>(VT_TOTALPOWER, 0.0); }
  double totalEnergy() const { return GetField<double>(VT_TOTALENERGY, 0.0); }
  bool Verify(flatbuffers::Verifier& verifier) const
  {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_MODULE_) &&
           VerifyField<double>(verifier, VT_VOLTAGE) &&
           VerifyField<double>(verifier, VT_TEMPERATURE) &&
           VerifyOffset(verifier, VT_CHANNELCURRENT) &&
           verifier.VerifyVector(channelCurrent()) &&
           VerifyField<double>(verifier, VT_TOTALCURRENT) &&
           VerifyField<double>(verifier, VT_TOTALPOWER) &&
           VerifyField<double>(verifier, VT_TOTALENERGY) && verifier.EndTable();
  }
};

struct PDPStatusFrameBuilder
{
  typedef PDPStatusFrame Table;
  flatbuffers::FlatBufferBuilder& fbb_;
  flatbuffers::uoffset_t start_;
  void add_module_(int32_t module_)
  {
    fbb_.AddElement<int32_t>(PDPStatusFrame::VT_MODULE_, module_, 0);
  }
  void add_voltage(double voltage)
  {
    fbb_.AddElement<double>(PDPStatusFrame::VT_VOLTAGE, voltage, 0.0);
  }
  void add_temperature(double temperature)
  {
    fbb_.AddElement<double>(PDPStatusFrame::VT_TEMPERATURE, temperature, 0.0);
  }
  void add_channelCurrent(
    flatbuffers::Offset<flatbuffers::Vector<double>> channelCurrent)
  {
    fbb_.AddOffset(PDPStatusFrame::VT_CHANNELCURRENT, channelCurrent);
  }
  void add_totalCurrent(double totalCurrent)
  {
    fbb_.AddElement<double>(PDPStatusFrame::VT_TOTALCURRENT, totalCurrent, 0.0);
  }
  void add_totalPower(double totalPower)
  {
    fbb_.AddElement<double>(PDPStatusFrame::VT_TOTALPOWER, totalPower, 0.0);
  }
  void add_totalEnergy(double totalEnergy)
  {
    fbb_.AddElement<double>(PDPStatusFrame::VT_TOTALENERGY, totalEnergy, 0.0);
  }
  explicit PDPStatusFrameBuilder(flatbuffers::FlatBufferBuilder& _fbb)
    : fbb_(_fbb)
  {
    start_ = fbb_.StartTable();
  }
  PDPStatusFrameBuilder& operator=(const PDPStatusFrameBuilder&);
  flatbuffers::Offset<PDPStatusFrame> Finish()
  {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<PDPStatusFrame>(end);
    return o;
  }
};

inline flatbuffers::Offset<PDPStatusFrame>
CreatePDPStatusFrame(
  flatbuffers::FlatBufferBuilder& _fbb,
  int32_t module_ = 0,
  double voltage = 0.0,
  double temperature = 0.0,
  flatbuffers::Offset<flatbuffers::Vector<double>> channelCurrent = 0,
  double totalCurrent = 0.0,
  double totalPower = 0.0,
  double totalEnergy = 0.0)
{
  PDPStatusFrameBuilder builder_(_fbb);
  builder_.add_totalEnergy(totalEnergy);
  builder_.add_totalPower(totalPower);
  builder_.add_totalCurrent(totalCurrent);
  builder_.add_temperature(temperature);
  builder_.add_voltage(voltage);
  builder_.add_channelCurrent(channelCurrent);
  builder_.add_module_(module_);
  return builder_.Finish();
}

inline flatbuffers::Offset<PDPStatusFrame>
CreatePDPStatusFrameDirect(flatbuffers::FlatBufferBuilder& _fbb,
                           int32_t module_ = 0,
                           double voltage = 0.0,
                           double temperature = 0.0,
                           const std::vector<double>* channelCurrent = nullptr,
                           double totalCurrent = 0.0,
                           double totalPower = 0.0,
                           double totalEnergy = 0.0)
{
  auto channelCurrent__ =
    channelCurrent ? _fbb.CreateVector<double>(*channelCurrent) : 0;
  return rj::CreatePDPStatusFrame(_fbb,
                                  module_,
                                  voltage,
                                  temperature,
                                  channelCurrent__,
                                  totalCurrent,
                                  totalPower,
                                  totalEnergy);
}

struct PCMStatusFrame FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table
{
  typedef PCMStatusFrameBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE
  {
    VT_MODULE_ = 4,
    VT_ENABLED = 6,
    VT_PRESSURESWITCHVALVE = 8,
    VT_COMPRESSORCURRENT = 10,
    VT_CLOSEDLOOPCONTROL = 12,
    VT_COMPRESSORCURRENTTOOHIGHFAULT = 14,
    VT_COMPRESSORSHORTEDFAULT = 16,
    VT_COMPRESSORNOTCONNECTEDFAULT = 18
  };
  int32_t module_() const { return GetField<int32_t>(VT_MODULE_, 0); }
  bool enabled() const { return GetField<uint8_t>(VT_ENABLED, 0) != 0; }
  bool pressureSwitchValve() const
  {
    return GetField<uint8_t>(VT_PRESSURESWITCHVALVE, 0) != 0;
  }
  double compressorCurrent() const
  {
    return GetField<double>(VT_COMPRESSORCURRENT, 0.0);
  }
  bool closedLoopControl() const
  {
    return GetField<uint8_t>(VT_CLOSEDLOOPCONTROL, 0) != 0;
  }
  bool compressorCurrentTooHighFault() const
  {
    return GetField<uint8_t>(VT_COMPRESSORCURRENTTOOHIGHFAULT, 0) != 0;
  }
  bool compressorShortedFault() const
  {
    return GetField<uint8_t>(VT_COMPRESSORSHORTEDFAULT, 0) != 0;
  }
  bool compressorNotConnectedFault() const
  {
    return GetField<uint8_t>(VT_COMPRESSORNOTCONNECTEDFAULT, 0) != 0;
  }
  bool Verify(flatbuffers::Verifier& verifier) const
  {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_MODULE_) &&
           VerifyField<uint8_t>(verifier, VT_ENABLED) &&
           VerifyField<uint8_t>(verifier, VT_PRESSURESWITCHVALVE) &&
           VerifyField<double>(verifier, VT_COMPRESSORCURRENT) &&
           VerifyField<uint8_t>(verifier, VT_CLOSEDLOOPCONTROL) &&
           VerifyField<uint8_t>(verifier, VT_COMPRESSORCURRENTTOOHIGHFAULT) &&
           VerifyField<uint8_t>(verifier, VT_COMPRESSORSHORTEDFAULT) &&
           VerifyField<uint8_t>(verifier, VT_COMPRESSORNOTCONNECTEDFAULT) &&
           verifier.EndTable();
  }
};

struct PCMStatusFrameBuilder
{
  typedef PCMStatusFrame Table;
  flatbuffers::FlatBufferBuilder& fbb_;
  flatbuffers::uoffset_t start_;
  void add_module_(int32_t module_)
  {
    fbb_.AddElement<int32_t>(PCMStatusFrame::VT_MODULE_, module_, 0);
  }
  void add_enabled(bool enabled)
  {
    fbb_.AddElement<uint8_t>(
      PCMStatusFrame::VT_ENABLED, static_cast<uint8_t>(enabled), 0);
  }
  void add_pressureSwitchValve(bool pressureSwitchValve)
  {
    fbb_.AddElement<uint8_t>(PCMStatusFrame::VT_PRESSURESWITCHVALVE,
                             static_cast<uint8_t>(pressureSwitchValve),
                             0);
  }
  void add_compressorCurrent(double compressorCurrent)
  {
    fbb_.AddElement<double>(
      PCMStatusFrame::VT_COMPRESSORCURRENT, compressorCurrent, 0.0);
  }
  void add_closedLoopControl(bool closedLoopControl)
  {
    fbb_.AddElement<uint8_t>(PCMStatusFrame::VT_CLOSEDLOOPCONTROL,
                             static_cast<uint8_t>(closedLoopControl),
                             0);
  }
  void add_compressorCurrentTooHighFault(bool compressorCurrentTooHighFault)
  {
    fbb_.AddElement<uint8_t>(
      PCMStatusFrame::VT_COMPRESSORCURRENTTOOHIGHFAULT,
      static_cast<uint8_t>(compressorCurrentTooHighFault),
      0);
  }
  void add_compressorShortedFault(bool compressorShortedFault)
  {
    fbb_.AddElement<uint8_t>(PCMStatusFrame::VT_COMPRESSORSHORTEDFAULT,
                             static_cast<uint8_t>(compressorShortedFault),
                             0);
  }
  void add_compressorNotConnectedFault(bool compressorNotConnectedFault)
  {
    fbb_.AddElement<uint8_t>(PCMStatusFrame::VT_COMPRESSORNOTCONNECTEDFAULT,
                             static_cast<uint8_t>(compressorNotConnectedFault),
                             0);
  }
  explicit PCMStatusFrameBuilder(flatbuffers::FlatBufferBuilder& _fbb)
    : fbb_(_fbb)
  {
    start_ = fbb_.StartTable();
  }
  PCMStatusFrameBuilder& operator=(const PCMStatusFrameBuilder&);
  flatbuffers::Offset<PCMStatusFrame> Finish()
  {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<PCMStatusFrame>(end);
    return o;
  }
};

inline flatbuffers::Offset<PCMStatusFrame>
CreatePCMStatusFrame(flatbuffers::FlatBufferBuilder& _fbb,
                     int32_t module_ = 0,
                     bool enabled = false,
                     bool pressureSwitchValve = false,
                     double compressorCurrent = 0.0,
                     bool closedLoopControl = false,
                     bool compressorCurrentTooHighFault = false,
                     bool compressorShortedFault = false,
                     bool compressorNotConnectedFault = false)
{
  PCMStatusFrameBuilder builder_(_fbb);
  builder_.add_compressorCurrent(compressorCurrent);
  builder_.add_module_(module_);
  builder_.add_compressorNotConnectedFault(compressorNotConnectedFault);
  builder_.add_compressorShortedFault(compressorShortedFault);
  builder_.add_compressorCurrentTooHighFault(compressorCurrentTooHighFault);
  builder_.add_closedLoopControl(closedLoopControl);
  builder_.add_pressureSwitchValve(pressureSwitchValve);
  builder_.add_enabled(enabled);
  return builder_.Finish();
}

struct StatusFrameHolder FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table
{
  typedef StatusFrameHolderBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE
  {
    VT_UNIXTIME = 4,
    VT_MONOTONICTIME = 6,
    VT_STATUSFRAME_TYPE = 8,
    VT_STATUSFRAME = 10
  };
  double unixTime() const { return GetField<double>(VT_UNIXTIME, 0.0); }
  double monotonicTime() const
  {
    return GetField<double>(VT_MONOTONICTIME, 0.0);
  }
  rj::StatusFrame statusFrame_type() const
  {
    return static_cast<rj::StatusFrame>(
      GetField<uint8_t>(VT_STATUSFRAME_TYPE, 0));
  }
  const void* statusFrame() const
  {
    return GetPointer<const void*>(VT_STATUSFRAME);
  }
  template<typename T>
  const T* statusFrame_as() const;
  const rj::CTREMotorStatusFrame* statusFrame_as_CTREMotorStatusFrame() const
  {
    return statusFrame_type() == rj::StatusFrame_CTREMotorStatusFrame
             ? static_cast<const rj::CTREMotorStatusFrame*>(statusFrame())
             : nullptr;
  }
  const rj::PDPStatusFrame* statusFrame_as_PDPStatusFrame() const
  {
    return statusFrame_type() == rj::StatusFrame_PDPStatusFrame
             ? static_cast<const rj::PDPStatusFrame*>(statusFrame())
             : nullptr;
  }
  const rj::PCMStatusFrame* statusFrame_as_PCMStatusFrame() const
  {
    return statusFrame_type() == rj::StatusFrame_PCMStatusFrame
             ? static_cast<const rj::PCMStatusFrame*>(statusFrame())
             : nullptr;
  }
  const rj::InitializeStatusFrame* statusFrame_as_InitializeStatusFrame() const
  {
    return statusFrame_type() == rj::StatusFrame_InitializeStatusFrame
             ? static_cast<const rj::InitializeStatusFrame*>(statusFrame())
             : nullptr;
  }
  bool Verify(flatbuffers::Verifier& verifier) const
  {
    return VerifyTableStart(verifier) &&
           VerifyField<double>(verifier, VT_UNIXTIME) &&
           VerifyField<double>(verifier, VT_MONOTONICTIME) &&
           VerifyField<uint8_t>(verifier, VT_STATUSFRAME_TYPE) &&
           VerifyOffset(verifier, VT_STATUSFRAME) &&
           VerifyStatusFrame(verifier, statusFrame(), statusFrame_type()) &&
           verifier.EndTable();
  }
};

template<>
inline const rj::CTREMotorStatusFrame*
StatusFrameHolder::statusFrame_as<rj::CTREMotorStatusFrame>() const
{
  return statusFrame_as_CTREMotorStatusFrame();
}

template<>
inline const rj::PDPStatusFrame*
StatusFrameHolder::statusFrame_as<rj::PDPStatusFrame>() const
{
  return statusFrame_as_PDPStatusFrame();
}

template<>
inline const rj::PCMStatusFrame*
StatusFrameHolder::statusFrame_as<rj::PCMStatusFrame>() const
{
  return statusFrame_as_PCMStatusFrame();
}

template<>
inline const rj::InitializeStatusFrame*
StatusFrameHolder::statusFrame_as<rj::InitializeStatusFrame>() const
{
  return statusFrame_as_InitializeStatusFrame();
}

struct StatusFrameHolderBuilder
{
  typedef StatusFrameHolder Table;
  flatbuffers::FlatBufferBuilder& fbb_;
  flatbuffers::uoffset_t start_;
  void add_unixTime(double unixTime)
  {
    fbb_.AddElement<double>(StatusFrameHolder::VT_UNIXTIME, unixTime, 0.0);
  }
  void add_monotonicTime(double monotonicTime)
  {
    fbb_.AddElement<double>(
      StatusFrameHolder::VT_MONOTONICTIME, monotonicTime, 0.0);
  }
  void add_statusFrame_type(rj::StatusFrame statusFrame_type)
  {
    fbb_.AddElement<uint8_t>(StatusFrameHolder::VT_STATUSFRAME_TYPE,
                             static_cast<uint8_t>(statusFrame_type),
                             0);
  }
  void add_statusFrame(flatbuffers::Offset<void> statusFrame)
  {
    fbb_.AddOffset(StatusFrameHolder::VT_STATUSFRAME, statusFrame);
  }
  explicit StatusFrameHolderBuilder(flatbuffers::FlatBufferBuilder& _fbb)
    : fbb_(_fbb)
  {
    start_ = fbb_.StartTable();
  }
  StatusFrameHolderBuilder& operator=(const StatusFrameHolderBuilder&);
  flatbuffers::Offset<StatusFrameHolder> Finish()
  {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<StatusFrameHolder>(end);
    return o;
  }
};

inline flatbuffers::Offset<StatusFrameHolder>
CreateStatusFrameHolder(flatbuffers::FlatBufferBuilder& _fbb,
                        double unixTime = 0.0,
                        double monotonicTime = 0.0,
                        rj::StatusFrame statusFrame_type = rj::StatusFrame_NONE,
                        flatbuffers::Offset<void> statusFrame = 0)
{
  StatusFrameHolderBuilder builder_(_fbb);
  builder_.add_monotonicTime(monotonicTime);
  builder_.add_unixTime(unixTime);
  builder_.add_statusFrame(statusFrame);
  builder_.add_statusFrame_type(statusFrame_type);
  return builder_.Finish();
}

inline bool
VerifyStatusFrame(flatbuffers::Verifier& verifier,
                  const void* obj,
                  StatusFrame type)
{
  switch (type) {
    case StatusFrame_NONE: {
      return true;
    }
    case StatusFrame_CTREMotorStatusFrame: {
      auto ptr = reinterpret_cast<const rj::CTREMotorStatusFrame*>(obj);
      return verifier.VerifyTable(ptr);
    }
    case StatusFrame_PDPStatusFrame: {
      auto ptr = reinterpret_cast<const rj::PDPStatusFrame*>(obj);
      return verifier.VerifyTable(ptr);
    }
    case StatusFrame_PCMStatusFrame: {
      auto ptr = reinterpret_cast<const rj::PCMStatusFrame*>(obj);
      return verifier.VerifyTable(ptr);
    }
    case StatusFrame_InitializeStatusFrame: {
      auto ptr = reinterpret_cast<const rj::InitializeStatusFrame*>(obj);
      return verifier.VerifyTable(ptr);
    }
    default:
      return true;
  }
}

inline bool
VerifyStatusFrameVector(
  flatbuffers::Verifier& verifier,
  const flatbuffers::Vector<flatbuffers::Offset<void>>* values,
  const flatbuffers::Vector<uint8_t>* types)
{
  if (!values || !types)
    return !values && !types;
  if (values->size() != types->size())
    return false;
  for (flatbuffers::uoffset_t i = 0; i < values->size(); ++i) {
    if (!VerifyStatusFrame(
          verifier, values->Get(i), types->GetEnum<StatusFrame>(i))) {
      return false;
    }
  }
  return true;
}

inline const rj::StatusFrameHolder*
GetStatusFrameHolder(const void* buf)
{
  return flatbuffers::GetRoot<rj::StatusFrameHolder>(buf);
}

inline const rj::StatusFrameHolder*
GetSizePrefixedStatusFrameHolder(const void* buf)
{
  return flatbuffers::GetSizePrefixedRoot<rj::StatusFrameHolder>(buf);
}

inline bool
VerifyStatusFrameHolderBuffer(flatbuffers::Verifier& verifier)
{
  return verifier.VerifyBuffer<rj::StatusFrameHolder>(nullptr);
}

inline bool
VerifySizePrefixedStatusFrameHolderBuffer(flatbuffers::Verifier& verifier)
{
  return verifier.VerifySizePrefixedBuffer<rj::StatusFrameHolder>(nullptr);
}

inline void
FinishStatusFrameHolderBuffer(flatbuffers::FlatBufferBuilder& fbb,
                              flatbuffers::Offset<rj::StatusFrameHolder> root)
{
  fbb.Finish(root);
}

inline void
FinishSizePrefixedStatusFrameHolderBuffer(
  flatbuffers::FlatBufferBuilder& fbb,
  flatbuffers::Offset<rj::StatusFrameHolder> root)
{
  fbb.FinishSizePrefixed(root);
}

} // namespace rj

#endif // FLATBUFFERS_GENERATED_STATUSFRAME_RJ_H_
