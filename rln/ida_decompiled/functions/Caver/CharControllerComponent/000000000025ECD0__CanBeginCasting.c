/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025ECD0
 * Mangled: _ZN5Caver23CharControllerComponent15CanBeginCastingEv
 * Demangled: Caver::CharControllerComponent::CanBeginCasting(void)
 *
 * Callers: 1
 *   0x0000000000200440  Caver::CharControllerComponent::CanBeginCasting(void)
 *
 * Callees: 1
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *
 * Referenced strings: 71
 *   insn=0x000000000025ECE0 string=0x000000000025ECE4 "("
 *   insn=0x000000000025ECE4 string=0x000000000025ECE8 "`"
 *   insn=0x000000000025ECE4 string=0x0000000000583944 "\n"
 *   insn=0x000000000025ECE8 string=0x000000000025ECEC "EI"
 *   insn=0x000000000025ECF0 string=0x000000000025ECF4 ","
 *   insn=0x000000000025ECF4 string=0x000000000025ECF8 "hB@"
 *   insn=0x000000000025ECF8 string=0x000000000025ECFC ""
 *   insn=0x000000000025ECFC string=0x000000000025ED00 "UD9"
 *   insn=0x000000000025ECFC string=0x000000000025ED7C "`"
 *   insn=0x000000000025ED04 string=0x000000000025ED08 "t"
 *   insn=0x000000000025ED08 string=0x000000000025ED0C "t"
 *   insn=0x000000000025ED0C string=0x000000000025ED98 "tN@"
 *   insn=0x000000000025ED10 string=0x000000000025ED14 ""
 *   insn=0x000000000025ED18 string=0x000000000025ED1C "tN@"
 *   insn=0x000000000025ED20 string=0x000000000025ED24 "`""
 *   insn=0x000000000025ED28 string=0x000000000025ED2C "mc"
 *   insn=0x000000000025ED2C string=0x000000000025ED30 "tN@"
 *   insn=0x000000000025ED2C string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000025ED34 string=0x000000000025ED44 "`"
 *   insn=0x000000000025ED38 string=0x000000000025ED3C ""
 *   insn=0x000000000025ED44 string=0x000000000025ED48 "t"
 *   insn=0x000000000025ED48 string=0x000000000025ED4C " "
 *   insn=0x000000000025ED4C string=0x000000000025ED50 "@"
 *   insn=0x000000000025ED50 string=0x000000000025ED54 ""
 *   insn=0x000000000025ED54 string=0x000000000025ED58 ""
 *   insn=0x000000000025ED5C string=0x000000000025ED60 ""
 *   insn=0x000000000025ED60 string=0x000000000025ED64 ""
 *   insn=0x000000000025ED68 string=0x000000000025ED6C "t"
 *   insn=0x000000000025ED70 string=0x000000000025ED74 "("
 *   insn=0x000000000025ED74 string=0x000000000025ED78 "3"
 *   insn=0x000000000025ED74 string=0x000000000025EE18 ")"
 *   insn=0x000000000025ED78 string=0x000000000025EE44 "T"
 *   insn=0x000000000025ED80 string=0x000000000025ED84 "Wc"
 *   insn=0x000000000025ED84 string=0x000000000025ED88 "hB@"
 *   insn=0x000000000025ED88 string=0x000000000025ED8C "UD9H"
 *   insn=0x000000000025ED8C string=0x000000000025ED90 "H"
 *   insn=0x000000000025ED9C string=0x000000000025EDA0 "`""
 *   insn=0x000000000025EDA4 string=0x000000000025EDA8 "Nc"
 *   insn=0x000000000025EDA8 string=0x000000000025EDAC "tN@"
 *   insn=0x000000000025EDB0 string=0x000000000025EDC0 "`"
 *   insn=0x000000000025EDB4 string=0x000000000025EDB8 ""
 *   insn=0x000000000025EDC0 string=0x000000000025EDC4 "t"
 *   insn=0x000000000025EDC4 string=0x000000000025EDC8 "@"
 *   insn=0x000000000025EDC8 string=0x000000000025EDCC "@"
 *   insn=0x000000000025EDCC string=0x000000000025EDD0 ""
 *   insn=0x000000000025EDD0 string=0x000000000025EDD4 ""
 *   insn=0x000000000025EDD8 string=0x000000000025EDDC ""
 *   insn=0x000000000025EDDC string=0x000000000025EDE0 ""
 *   insn=0x000000000025EDE4 string=0x000000000025EDE8 "t"
 *   insn=0x000000000025EDEC string=0x000000000025EDF0 "H"
 *   insn=0x000000000025EDF8 string=0x000000000025EDFC "9c"
 *   insn=0x000000000025EE04 string=0x000000000025EE08 "t"
 *   insn=0x000000000025EE18 string=0x000000000058493C "fff?"
 *   insn=0x000000000025EE1C string=0x000000000025EE20 ""=I"
 *   insn=0x000000000025EE30 string=0x000000000025EE34 "a$"
 *   insn=0x000000000025EE44 string=0x000000000025EE6C "tN@"
 *   insn=0x000000000025EE48 string=0x000000000025EE4C "h"
 *   insn=0x000000000025EE4C string=0x000000000025EE50 "hzA"
 *   insn=0x000000000025EE54 string=0x000000000025EECC "`"
 *   insn=0x000000000025EE70 string=0x000000000025EE74 "`""
 *   insn=0x000000000025EE7C string=0x000000000025EE80 "tN@"
 *   insn=0x000000000025EE84 string=0x000000000025EE94 "`"
 *   insn=0x000000000025EE88 string=0x000000000025EE8C ""
 *   insn=0x000000000025EE94 string=0x000000000025EE98 "t"
 *   insn=0x000000000025EE98 string=0x000000000025EE9C "`"
 *   insn=0x000000000025EE9C string=0x000000000025EEA0 "@"
 *   insn=0x000000000025EEA0 string=0x000000000025EEA4 ""
 *   insn=0x000000000025EEA4 string=0x000000000025EEA8 ""
 *   insn=0x000000000025EEAC string=0x000000000025EEB0 ""
 *   insn=0x000000000025EEB0 string=0x000000000025EEB4 ""
 *   insn=0x000000000025EEB8 string=0x000000000025EEBC "t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::CharControllerComponent::CanBeginCasting(Caver::CharControllerComponent *this)
{
  __int64 v2; // x8
  __int64 v3; // x20
  _DWORD *v4; // x0
  int v5; // w8
  float *v6; // x8
  _DWORD *v7; // x0
  int v8; // w8
  _DWORD *v10; // x0
  int v11; // w8

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
  v7 = (_DWORD *)*((_QWORD *)this + 50);
  *((_QWORD *)this + 50) = v3;
  if ( !v7 || (v8 = v7[2] - 1, (v7[2] = v8) != 0) )
  {
LABEL_5:
    if ( !*(_QWORD *)(v3 + 320) )
      goto LABEL_22;
LABEL_6:
    if ( v3 )
      goto LABEL_24;
    goto LABEL_7;
  }
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
  v3 = *((_QWORD *)this + 50);
  if ( *(_QWORD *)(v3 + 320) )
    goto LABEL_6;
LABEL_22:
  Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v3 + 304), (const Caver::Component *)v3);
  if ( !*(_QWORD *)(v3 + 320) )
    return 0;
  v3 = *((_QWORD *)this + 50);
  if ( v3 )
  {
LABEL_24:
    v6 = *(float **)(v3 + 368);
    if ( !v6 )
      goto LABEL_26;
    goto LABEL_25;
  }
