/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000228040
 * Mangled: _ZN5Caver33ModelTransformControllerComponent15RegisterLibraryEv
 * Demangled: Caver::ModelTransformControllerComponent::RegisterLibrary(void)
 *
 * Callers: 1
 *   0x00000000001FCEB0  Caver::ModelTransformControllerComponent::RegisterLibrary(void)
 *
 * Callees: 11
 *   0x00000000001F5110  Caver::Matrix4::PostTranslate(Caver::Vector3 const&)
 *   0x00000000001F5F50  Caver::Vector3::IsClose(Caver::Vector3 const&,float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A00  Caver::ProgramState::RegisterLibrary(std::string const&,Caver::LibFunction const*)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FC200  Caver::Matrix4::RotationAxis(float,float,float,float)
 *   0x00000000001FFE90  C_Matrix4Mul(float const*,float const*,float *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 94
 *   insn=0x000000000022804C string=0x0000000000228050 "S"
 *   insn=0x0000000000228050 string=0x0000000000228054 "h"
 *   insn=0x0000000000228058 string=0x000000000022805C ""
 *   insn=0x0000000000228064 string=0x00000000005841C2 "ModelTransformController"
 *   insn=0x0000000000228084 string=0x0000000000228088 "^>"
 *   insn=0x0000000000228088 string=0x00000000001F7A00 "0'"
 *   insn=0x0000000000228090 string=0x0000000000228094 ")"
 *   insn=0x000000000022809C string=0x00000000002280A0 "!"
 *   insn=0x00000000002280A0 string=0x00000000002280A4 "h"
 *   insn=0x00000000002280B0 string=0x0000000000228108 "r8"
 *   insn=0x00000000002280C4 string=0x00000000002280C8 ")=G"
 *   insn=0x00000000002280C8 string=0x00000000002280CC "!"
 *   insn=0x00000000002280D0 string=0x00000000002280D4 "\t"
 *   insn=0x00000000002280D0 string=0x00000000002280E8 "\t"
 *   insn=0x00000000002280D4 string=0x00000000002280D8 "*"
 *   insn=0x00000000002280D8 string=0x00000000002280DC "\n"
 *   insn=0x00000000002280E4 string=0x00000000002280F4 "?"
 *   insn=0x00000000002280E8 string=0x00000000002280EC "*"
 *   insn=0x00000000002280EC string=0x00000000002280F0 "\n"
 *   insn=0x00000000002280F4 string=0x00000000002280F8 "l"
 *   insn=0x0000000000228108 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000228110 string=0x0000000000228114 "J"
 *   insn=0x0000000000228118 string=0x000000000022811C "(a"
 *   insn=0x0000000000228128 string=0x000000000022812C "J=G"
 *   insn=0x000000000022812C string=0x0000000000228130 ")!"
 *   insn=0x0000000000228134 string=0x0000000000228138 "*"
 *   insn=0x0000000000228134 string=0x0000000000228164 "*"
 *   insn=0x0000000000228138 string=0x000000000022813C "K"
 *   insn=0x000000000022813C string=0x0000000000228140 "+"
 *   insn=0x0000000000228144 string=0x0000000000228148 "_"
 *   insn=0x0000000000228164 string=0x0000000000228168 "K"
 *   insn=0x0000000000228168 string=0x000000000022816C "+"
 *   insn=0x000000000022816C string=0x0000000000228170 "_"
 *   insn=0x0000000000228194 string=0x0000000000228198 "V"
 *   insn=0x00000000002281A4 string=0x00000000002281A8 "a"
 *   insn=0x00000000002281AC string=0x00000000002281B0 ""
 *   insn=0x00000000002281B0 string=0x00000000002281B4 """
 *   insn=0x00000000002281B4 string=0x00000000002281B8 "@ ("
 *   insn=0x00000000002281B8 string=0x00000000002281BC "M"
 *   insn=0x00000000002281BC string=0x00000000002281C0 "b"
 *   insn=0x00000000002281BC string=0x00000000002281E4 "h"B9"
 *   insn=0x00000000002281C0 string=0x00000000002281C4 "  "
 *   insn=0x00000000002281C8 string=0x00000000002281CC "h""
 *   insn=0x00000000002281D0 string=0x00000000002281D4 "`"
 *   insn=0x00000000002281D4 string=0x00000000002281D8 "hB@"
 *   insn=0x00000000002281D8 string=0x00000000002281DC "h"
 *   insn=0x00000000002281E0 string=0x00000000002281F4 "`"
 *   insn=0x00000000002281E8 string=0x00000000002281EC "hB@"
 *   insn=0x00000000002281F8 string=0x00000000002281FC "9>"
 *   insn=0x00000000002281FC string=0x0000000000228200 "hB@"
 *   insn=0x00000000002281FC string=0x00000000001F7AE0 "0'"
 *   insn=0x0000000000228200 string=0x0000000000228204 ""
 *   insn=0x000000000022820C string=0x0000000000228210 "eB"
 *   insn=0x0000000000228214 string=0x0000000000228218 "u2"
 *   insn=0x000000000022822C string=0x0000000000228230 "!"
 *   insn=0x0000000000228234 string=0x0000000000228238 "F7"
 *   insn=0x0000000000228238 string=0x00000000001F5F50 "P'"
 *   insn=0x0000000000228240 string=0x0000000000228250 "`"
 *   insn=0x000000000022824C string=0x00000000001F5110 "P'"
 *   insn=0x0000000000228254 string=0x0000000000228258 "  ("
 *   insn=0x000000000022825C string=0x0000000000228260 "a\nS-c"
 *   insn=0x0000000000228260 string=0x0000000000228264 "c"
 *   insn=0x000000000022826C string=0x00000000001FC200 "0'"
 *   insn=0x0000000000228284 string=0x0000000000228294 "`"
 *   insn=0x0000000000228288 string=0x00000000002282B8 "hB@"
 *   insn=0x000000000022828C string=0x0000000000228290 "T"
 *   insn=0x0000000000228294 string=0x0000000000228298 "a"
 *   insn=0x00000000002282A4 string=0x00000000002282A8 "!@!"
 *   insn=0x00000000002282BC string=0x00000000002282CC "`"
 *   insn=0x00000000002282C0 string=0x00000000002282E0 "\ta"
 *   insn=0x00000000002282C4 string=0x00000000002282C8 "6"
 *   insn=0x00000000002282C8 string=0x00000000002283A0 "\ta"
 *   insn=0x00000000002282D4 string=0x00000000002282D8 "hB@"
 *   insn=0x00000000002282D8 string=0x00000000002282DC "U"
 *   insn=0x00000000002282E0 string=0x00000000002282E4 "q"
 *   insn=0x00000000002282E4 string=0x00000000002282E8 ""
 *   insn=0x00000000002282E8 string=0x00000000002282EC "?"
 *   insn=0x00000000002282EC string=0x00000000002282F0 ","
 *   insn=0x00000000002282F0 string=0x00000000002282F4 "n"
 *   insn=0x00000000002282F8 string=0x00000000002282FC "k"
 *   insn=0x00000000002282FC string=0x0000000000228300 "l"
 *   insn=0x0000000000228300 string=0x0000000000228304 "\na"
 *   insn=0x0000000000228310 string=0x0000000000228314 "?"
 *   insn=0x0000000000228310 string=0x000000000022838C "lE@"
 *   insn=0x0000000000228314 string=0x0000000000228318 "-"
 *   insn=0x0000000000228320 string=0x0000000000228324 "n"
 *   insn=0x0000000000228328 string=0x000000000022832C "_"
 *   insn=0x0000000000228338 string=0x000000000022833C ""
 *   insn=0x0000000000228340 string=0x0000000000228344 "H"
 *   insn=0x0000000000228354 string=0x0000000000228358 "\n"
 *   insn=0x000000000022835C string=0x0000000000228360 "Ja"
 *   insn=0x000000000022837C string=0x0000000000228380 "a"
 *   insn=0x000000000022838C string=0x0000000000228390 "LE"
 *   insn=0x0000000000228390 string=0x0000000000228394 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ModelTransformControllerComponent::RegisterLibrary(
        Caver::ModelTransformControllerComponent *this)
{
  void *v1; // x0
  unsigned int *v2; // x8
  int v3; // w9
  _QWORD v4[3]; // [xsp+D8h] [xbp-28h] BYREF

  v4[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_566BB8((int)v4, "ModelTransformController");
  Caver::ProgramState::RegisterLibrary();
  v1 = (void *)(v4[0] - 24LL);
  if ( (__int64 *)(v4[0] - 24LL) != &qword_6FD2E0 )
  {
    v2 = (unsigned int *)(v4[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v3 = __ldaxr(v2);
      while ( __stlxr(v3 - 1, v2) );
    }
    else
    {
      v3 = (*v2)--;
    }
    if ( v3 <= 0 )
      operator delete(v1);
  }
}

