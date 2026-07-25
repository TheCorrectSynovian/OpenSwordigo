/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000215138
 * Mangled: _ZN5Caver37BoneControlledCollisionShapeComponentD2Ev
 * Demangled: Caver::BoneControlledCollisionShapeComponent::~BoneControlledCollisionShapeComponent()
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8310  Caver::CollisionShapeComponent::~CollisionShapeComponent()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000215380  Caver::BoneControlledCollisionShapeComponent::Clone(void)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 72
 *   insn=0x0000000000215148 string=0x000000000021514C "T"
 *   insn=0x000000000021514C string=0x0000000000215150 ")yA"
 *   insn=0x0000000000215158 string=0x000000000021515C "*A"
 *   insn=0x000000000021515C string=0x0000000000215160 "@"
 *   insn=0x0000000000215160 string=0x0000000000215164 "*A"
 *   insn=0x0000000000215168 string=0x000000000021516C ")A"
 *   insn=0x000000000021516C string=0x0000000000215170 "h"
 *   insn=0x0000000000215170 string=0x0000000000215174 " "
 *   insn=0x0000000000215174 string=0x0000000000215178 "j"
 *   insn=0x000000000021517C string=0x0000000000215180 ")"
 *   insn=0x0000000000215184 string=0x0000000000215188 "`"
 *   insn=0x0000000000215190 string=0x00000000002151F0 "i&"
 *   insn=0x0000000000215194 string=0x0000000000215198 "`"
 *   insn=0x0000000000215198 string=0x000000000021519C "i@"
 *   insn=0x000000000021519C string=0x00000000002151A0 "A"
 *   insn=0x00000000002151A0 string=0x00000000002151A4 "h"
 *   insn=0x00000000002151A8 string=0x00000000002151AC "@"
 *   insn=0x00000000002151AC string=0x00000000002151B0 ""
 *   insn=0x00000000002151B0 string=0x00000000002151B4 ""
 *   insn=0x00000000002151B8 string=0x00000000002151BC ""
 *   insn=0x00000000002151BC string=0x00000000002151C0 ""
 *   insn=0x00000000002151C8 string=0x00000000002151CC "Q"
 *   insn=0x00000000002151CC string=0x00000000001F8310 "0'"
 *   insn=0x00000000002151DC string=0x0000000000215234 "'"
 *   insn=0x00000000002151F0 string=0x00000000002151F4 ")=G"
 *   insn=0x00000000002151F4 string=0x00000000002151F8 "!"
 *   insn=0x00000000002151FC string=0x0000000000215200 "\t"
 *   insn=0x00000000002151FC string=0x0000000000215214 "\t"
 *   insn=0x0000000000215200 string=0x0000000000215204 "*"
 *   insn=0x0000000000215204 string=0x0000000000215208 "\n"
 *   insn=0x0000000000215210 string=0x0000000000215220 "?"
 *   insn=0x0000000000215214 string=0x0000000000215218 "*"
 *   insn=0x0000000000215218 string=0x000000000021521C "\n"
 *   insn=0x0000000000215228 string=0x000000000021522C "^T"
 *   insn=0x0000000000215234 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000021523C string=0x0000000000215240 "4"
 *   insn=0x0000000000215248 string=0x000000000021524C "@"
 *   insn=0x0000000000215260 string=0x0000000000215264 "T"
 *   insn=0x0000000000215264 string=0x0000000000215268 ")yA"
 *   insn=0x0000000000215270 string=0x0000000000215274 "*A"
 *   insn=0x0000000000215274 string=0x0000000000215278 "@"
 *   insn=0x0000000000215278 string=0x000000000021527C "*A"
 *   insn=0x0000000000215280 string=0x0000000000215284 ")A"
 *   insn=0x0000000000215284 string=0x0000000000215288 "h"
 *   insn=0x0000000000215288 string=0x000000000021528C " "
 *   insn=0x000000000021528C string=0x0000000000215290 "j"
 *   insn=0x0000000000215294 string=0x0000000000215298 ")"
 *   insn=0x000000000021529C string=0x00000000002152A0 "`"
 *   insn=0x00000000002152A4 string=0x00000000002152A8 "A"
 *   insn=0x00000000002152A8 string=0x0000000000215310 "i&"
 *   insn=0x00000000002152AC string=0x00000000002152B0 "`"
 *   insn=0x00000000002152B0 string=0x00000000002152B4 "i@"
 *   insn=0x00000000002152B4 string=0x00000000002152B8 "A"
 *   insn=0x00000000002152B8 string=0x00000000002152BC "h"
 *   insn=0x00000000002152C0 string=0x00000000002152C4 "@"
 *   insn=0x00000000002152C4 string=0x00000000002152C8 ""
 *   insn=0x00000000002152C8 string=0x00000000002152CC ""
 *   insn=0x00000000002152D0 string=0x00000000002152D4 ""
 *   insn=0x00000000002152D4 string=0x00000000002152D8 ""
 *   insn=0x00000000002152E0 string=0x00000000002152E4 ""
 *   insn=0x00000000002152EC string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000215310 string=0x0000000000215314 ")=G"
 *   insn=0x0000000000215314 string=0x0000000000215318 "!"
 *   insn=0x000000000021531C string=0x0000000000215320 "\t"
 *   insn=0x000000000021531C string=0x0000000000215334 "\t"
 *   insn=0x0000000000215320 string=0x0000000000215324 "*"
 *   insn=0x0000000000215324 string=0x0000000000215328 "\n"
 *   insn=0x0000000000215330 string=0x0000000000215340 "?"
 *   insn=0x0000000000215334 string=0x0000000000215338 "*"
 *   insn=0x0000000000215338 string=0x000000000021533C "\n"
 *   insn=0x0000000000215340 string=0x0000000000215344 "L"
 *   insn=0x0000000000215378 string=0x000000000021537C "R"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::BoneControlledCollisionShapeComponent::~BoneControlledCollisionShapeComponent(
        Caver::BoneControlledCollisionShapeComponent *this)
{
  __int128 v2; // q0
  __int64 v3; // x8
  void *v4; // x0
  _DWORD *v5; // x0
  int v6; // w8
  unsigned int *v7; // x8
  int v8; // w9

  *(_QWORD *)&v2 = &off_6B93C0;
  _ReadStatusReg(TPIDR_EL0);
  v3 = *((_QWORD *)this + 61);
  *((_QWORD *)&v2 + 1) = &off_6B9400;
  *(_QWORD *)this = off_6B9280;
  v4 = (void *)(v3 - 24);
  *((_OWORD *)this + 1) = v2;
  if ( (__int64 *)(v3 - 24) != &qword_6FD2E0 )
  {
    v7 = (unsigned int *)(v3 - 8);
    if ( &pthread_create )
    {
      do
        v8 = __ldaxr(v7);
      while ( __stlxr(v8 - 1, v7) );
    }
    else
    {
      v8 = (*v7)--;
    }
    if ( v8 <= 0 )
      operator delete(v4);
  }
  v5 = (_DWORD *)*((_QWORD *)this + 60);
  *((_QWORD *)this + 58) = off_6B9438;
  if ( v5 )
  {
    v6 = v5[2] - 1;
    v5[2] = v6;
    if ( !v6 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  Caver::CollisionShapeComponent::~CollisionShapeComponent(this);
}

