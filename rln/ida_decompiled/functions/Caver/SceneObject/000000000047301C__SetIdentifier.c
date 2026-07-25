/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047301C
 * Mangled: _ZN5Caver11SceneObject13SetIdentifierERKSs
 * Demangled: Caver::SceneObject::SetIdentifier(std::string const&)
 *
 * Callers: 2
 *   0x00000000001FB490  Caver::SceneObject::SetIdentifier(std::string const&)
 *   0x0000000000472850  Caver::SceneObject::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 8
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9270  Caver::Scene::ObjectIdentifierChanged(std::string const&,std::string const&)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 37
 *   insn=0x000000000047302C string=0x0000000000473030 "V"
 *   insn=0x0000000000473044 string=0x0000000000473048 "a"
 *   insn=0x000000000047304C string=0x0000000000473050 "("
 *   insn=0x0000000000473054 string=0x0000000000473058 "_"
 *   insn=0x0000000000473058 string=0x000000000047305C "a"
 *   insn=0x000000000047305C string=0x0000000000473060 "L"
 *   insn=0x0000000000473060 string=0x0000000000473064 "@"
 *   insn=0x0000000000473060 string=0x00000000001F5190 "P'"
 *   insn=0x000000000047306C string=0x0000000000473070 "."
 *   insn=0x000000000047308C string=0x0000000000473090 "x"
 *   insn=0x0000000000473090 string=0x00000000001F9270 "0'"
 *   insn=0x0000000000473098 string=0x000000000047309C ")"
 *   insn=0x00000000004730A4 string=0x00000000004730A8 "A"
 *   insn=0x00000000004730B8 string=0x0000000000473114 "o"
 *   insn=0x00000000004730D0 string=0x00000000004730D4 ")=G"
 *   insn=0x00000000004730D4 string=0x00000000004730D8 "!"
 *   insn=0x00000000004730DC string=0x00000000004730E0 "\t"
 *   insn=0x00000000004730DC string=0x00000000004730F4 "\t"
 *   insn=0x00000000004730E0 string=0x00000000004730E4 "*"
 *   insn=0x00000000004730E4 string=0x00000000004730E8 "\n"
 *   insn=0x00000000004730F0 string=0x0000000000473100 "?"
 *   insn=0x00000000004730F4 string=0x00000000004730F8 "*"
 *   insn=0x00000000004730F8 string=0x00000000004730FC "\n"
 *   insn=0x0000000000473100 string=0x0000000000473104 "L"
 *   insn=0x0000000000473114 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000047311C string=0x0000000000473120 "J"
 *   insn=0x0000000000473124 string=0x0000000000473128 "(a"
 *   insn=0x0000000000473134 string=0x0000000000473138 "J=G"
 *   insn=0x0000000000473138 string=0x000000000047313C ")!"
 *   insn=0x0000000000473140 string=0x0000000000473144 "*"
 *   insn=0x0000000000473140 string=0x0000000000473170 "*"
 *   insn=0x0000000000473144 string=0x0000000000473148 "K"
 *   insn=0x0000000000473148 string=0x000000000047314C "+"
 *   insn=0x0000000000473150 string=0x0000000000473154 "_"
 *   insn=0x0000000000473170 string=0x0000000000473174 "K"
 *   insn=0x0000000000473174 string=0x0000000000473178 "+"
 *   insn=0x0000000000473178 string=0x000000000047317C "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SceneObject::SetIdentifier(__int64 a1, const void **a2)
{
  _QWORD *v4; // x1
  __int64 v5; // x19
  size_t v6; // x2
  void *v7; // x0
  unsigned int *v8; // x8
  int v9; // w9
  _QWORD v10[3]; // [xsp+8h] [xbp-38h] BYREF

  v10[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = a1 + 80;
  v4 = *(_QWORD **)(a1 + 80);
  v6 = *((_QWORD *)*a2 - 3);
  if ( v6 != *(v4 - 3) || memcmp(*a2, v4, v6) )
  {
    sub_56A528(v10, v5);
    sub_56A6A8(v5);
    if ( *(_QWORD *)(a1 + 32) )
      Caver::Scene::ObjectIdentifierChanged();
    v7 = (void *)(v10[0] - 24LL);
    if ( (__int64 *)(v10[0] - 24LL) != &qword_6FD2E0 )
    {
      v8 = (unsigned int *)(v10[0] - 8LL);
      if ( &pthread_create )
      {
        do
          v9 = __ldaxr(v8);
        while ( __stlxr(v9 - 1, v8) );
      }
      else
      {
        v9 = (*v8)--;
      }
      if ( v9 <= 0 )
        operator delete(v7);
    }
  }
}

