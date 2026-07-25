/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030DA18
 * Mangled: _ZN5Caver5Proto15HealthComponentD0Ev
 * Demangled: Caver::Proto::HealthComponent::~HealthComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000030DAA0  Caver::Proto::HealthComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 11
 *   insn=0x000000000030DA24 string=0x000000000030DA28 ""
 *   insn=0x000000000030DA2C string=0x000000000030DA30 "A"
 *   insn=0x000000000030DA30 string=0x000000000030DA34 "h"
 *   insn=0x000000000030DA38 string=0x000000000030DA3C ""
 *   insn=0x000000000030DA3C string=0x000000000030DA40 ""
 *   insn=0x000000000030DA48 string=0x000000000030DA4C "`"
 *   insn=0x000000000030DA50 string=0x000000000030DA54 ""
 *   insn=0x000000000030DA54 string=0x000000000030DA58 ""
 *   insn=0x000000000030DA64 string=0x00000000001F7600 "0'"
 *   insn=0x000000000030DA74 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000030DA90 string=0x000000000030DA94 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::HealthComponent::~HealthComponent(Caver::Proto::HealthComponent *this)
{
  __int64 v2; // x0

  *(_QWORD *)this = off_6C7B78;
  if ( (Caver::Proto::HealthComponent *)Caver::Proto::HealthComponent::default_instance_ != this )
  {
    v2 = *((_QWORD *)this + 3);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

