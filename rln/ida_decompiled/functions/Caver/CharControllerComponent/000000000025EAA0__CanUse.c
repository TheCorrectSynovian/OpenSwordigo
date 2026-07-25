/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025EAA0
 * Mangled: _ZN5Caver23CharControllerComponent6CanUseEv
 * Demangled: Caver::CharControllerComponent::CanUse(void)
 *
 * Callers: 1
 *   0x00000000001F8580  Caver::CharControllerComponent::CanUse(void)
 *
 * Callees: 1
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *
 * Referenced strings: 37
 *   insn=0x000000000025EAB0 string=0x000000000025EAB4 "("
 *   insn=0x000000000025EAB4 string=0x000000000025EAB8 "`"
 *   insn=0x000000000025EAB4 string=0x0000000000583944 "\n"
 *   insn=0x000000000025EAB8 string=0x000000000025EABC "EI"
 *   insn=0x000000000025EAC4 string=0x000000000025EAC8 "hB@"
 *   insn=0x000000000025EAC8 string=0x000000000025EACC ""
 *   insn=0x000000000025EACC string=0x000000000025EAD0 "UD9"
 *   insn=0x000000000025EACC string=0x000000000025EB2C "`"
 *   insn=0x000000000025EAD4 string=0x000000000025EAD8 "h"
 *   insn=0x000000000025EADC string=0x000000000025EAE0 ""
 *   insn=0x000000000025EADC string=0x000000000025EB58 "hN@"
 *   insn=0x000000000025EAE4 string=0x000000000025EAE8 ")"
 *   insn=0x000000000025EAE4 string=0x000000000025EB14 "hNA"
 *   insn=0x000000000025EAE8 string=0x000000000058493C "fff?"
 *   insn=0x000000000025EAEC string=0x000000000025EAF0 ""=I"
 *   insn=0x000000000025EB00 string=0x000000000025EB04 "a$"
 *   insn=0x000000000025EB14 string=0x000000000025EB18 "h"
 *   insn=0x000000000025EB18 string=0x000000000025EB1C "h"
 *   insn=0x000000000025EB24 string=0x000000000025EB28 ""
 *   insn=0x000000000025EB34 string=0x000000000025EB38 "hB@"
 *   insn=0x000000000025EB34 string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000025EB38 string=0x000000000025EB3C "UD9"
 *   insn=0x000000000025EB5C string=0x000000000025EB60 "`""
 *   insn=0x000000000025EB5C string=0x000000000025EB74 "\t\t@"
 *   insn=0x000000000025EB68 string=0x000000000025EB6C "hN@"
 *   insn=0x000000000025EB70 string=0x000000000025EB80 "`"
 *   insn=0x000000000025EB74 string=0x000000000025EB78 ")"
 *   insn=0x000000000025EB78 string=0x000000000025EB7C "\t\t"
 *   insn=0x000000000025EB80 string=0x000000000025EB84 "h"
 *   insn=0x000000000025EB88 string=0x000000000025EB8C "\t@"
 *   insn=0x000000000025EB8C string=0x000000000025EB90 ")"
 *   insn=0x000000000025EB90 string=0x000000000025EB94 "\t"
 *   insn=0x000000000025EB94 string=0x000000000025EB98 "A"
 *   insn=0x000000000025EB98 string=0x000000000025EB9C ""
 *   insn=0x000000000025EB9C string=0x000000000025EBA0 ""
 *   insn=0x000000000025EBA4 string=0x000000000025EBA8 "h"
 *   insn=0x000000000025EBA8 string=0x000000000025EBAC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::CharControllerComponent::CanUse(Caver::CharControllerComponent *this)
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
    return *((_DWORD *)this + 164) == 3;
  return 0;
}

