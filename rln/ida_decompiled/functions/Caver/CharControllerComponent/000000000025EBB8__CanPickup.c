/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025EBB8
 * Mangled: _ZN5Caver23CharControllerComponent9CanPickupEv
 * Demangled: Caver::CharControllerComponent::CanPickup(void)
 *
 * Callers: 1
 *   0x00000000001F3FE0  Caver::CharControllerComponent::CanPickup(void)
 *
 * Callees: 1
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *
 * Referenced strings: 37
 *   insn=0x000000000025EBC8 string=0x000000000025EBCC "("
 *   insn=0x000000000025EBCC string=0x000000000025EBD0 "`"
 *   insn=0x000000000025EBCC string=0x0000000000583944 "\n"
 *   insn=0x000000000025EBD0 string=0x000000000025EBD4 "EI"
 *   insn=0x000000000025EBDC string=0x000000000025EBE0 "hB@"
 *   insn=0x000000000025EBE0 string=0x000000000025EBE4 ""
 *   insn=0x000000000025EBE4 string=0x000000000025EBE8 "UD9"
 *   insn=0x000000000025EBE4 string=0x000000000025EC44 "`"
 *   insn=0x000000000025EBEC string=0x000000000025EBF0 "h"
 *   insn=0x000000000025EBF4 string=0x000000000025EBF8 ""
 *   insn=0x000000000025EBF4 string=0x000000000025EC70 "hN@"
 *   insn=0x000000000025EBFC string=0x000000000025EC00 ")"
 *   insn=0x000000000025EBFC string=0x000000000025EC2C "hNA"
 *   insn=0x000000000025EC00 string=0x000000000058493C "fff?"
 *   insn=0x000000000025EC04 string=0x000000000025EC08 ""=I"
 *   insn=0x000000000025EC18 string=0x000000000025EC1C "a$"
 *   insn=0x000000000025EC2C string=0x000000000025EC30 "h"
 *   insn=0x000000000025EC30 string=0x000000000025EC34 "h"
 *   insn=0x000000000025EC3C string=0x000000000025EC40 ""
 *   insn=0x000000000025EC4C string=0x000000000025EC50 "hB@"
 *   insn=0x000000000025EC4C string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000025EC50 string=0x000000000025EC54 "UD9"
 *   insn=0x000000000025EC74 string=0x000000000025EC78 "`""
 *   insn=0x000000000025EC74 string=0x000000000025EC8C "\t\t@"
 *   insn=0x000000000025EC80 string=0x000000000025EC84 "hN@"
 *   insn=0x000000000025EC88 string=0x000000000025EC98 "`"
 *   insn=0x000000000025EC8C string=0x000000000025EC90 ")"
 *   insn=0x000000000025EC90 string=0x000000000025EC94 "\t\t"
 *   insn=0x000000000025EC98 string=0x000000000025EC9C "h"
 *   insn=0x000000000025ECA0 string=0x000000000025ECA4 "\t@"
 *   insn=0x000000000025ECA4 string=0x000000000025ECA8 ")"
 *   insn=0x000000000025ECA8 string=0x000000000025ECAC "\t"
 *   insn=0x000000000025ECAC string=0x000000000025ECB0 "A"
 *   insn=0x000000000025ECB0 string=0x000000000025ECB4 ""
 *   insn=0x000000000025ECB4 string=0x000000000025ECB8 ""
 *   insn=0x000000000025ECBC string=0x000000000025ECC0 "h"
 *   insn=0x000000000025ECC0 string=0x000000000025ECC4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::CharControllerComponent::CanPickup(Caver::CharControllerComponent *this)
{
  __int64 v2; // x8
  __int64 v3; // x8
  float *v4; // x8
  _DWORD *v6; // x0
  int v7; // w9

  if ( *((float *)this + 190) > 0.01 )
    return 0;
  v2 = *((_QWORD *)this + 16);
  if ( v2 )
  {
    if ( *(_BYTE *)(v2 + 277) )
      return 0;
  }
  else
  {
    Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)this + 112), this);
    if ( *(_BYTE *)(*((_QWORD *)this + 16) + 277LL) )
      return 0;
  }
  v3 = *((_QWORD *)this + 50);
  if ( v3 )
    goto LABEL_5;
  v3 = *((_QWORD *)this + 19);
  if ( v3
    || (Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)this + 136), this),
        (v3 = *((_QWORD *)this + 19)) != 0) )
  {
    ++*(_DWORD *)(v3 + 8);
  }
  v6 = (_DWORD *)*((_QWORD *)this + 50);
  *((_QWORD *)this + 50) = v3;
  if ( !v6 || (v7 = v6[2] - 1, (v6[2] = v7) != 0) )
  {
LABEL_5:
    v4 = *(float **)(v3 + 368);
    if ( !v4 )
      goto LABEL_7;
LABEL_6:
    if ( (float)((float)((float)(v4[10] * 0.9) - v4[3]) * (float)(v4[12] * v4[13])) > 0.01 )
      return 0;
    goto LABEL_7;
  }
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
  v4 = *(float **)(*((_QWORD *)this + 50) + 368LL);
  if ( v4 )
    goto LABEL_6;
LABEL_7:
  if ( *((_QWORD *)this + 83) )
    return *((_DWORD *)this + 164) == 1;
  return 0;
}

