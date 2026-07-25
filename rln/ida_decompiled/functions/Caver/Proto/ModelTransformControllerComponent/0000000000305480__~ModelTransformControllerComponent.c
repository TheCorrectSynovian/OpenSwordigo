/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000305480
 * Mangled: _ZN5Caver5Proto33ModelTransformControllerComponentD0Ev
 * Demangled: Caver::Proto::ModelTransformControllerComponent::~ModelTransformControllerComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000030551C  Caver::Proto::ModelTransformControllerComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 20
 *   insn=0x0000000000305488 string=0x000000000030548C ""
 *   insn=0x000000000030548C string=0x0000000000305490 "\tF"
 *   insn=0x0000000000305494 string=0x0000000000305498 "A"
 *   insn=0x0000000000305498 string=0x000000000030549C "h"
 *   insn=0x000000000030549C string=0x00000000003054A0 ""
 *   insn=0x00000000003054A0 string=0x00000000003054A4 "1A"
 *   insn=0x00000000003054A4 string=0x00000000003054A8 ""
 *   insn=0x00000000003054AC string=0x00000000003054B0 "`"
 *   insn=0x00000000003054B0 string=0x00000000003054B4 "`\n@"
 *   insn=0x00000000003054B8 string=0x00000000003054BC ""
 *   insn=0x00000000003054B8 string=0x00000000003054C8 "`"
 *   insn=0x00000000003054BC string=0x00000000003054C0 ""
 *   insn=0x00000000003054CC string=0x00000000003054D0 ""
 *   insn=0x00000000003054D0 string=0x00000000003054D4 ""
 *   insn=0x00000000003054DC string=0x00000000003054E0 "H"
 *   insn=0x00000000003054E0 string=0x00000000001F7600 "0'"
 *   insn=0x00000000003054EC string=0x00000000003054F0 "p"
 *   insn=0x00000000003054F0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003054F8 string=0x00000000003054FC "A"
 *   insn=0x000000000030550C string=0x0000000000305510 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ModelTransformControllerComponent::~ModelTransformControllerComponent(
        Caver::Proto::ModelTransformControllerComponent *this)
{
  __int64 v2; // x0
  __int64 v3; // x0

  *(_QWORD *)this = off_6C7740;
  if ( (Caver::Proto::ModelTransformControllerComponent *)Caver::Proto::ModelTransformControllerComponent::default_instance_ != this )
  {
    v2 = *((_QWORD *)this + 2);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v3 = *((_QWORD *)this + 3);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

