/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004482A4
 * Mangled: _ZN5Caver11MeshClipper11ClippedMeshEi
 * Demangled: Caver::MeshClipper::ClippedMesh(int)
 *
 * Callers: 1
 *   0x00000000001F4280  Caver::MeshClipper::ClippedMesh(int)
 *
 * Callees: 9
 *   0x00000000001F44E0  Caver::MeshBuilder::GenerateMesh(void)
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001F88E0  Caver::MeshBuilder::InitWithMeshBuilderFaceSubset(Caver::MeshBuilder const&,int *,int)
 *   0x0000000000203610  Caver::MeshBuilder::MeshBuilder(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 45
 *   insn=0x00000000004482BC string=0x00000000004482C0 "X"
 *   insn=0x00000000004482C4 string=0x00000000004482C8 ""
 *   insn=0x00000000004482DC string=0x00000000004482E0 "("
 *   insn=0x00000000004482E0 string=0x00000000004482E4 ")"
 *   insn=0x00000000004482E8 string=0x00000000004482EC " "
 *   insn=0x00000000004482F0 string=0x00000000004482F4 "?"
 *   insn=0x00000000004482F0 string=0x00000000001F8570 "0'"
 *   insn=0x00000000004482F8 string=0x00000000004482FC "K"
 *   insn=0x000000000044830C string=0x0000000000448310 "*"
 *   insn=0x0000000000448310 string=0x0000000000448314 "+yh"
 *   insn=0x0000000000448318 string=0x000000000044831C "a"
 *   insn=0x000000000044831C string=0x0000000000448320 "h"
 *   insn=0x000000000044831C string=0x0000000000448328 ""
 *   insn=0x0000000000448328 string=0x000000000044832C "_"
 *   insn=0x000000000044832C string=0x0000000000448330 "!"
 *   insn=0x0000000000448334 string=0x0000000000448338 "m"
 *   insn=0x0000000000448350 string=0x0000000000448354 "c"
 *   insn=0x0000000000448354 string=0x00000000001F88E0 "0'"
 *   insn=0x0000000000448358 string=0x000000000044835C "a"
 *   insn=0x000000000044835C string=0x0000000000448360 ""
 *   insn=0x000000000044835C string=0x00000000001F44E0 "P'"
 *   insn=0x0000000000448364 string=0x0000000000448368 ""
 *   insn=0x0000000000448370 string=0x0000000000448374 "\t"
 *   insn=0x0000000000448374 string=0x0000000000448378 ")"
 *   insn=0x0000000000448378 string=0x000000000044837C "\t"
 *   insn=0x0000000000448380 string=0x0000000000448384 "@"
 *   insn=0x0000000000448388 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000044838C string=0x0000000000448390 "@"
 *   insn=0x0000000000448398 string=0x000000000044839C "t"
 *   insn=0x00000000004483A0 string=0x00000000004483A4 ""
 *   insn=0x00000000004483B0 string=0x00000000004483B4 "\t@"
 *   insn=0x00000000004483C0 string=0x00000000004483C4 ""
 *   insn=0x00000000004483D0 string=0x00000000004483D4 "@"
 *   insn=0x00000000004483EC string=0x00000000004483F0 ""
 *   insn=0x00000000004483EC string=0x00000000001F4F60 "P'"
 *   insn=0x000000000044841C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000448420 string=0x0000000000448424 " "
 *   insn=0x000000000044843C string=0x0000000000448440 "5"
 *   insn=0x0000000000448450 string=0x0000000000448454 "@"
 *   insn=0x000000000044845C string=0x0000000000448460 "5"
 *   insn=0x0000000000448464 string=0x0000000000448468 ""
 *   insn=0x0000000000448474 string=0x0000000000448478 "\t@"
 *   insn=0x0000000000448484 string=0x0000000000448488 ""
 *   insn=0x0000000000448494 string=0x0000000000448498 "@"
 *   insn=0x00000000004484B4 string=0x00000000004484B8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::MeshClipper::ClippedMesh(Caver::MeshClipper *this@<X0>, int a2@<W1>, _QWORD *a3@<X8>)
{
  unsigned __int64 v6; // x25
  unsigned __int64 v7; // x0
  __int64 v8; // x0
  int *v9; // x19
  __int64 v10; // x9
  __int64 v11; // x8
  int v12; // w22
  const Caver::MeshBuilder *v13; // x23
  _QWORD *Mesh; // x0
  __int64 v15; // x8
  _QWORD *v16; // x20
  __int64 v17; // x8
  __int64 v18; // x8
  __int64 v19; // [xsp+0h] [xbp-A0h] BYREF
  _QWORD *v20; // [xsp+8h] [xbp-98h]
  void *v21; // [xsp+18h] [xbp-88h]
  void *p; // [xsp+38h] [xbp-68h]
  __int64 v23; // [xsp+58h] [xbp-48h]

  v23 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = *((int *)this + 38);
  if ( is_mul_ok(v6, 4u) )
    v7 = 4 * v6;
  else
    v7 = -1;
  v8 = operator new[](v7);
  v9 = (int *)v8;
  if ( (int)v6 < 1 )
    goto LABEL_20;
  v10 = *((_QWORD *)this + 23);
  v11 = 0;
  v12 = 0;
  v13 = (Caver::MeshClipper *)((char *)this + 72);
  do
  {
    if ( *(_DWORD *)(v10 + 4 * v11) == a2 )
      *(_DWORD *)(v8 + 4LL * v12++) = v11;
    ++v11;
  }
  while ( (unsigned int)v6 != v11 );
  if ( v12 <= 0 )
  {
LABEL_20:
    *a3 = 0;
    a3[1] = 0;
  }
  else
  {
    Caver::MeshBuilder::MeshBuilder((Caver::MeshBuilder *)&v19);
    Caver::MeshBuilder::InitWithMeshBuilderFaceSubset((Caver::MeshBuilder *)&v19, v13, v9, v12);
    Mesh = (_QWORD *)Caver::MeshBuilder::GenerateMesh((Caver::MeshBuilder *)&v19);
    *a3 = *Mesh;
    v15 = Mesh[1];
    a3[1] = v15;
    if ( v15 )
      ++*(_QWORD *)(v15 + 8);
    if ( p )
      operator delete(p);
    if ( v21 )
      operator delete(v21);
    v16 = v20;
    if ( v20 )
    {
      v17 = v20[1] - 1LL;
      v20[1] = v17;
      if ( !v17 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
        v18 = v16[2] - 1LL;
        v16[2] = v18;
        if ( !v18 )
          (*(void (__fastcall **)(_QWORD *))(*v16 + 24LL))(v16);
      }
    }
  }
  operator delete[](v9);
}

