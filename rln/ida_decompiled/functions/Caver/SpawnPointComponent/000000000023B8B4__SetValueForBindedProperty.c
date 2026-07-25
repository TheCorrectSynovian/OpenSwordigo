/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023B8B4
 * Mangled: _ZN5Caver19SpawnPointComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::SpawnPointComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FCAB0  Caver::BindingValue::Vector3Value(void)
 *
 * Referenced strings: 13
 *   insn=0x000000000023B8C0 string=0x000000000023B8C4 "T"
 *   insn=0x000000000023B8CC string=0x000000000023B8D0 "?"
 *   insn=0x000000000023B8DC string=0x000000000023B8E0 "H"
 *   insn=0x000000000023B8E0 string=0x000000000023B8E4 ""
 *   insn=0x000000000023B8E4 string=0x000000000023B8E8 "hr"
 *   insn=0x000000000023B8E8 string=0x000000000023B8EC ""
 *   insn=0x000000000023B8F4 string=0x000000000023B8F8 "n"
 *   insn=0x000000000023B8F8 string=0x00000000001FCAB0 "0'"
 *   insn=0x000000000023B8FC string=0x000000000023B900 "hB"
 *   insn=0x000000000023B904 string=0x000000000023B908 "h~"
 *   insn=0x000000000023B914 string=0x00000000001F9320 "0'"
 *   insn=0x000000000023B924 string=0x000000000023B938 "f"
 *   insn=0x000000000023B938 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SpawnPointComponent::SetValueForBindedProperty(
        Caver::SpawnPointComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  __int64 v4; // [xsp+8h] [xbp-28h]
  int v5; // [xsp+10h] [xbp-20h]

  _ReadStatusReg(TPIDR_EL0);
  if ( a2 == 1 )
  {
    Caver::BindingValue::Vector3Value(a3);
    *(_QWORD *)((char *)this + 116) = v4;
    *((_DWORD *)this + 31) = v5;
  }
  else if ( a2 )
  {
    Caver::Component::SetValueForBindedProperty(this, a2, a3);
  }
  else
  {
    *((_DWORD *)this + 28) = **((_DWORD **)a3 + 1);
  }
}

