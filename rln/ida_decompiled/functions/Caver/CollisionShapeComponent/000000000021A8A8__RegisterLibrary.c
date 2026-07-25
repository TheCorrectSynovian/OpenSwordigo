/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021A8A8
 * Mangled: _ZN5Caver23CollisionShapeComponent15RegisterLibraryEv
 * Demangled: Caver::CollisionShapeComponent::RegisterLibrary(void)
 *
 * Callers: 1
 *   0x0000000000200C30  Caver::CollisionShapeComponent::RegisterLibrary(void)
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A00  Caver::ProgramState::RegisterLibrary(std::string const&,Caver::LibFunction const*)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 41
 *   insn=0x000000000021A8B4 string=0x000000000021A8B8 "S"
 *   insn=0x000000000021A8B8 string=0x000000000021A8BC "h"
 *   insn=0x000000000021A8C0 string=0x000000000021A8C4 ""
 *   insn=0x000000000021A8C8 string=0x000000000021A8CC "A"
 *   insn=0x000000000021A8CC string=0x0000000000583843 "CollisionShape"
 *   insn=0x000000000021A8EC string=0x000000000021A8F0 "Dt"
 *   insn=0x000000000021A8F0 string=0x00000000001F7A00 "0'"
 *   insn=0x000000000021A8F4 string=0x000000000021A8F8 "I&"
 *   insn=0x000000000021A8F8 string=0x000000000021A8FC ")"
 *   insn=0x000000000021A904 string=0x000000000021A908 "!"
 *   insn=0x000000000021A908 string=0x000000000021A90C "h"
 *   insn=0x000000000021A908 string=0x000000000021A92C "I&"
 *   insn=0x000000000021A918 string=0x000000000021A970 "Xn"
 *   insn=0x000000000021A92C string=0x000000000021A930 ")=G"
 *   insn=0x000000000021A930 string=0x000000000021A934 "!"
 *   insn=0x000000000021A938 string=0x000000000021A93C "\t"
 *   insn=0x000000000021A938 string=0x000000000021A950 "\t"
 *   insn=0x000000000021A93C string=0x000000000021A940 "*"
 *   insn=0x000000000021A940 string=0x000000000021A944 "\n"
 *   insn=0x000000000021A94C string=0x000000000021A95C "?"
 *   insn=0x000000000021A950 string=0x000000000021A954 "*"
 *   insn=0x000000000021A954 string=0x000000000021A958 "\n"
 *   insn=0x000000000021A95C string=0x000000000021A960 "l"
 *   insn=0x000000000021A970 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000021A974 string=0x000000000021A978 "J&"
 *   insn=0x000000000021A978 string=0x000000000021A97C "J"
 *   insn=0x000000000021A980 string=0x000000000021A984 "(a"
 *   insn=0x000000000021A98C string=0x000000000021A990 "J&"
 *   insn=0x000000000021A990 string=0x000000000021A994 "J=G"
 *   insn=0x000000000021A994 string=0x000000000021A998 ")!"
 *   insn=0x000000000021A99C string=0x000000000021A9A0 "*"
 *   insn=0x000000000021A99C string=0x000000000021A9CC "*"
 *   insn=0x000000000021A9A0 string=0x000000000021A9A4 "K"
 *   insn=0x000000000021A9A4 string=0x000000000021A9A8 "+"
 *   insn=0x000000000021A9AC string=0x000000000021A9B0 "_"
 *   insn=0x000000000021A9BC string=0x000000000021A9C0 "y>"
 *   insn=0x000000000021A9CC string=0x000000000021A9D0 "K"
 *   insn=0x000000000021A9D0 string=0x000000000021A9D4 "+"
 *   insn=0x000000000021A9D4 string=0x000000000021A9D8 "_"
 *   insn=0x000000000021A9E4 string=0x000000000021A9E8 ""
 *   insn=0x000000000021A9F8 string=0x000000000021A9FC "@( "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::CollisionShapeComponent::RegisterLibrary(Caver::CollisionShapeComponent *this)
{
  void *v1; // x0
  unsigned int *v2; // x8
  int v3; // w9
  _QWORD v4[3]; // [xsp+8h] [xbp-28h] BYREF

  v4[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_566BB8((int)v4, "CollisionShape");
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