LABEL_7:
  v3 = *((_QWORD *)this + 19);
  if ( v3
    || (Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)this + 136), this),
        (v3 = *((_QWORD *)this + 19)) != 0) )
  {
    ++*(_DWORD *)(v3 + 8);
  }
  v4 = (_DWORD *)*((_QWORD *)this + 50);
  *((_QWORD *)this + 50) = v3;
  if ( !v4 )
    goto LABEL_24;
  v5 = v4[2] - 1;
  v4[2] = v5;
  if ( v5 )
    goto LABEL_24;
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 8LL))(v4);
  v3 = *((_QWORD *)this + 50);
  v6 = *(float **)(v3 + 368);
  if ( !v6 )
    goto LABEL_26;
LABEL_25:
  if ( (float)((float)((float)(v6[10] * 0.9) - v6[3]) * (float)(v6[12] * v6[13])) > 0.01 )
    return 0;
LABEL_26:
  if ( v3 )
    goto LABEL_40;
  v3 = *((_QWORD *)this + 19);
  if ( v3
    || (Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)this + 136), this),
        (v3 = *((_QWORD *)this + 19)) != 0) )
  {
    ++*(_DWORD *)(v3 + 8);
  }
  v10 = (_DWORD *)*((_QWORD *)this + 50);
  *((_QWORD *)this + 50) = v3;
  if ( !v10 || (v11 = v10[2] - 1, (v10[2] = v11) != 0) )
  {
LABEL_40:
    if ( !*(_QWORD *)(v3 + 360) )
      goto LABEL_28;
    return 0;
  }
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 8LL))(v10);
  if ( *(_QWORD *)(*((_QWORD *)this + 50) + 360LL) )
    return 0;
LABEL_28:
  if ( *((_QWORD *)this + 94) )
    return 0;
  return *((float *)this + 190) <= 0.01;
}

