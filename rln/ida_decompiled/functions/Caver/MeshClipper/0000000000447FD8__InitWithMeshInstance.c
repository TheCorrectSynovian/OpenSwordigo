/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000447FD8
 * Mangled: _ZN5Caver11MeshClipper20InitWithMeshInstanceEPNS_12MeshInstanceERKNS_7Matrix4E
 * Demangled: Caver::MeshClipper::InitWithMeshInstance(Caver::MeshInstance *,Caver::Matrix4 const&)
 *
 * Callers: 1
 *   0x00000000001FA2A0  Caver::MeshClipper::InitWithMeshInstance(Caver::MeshInstance *,Caver::Matrix4 const&)
 *
 * Callees: 4
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F6610  Caver::MeshBuilder::TransformVertices(Caver::Matrix4 const&)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x0000000000203DA0  Caver::MeshBuilder::InitWithMeshInstance(Caver::MeshInstance *,bool)
 *
 * Referenced strings: 47
 *   insn=0x0000000000447FEC string=0x0000000000447FF0 "h""
 *   insn=0x0000000000447FF0 string=0x0000000000447FF4 "!"
 *   insn=0x0000000000447FFC string=0x0000000000448000 "\t"
 *   insn=0x0000000000448000 string=0x0000000000448004 "K"
 *   insn=0x0000000000448004 string=0x0000000000448008 ")"
 *   insn=0x0000000000448008 string=0x000000000044800C ")"
 *   insn=0x000000000044800C string=0x0000000000448010 "*"
 *   insn=0x0000000000448014 string=0x0000000000448018 "_!"
 *   insn=0x0000000000448018 string=0x000000000044801C "i""
 *   insn=0x000000000044801C string=0x0000000000448020 "b"
 *   insn=0x0000000000448020 string=0x000000000044802C "l2"
 *   insn=0x0000000000448024 string=0x0000000000448028 " "
 *   insn=0x0000000000448028 string=0x00000000004480A8 "jE@"
 *   insn=0x0000000000448038 string=0x000000000044803C "l"
 *   insn=0x0000000000448044 string=0x0000000000448048 "?"
 *   insn=0x000000000044804C string=0x0000000000448050 "k1"
 *   insn=0x000000000044804C string=0x0000000000448068 "L"
 *   insn=0x0000000000448050 string=0x0000000000448054 "k"
 *   insn=0x0000000000448054 string=0x0000000000448058 "k"
 *   insn=0x0000000000448060 string=0x0000000000448064 "("
 *   insn=0x0000000000448070 string=0x0000000000448074 "i"
 *   insn=0x0000000000448074 string=0x0000000000448078 "mb"
 *   insn=0x0000000000448078 string=0x000000000044807C ")!"
 *   insn=0x0000000000448098 string=0x000000000044809C "a"
 *   insn=0x000000000044809C string=0x00000000004480A0 "_"
 *   insn=0x00000000004480A4 string=0x00000000004480B8 "u""
 *   insn=0x00000000004480A8 string=0x00000000004480AC "*E"
 *   insn=0x00000000004480AC string=0x00000000004480B0 "?"
 *   insn=0x00000000004480C0 string=0x00000000004480C4 "7"
 *   insn=0x00000000004480CC string=0x00000000004480D0 "P"
 *   insn=0x00000000004480D0 string=0x00000000004480D4 "hZ"
 *   insn=0x00000000004480D0 string=0x00000000001F6610 "0'"
 *   insn=0x00000000004480D8 string=0x00000000004480DC "\t}"
 *   insn=0x00000000004480DC string=0x00000000004480E0 "h"
 *   insn=0x00000000004480E0 string=0x00000000004480E4 ""
 *   insn=0x00000000004480EC string=0x00000000004480F0 " "
 *   insn=0x00000000004480F0 string=0x00000000004480F4 "hV@"
 *   insn=0x00000000004480F0 string=0x00000000001F8570 "0'"
 *   insn=0x00000000004480F4 string=0x00000000004480F8 "`V"
 *   insn=0x00000000004480F8 string=0x00000000004480FC "h"
 *   insn=0x00000000004480FC string=0x0000000000448108 "h"
 *   insn=0x0000000000448104 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000044810C string=0x0000000000448110 "\t}"
 *   insn=0x0000000000448110 string=0x0000000000448114 "h"
 *   insn=0x0000000000448114 string=0x0000000000448118 ""
 *   insn=0x0000000000448124 string=0x0000000000448128 "h^@"
 *   insn=0x0000000000448128 string=0x000000000044812C "`^"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MeshClipper::InitWithMeshInstance(
        Caver::MeshClipper *this,
        Caver::MeshInstance *a2,
        const Caver::Matrix4 *a3)
{
  char *v4; // x8
  char *v5; // x9
  unsigned __int64 v6; // x10
  char *v8; // x9
  const Caver::Matrix4 *v9; // x11
  char *v10; // x12
  unsigned __int64 v11; // x11
  bool v12; // cc
  __int64 v13; // x9
  _OWORD *v14; // x13
  __int128 *v15; // x14
  __int64 v16; // x15
  __int128 v17; // q0
  __int128 v18; // q1
  int v19; // t1
  unsigned __int64 v20; // x8
  __int64 v21; // x9
  __int64 v22; // x8
  unsigned __int64 v23; // x0
  __int64 v24; // x0
  void *v25; // x8
  unsigned __int64 v26; // x8
  __int64 v27; // x9
  __int64 v28; // x8
  unsigned __int64 v29; // x0
  __int64 v30; // x0
  void *v31; // x8

  v4 = (char *)this + 72;
  *(_QWORD *)this = a2;
  v5 = (char *)this + 12;
  if ( (char *)this + 72 > (char *)this + 12 )
    v5 = (char *)this + 72;
  v6 = ((unsigned __int64)&v5[-9LL - (_QWORD)this] >> 2) + 1;
  v8 = (char *)this + 8;
  if ( v6 < 8 )
  {
    v9 = a3;
    do
    {
LABEL_12:
      v19 = *(_DWORD *)v9;
      v9 = (const Caver::Matrix4 *)((char *)v9 + 4);
      *(_DWORD *)v8 = v19;
      v8 += 4;
    }
    while ( v8 < v4 );
    goto LABEL_13;
  }
  v10 = (char *)this + 12;
  if ( v4 > (char *)this + 12 )
    v10 = (char *)this + 72;
  v11 = (unsigned __int64)&v10[-9LL - (_QWORD)this];
  if ( v8 < (char *)a3 + (v11 & 0xFFFFFFFFFFFFFFFCLL) + 4 )
  {
    v12 = (Caver::MeshClipper *)((char *)this + ((v11 + 12) & 0xFFFFFFFFFFFFFFFCLL)) > a3;
    v9 = a3;
    if ( v12 )
      goto LABEL_12;
  }
  v13 = 4 * (v6 & 0x7FFFFFFFFFFFFFF8LL);
  v9 = (const Caver::Matrix4 *)((char *)a3 + v13);
  v14 = (_OWORD *)((char *)this + 24);
  v8 = (char *)this + v13 + 8;
  v15 = (__int128 *)((char *)a3 + 16);
  v16 = v6 & 0x7FFFFFFFFFFFFFF8LL;
  do
  {
    v17 = *(v15 - 1);
    v18 = *v15;
    v16 -= 8;
    v15 += 2;
    *(v14 - 1) = v17;
    *v14 = v18;
    v14 += 2;
  }
  while ( v16 );
  if ( v6 != (v6 & 0x7FFFFFFFFFFFFFF8LL) )
    goto LABEL_12;
LABEL_13:
  Caver::MeshBuilder::InitWithMeshInstance((Caver::MeshClipper *)((char *)this + 72), a2, 1);
  Caver::MeshBuilder::TransformVertices((Caver::MeshClipper *)((char *)this + 72), a3);
  v20 = *((int *)this + 22);
  v21 = (v20 * (unsigned __int128)4uLL) >> 64;
  *((_DWORD *)this + 40) = v20;
  v22 = 4 * v20;
  if ( v21 )
    v23 = -1;
  else
    v23 = v22;
  v24 = operator new[](v23);
  v25 = (void *)*((_QWORD *)this + 21);
  *((_QWORD *)this + 21) = v24;
  if ( v25 )
    operator delete[](v25);
  v26 = *((int *)this + 38);
  v27 = (v26 * (unsigned __int128)4uLL) >> 64;
  *((_DWORD *)this + 44) = v26;
  v28 = 4 * v26;
  if ( v27 )
    v29 = -1;
  else
    v29 = v28;
  v30 = operator new[](v29);
  v31 = (void *)*((_QWORD *)this + 23);
  *((_QWORD *)this + 23) = v30;
  if ( v31 )
    operator delete[](v31);
}

