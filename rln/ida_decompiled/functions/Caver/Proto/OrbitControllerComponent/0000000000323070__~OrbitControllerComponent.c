/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000323070
 * Mangled: _ZN5Caver5Proto24OrbitControllerComponentD0Ev
 * Demangled: Caver::Proto::OrbitControllerComponent::~OrbitControllerComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003230F8  Caver::Proto::OrbitControllerComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 16
 *   insn=0x0000000000323078 string=0x000000000032307C ""
 *   insn=0x000000000032307C string=0x0000000000323080 ""
 *   insn=0x0000000000323084 string=0x0000000000323088 "A"
 *   insn=0x0000000000323088 string=0x000000000032308C "h"
 *   insn=0x000000000032308C string=0x0000000000323090 ""
 *   insn=0x0000000000323090 string=0x0000000000323094 "}D"
 *   insn=0x0000000000323094 string=0x0000000000323098 ""
 *   insn=0x00000000003230A0 string=0x00000000003230A4 "`\n@"
 *   insn=0x00000000003230A8 string=0x00000000003230AC ""
 *   insn=0x00000000003230AC string=0x00000000003230B0 ""
 *   insn=0x00000000003230B8 string=0x00000000003230BC "QQ"
 *   insn=0x00000000003230BC string=0x00000000001F7600 "0'"
 *   insn=0x00000000003230C8 string=0x00000000003230CC "yP"
 *   insn=0x00000000003230CC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003230D4 string=0x00000000003230D8 "JQ"
 *   insn=0x00000000003230E8 string=0x00000000003230EC "qP"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::OrbitControllerComponent::~OrbitControllerComponent(
        Caver::Proto::OrbitControllerComponent *this)
{
  __int64 v2; // x0

  *(_QWORD *)this = off_6C8A00;
  if ( (Caver::Proto::OrbitControllerComponent *)Caver::Proto::OrbitControllerComponent::default_instance_ != this )
  {
    v2 = *((_QWORD *)this + 2);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

