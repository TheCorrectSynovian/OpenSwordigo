/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022DE24
 * Mangled: _ZN5Caver20OverlayTextComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::OverlayTextComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000001FCE80  Caver::OverlayTextComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FF500  Caver::OverlayComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 66
 *   insn=0x000000000022DE30 string=0x000000000022DE34 "T"
 *   insn=0x000000000022DE38 string=0x000000000022DE3C "("
 *   insn=0x000000000022DE50 string=0x000000000022DE58 "(y"
 *   insn=0x000000000022DE58 string=0x000000000022DE5C ""
 *   insn=0x000000000022DE60 string=0x000000000022DE64 "A"
 *   insn=0x000000000022DE60 string=0x000000000022DEC0 "H"
 *   insn=0x000000000022DE60 string=0x000000000022DED0 "H"
 *   insn=0x000000000022DE60 string=0x000000000022DEE0 "A"
 *   insn=0x000000000022DE60 string=0x000000000022DF3C "H"
 *   insn=0x000000000022DE60 string=0x000000000022DF4C "H"
 *   insn=0x000000000022DE6C string=0x000000000022DE70 "`"
 *   insn=0x000000000022DE7C string=0x000000000022DE80 "h"
 *   insn=0x000000000022DE88 string=0x000000000022DE8C ")"
 *   insn=0x000000000022DE94 string=0x000000000022DE98 "`"
 *   insn=0x000000000022DE9C string=0x000000000022DEA0 ")=G"
 *   insn=0x000000000022DEA0 string=0x000000000022DEA4 "!"
 *   insn=0x000000000022DEA8 string=0x000000000022DEAC "\t"
 *   insn=0x000000000022DEA8 string=0x000000000022DF84 "\t"
 *   insn=0x000000000022DEAC string=0x000000000022DEB0 "*"
 *   insn=0x000000000022DEB0 string=0x000000000022DEB4 "\n"
 *   insn=0x000000000022DEB8 string=0x000000000022DEBC "5"
 *   insn=0x000000000022DEBC string=0x000000000022DF90 "?"
 *   insn=0x000000000022DEC0 string=0x000000000022DEC4 ""
 *   insn=0x000000000022DEC4 string=0x000000000022DEC8 "h"
 *   insn=0x000000000022DEC8 string=0x000000000022DECC "&"
 *   insn=0x000000000022DED0 string=0x000000000022DED4 ""
 *   insn=0x000000000022DED4 string=0x000000000022DED8 "h~"
 *   insn=0x000000000022DED8 string=0x000000000022DEDC """
 *   insn=0x000000000022DEE8 string=0x000000000022DEEC "`B"
 *   insn=0x000000000022DEF8 string=0x000000000022DEFC "h"
 *   insn=0x000000000022DF04 string=0x000000000022DF08 ")"
 *   insn=0x000000000022DF18 string=0x000000000022DF1C ")=G"
 *   insn=0x000000000022DF1C string=0x000000000022DF20 "!"
 *   insn=0x000000000022DF20 string=0x000000000022DF24 "\t"
 *   insn=0x000000000022DF24 string=0x000000000022DF28 "\t"
 *   insn=0x000000000022DF28 string=0x000000000022DF2C "*"
 *   insn=0x000000000022DF2C string=0x000000000022DF30 "\n"
 *   insn=0x000000000022DF3C string=0x000000000022DF40 ""
 *   insn=0x000000000022DF40 string=0x000000000022DF44 "hz"
 *   insn=0x000000000022DF44 string=0x000000000022DF48 ""
 *   insn=0x000000000022DF4C string=0x000000000022DF50 ""
 *   insn=0x000000000022DF50 string=0x000000000022DF54 "h"
 *   insn=0x000000000022DF5C string=0x000000000022DF60 "hE"
 *   insn=0x000000000022DF84 string=0x000000000022DF88 "*"
 *   insn=0x000000000022DF88 string=0x000000000022DF8C "\n"
 *   insn=0x000000000022DFA4 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000022DFAC string=0x000000000022DFB0 "J"
 *   insn=0x000000000022DFB4 string=0x000000000022DFB8 "(a"
 *   insn=0x000000000022DFC4 string=0x000000000022DFC8 "J=G"
 *   insn=0x000000000022DFC8 string=0x000000000022DFCC ")!"
 *   insn=0x000000000022DFD0 string=0x000000000022DFD4 "*"
 *   insn=0x000000000022DFD0 string=0x000000000022E040 "*"
 *   insn=0x000000000022DFD4 string=0x000000000022DFD8 "K"
 *   insn=0x000000000022DFD8 string=0x000000000022DFDC "+"
 *   insn=0x000000000022DFE4 string=0x000000000022E024 "_"
 *   insn=0x000000000022DFEC string=0x000000000022DFF0 "J"
 *   insn=0x000000000022DFF4 string=0x000000000022DFF8 "(a"
 *   insn=0x000000000022E004 string=0x000000000022E008 "J=G"
 *   insn=0x000000000022E008 string=0x000000000022E00C ")!"
 *   insn=0x000000000022E010 string=0x000000000022E014 "*"
 *   insn=0x000000000022E014 string=0x000000000022E018 "K"
 *   insn=0x000000000022E018 string=0x000000000022E01C "+"
 *   insn=0x000000000022E038 string=0x000000000022E03C ""N"
 *   insn=0x000000000022E040 string=0x000000000022E044 "K"
 *   insn=0x000000000022E044 string=0x000000000022E048 "+"
 *   insn=0x000000000022E048 string=0x000000000022E04C "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::OverlayTextComponent::SetValueForBindedProperty(
        Caver::OverlayTextComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  void *v4; // x0
  unsigned int *v5; // x8
  int v6; // w9
  _QWORD v7[3]; // [xsp+8h] [xbp-28h] BYREF

  v7[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  switch ( a2 )
  {
    case 'd':
      sub_56A528(v7, *((_QWORD *)a3 + 1));
      sub_56A6A8((char *)this + 112);
      *((_BYTE *)this + 128) = 1;
      v4 = (void *)(v7[0] - 24LL);
      if ( (__int64 *)(v7[0] - 24LL) != &qword_6FD2E0 )
      {
        v5 = (unsigned int *)(v7[0] - 8LL);
        if ( !&pthread_create )
          goto LABEL_16;
        do
          v6 = __ldaxr(v5);
        while ( __stlxr(v6 - 1, v5) );
        goto LABEL_17;
      }
      break;
    case 'e':
      *((_DWORD *)this + 30) = **((_DWORD **)a3 + 1);
      break;
    case 'f':
      *((_DWORD *)this + 31) = **((_DWORD **)a3 + 1);
      break;
    case 'g':
      sub_56A528(v7, *((_QWORD *)a3 + 1));
      sub_56A6A8((char *)this + 144);
      *((_BYTE *)this + 168) = 1;
      v4 = (void *)(v7[0] - 24LL);
      if ( (__int64 *)(v7[0] - 24LL) != &qword_6FD2E0 )
      {
        v5 = (unsigned int *)(v7[0] - 8LL);
        if ( &pthread_create )
        {
          do
            v6 = __ldaxr(v5);
          while ( __stlxr(v6 - 1, v5) );
        }
        else
        {
LABEL_16:
          v6 = (*v5)--;
        }
LABEL_17:
        if ( v6 <= 0 )
          operator delete(v4);
      }
      break;
    case 'h':
      *((_DWORD *)this + 38) = **((_DWORD **)a3 + 1);
      break;
    case 'i':
      *((_DWORD *)this + 39) = **((_DWORD **)a3 + 1);
      break;
    default:
      Caver::OverlayComponent::SetValueForBindedProperty(this, a2, a3);
      break;
  }
}

