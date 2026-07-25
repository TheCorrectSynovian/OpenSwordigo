/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000315BA4
 * Mangled: _ZN5Caver5Proto24PressureTriggerComponentD0Ev
 * Demangled: Caver::Proto::PressureTriggerComponent::~PressureTriggerComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000315C40  Caver::Proto::PressureTriggerComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 17
 *   insn=0x0000000000315BB0 string=0x0000000000315BB4 ""
 *   insn=0x0000000000315BB8 string=0x0000000000315BBC "A"
 *   insn=0x0000000000315BBC string=0x0000000000315BC0 "h"
 *   insn=0x0000000000315BC0 string=0x0000000000315BC4 "h"
 *   insn=0x0000000000315BC4 string=0x0000000000315BC8 ""
 *   insn=0x0000000000315BC8 string=0x0000000000315BCC ""
 *   insn=0x0000000000315BD0 string=0x0000000000315BD4 "`"
 *   insn=0x0000000000315BD4 string=0x0000000000315BD8 "`"
 *   insn=0x0000000000315BDC string=0x0000000000315BE0 ""
 *   insn=0x0000000000315BDC string=0x0000000000315BEC "`"
 *   insn=0x0000000000315BE0 string=0x0000000000315BE4 ""
 *   insn=0x0000000000315BF0 string=0x0000000000315BF4 ""
 *   insn=0x0000000000315BF4 string=0x0000000000315BF8 ""
 *   insn=0x0000000000315C04 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000315C14 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000315C1C string=0x0000000000315C20 "x"
 *   insn=0x0000000000315C38 string=0x0000000000315C3C """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::PressureTriggerComponent::~PressureTriggerComponent(
        Caver::Proto::PressureTriggerComponent *this)
{
  __int64 v2; // x0
  __int64 v3; // x0

  *(_QWORD *)this = off_6C8118;
  if ( (Caver::Proto::PressureTriggerComponent *)Caver::Proto::PressureTriggerComponent::default_instance_ != this )
  {
    v2 = *((_QWORD *)this + 3);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v3 = *((_QWORD *)this + 4);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

