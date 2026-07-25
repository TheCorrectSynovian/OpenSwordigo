/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C0418
 * Mangled: _ZN5Caver23CollisionShapeComponent12setOnCollideERKNS_7ProgramE
 * Demangled: Caver::CollisionShapeComponent::setOnCollide(Caver::Program const&)
 *
 * Callers: 2
 *   0x0000000000202920  Caver::CollisionShapeComponent::setOnCollide(Caver::Program const&)
 *   0x00000000002C0134  Caver::Shape::ShapeWithPolygon(Caver::Polygon const&)
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 22
 *   insn=0x00000000002C0428 string=0x00000000002C042C "`B"
 *   insn=0x00000000002C043C string=0x00000000002C0440 "\n"
 *   insn=0x00000000002C043C string=0x00000000002C044C "uR@"
 *   insn=0x00000000002C0440 string=0x00000000002C0444 "J"
 *   insn=0x00000000002C0444 string=0x00000000002C0448 "\n"
 *   insn=0x00000000002C044C string=0x00000000002C0450 "i"
 *   insn=0x00000000002C0458 string=0x00000000002C045C ""
 *   insn=0x00000000002C0460 string=0x00000000002C0464 "!"
 *   insn=0x00000000002C046C string=0x00000000002C0470 "\t@"
 *   insn=0x00000000002C0478 string=0x00000000002C047C ""
 *   insn=0x00000000002C0480 string=0x00000000002C0484 " "
 *   insn=0x00000000002C048C string=0x00000000002C0490 "\n"
 *   insn=0x00000000002C048C string=0x00000000002C049C "tZ@"
 *   insn=0x00000000002C0490 string=0x00000000002C0494 "J"
 *   insn=0x00000000002C0494 string=0x00000000002C0498 "\n"
 *   insn=0x00000000002C049C string=0x00000000002C04A0 "i"
 *   insn=0x00000000002C04A8 string=0x00000000002C04AC ""
 *   insn=0x00000000002C04B0 string=0x00000000002C04B4 "!"
 *   insn=0x00000000002C04BC string=0x00000000002C04C0 "\t@"
 *   insn=0x00000000002C04C8 string=0x00000000002C04CC ""
 *   insn=0x00000000002C04EC string=0x00000000002C04F0 "@"
 *   insn=0x00000000002C0518 string=0x00000000002C051C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CollisionShapeComponent::setOnCollide(
        Caver::CollisionShapeComponent *this,
        const Caver::Program *a2)
{
  __int64 result; // x0
  __int64 v5; // x8
  __int64 v6; // x9
  _QWORD *v7; // x21
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 v11; // x9
  _QWORD *v12; // x20
  __int64 v13; // x8
  __int64 v14; // x8

  result = sub_56A6A8((char *)this + 144);
  v6 = *((_QWORD *)a2 + 1);
  v5 = *((_QWORD *)a2 + 2);
  if ( v5 )
    ++*(_QWORD *)(v5 + 8);
  v7 = (_QWORD *)*((_QWORD *)this + 20);
  *((_QWORD *)this + 19) = v6;
  *((_QWORD *)this + 20) = v5;
  if ( v7 )
  {
    v8 = v7[1] - 1LL;
    v7[1] = v8;
    if ( !v8 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
      v9 = v7[2] - 1LL;
      v7[2] = v9;
      if ( !v9 )
      {
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
        v11 = *((_QWORD *)a2 + 3);
        v10 = *((_QWORD *)a2 + 4);
        if ( !v10 )
          goto LABEL_8;
        goto LABEL_7;
      }
    }
  }
  v11 = *((_QWORD *)a2 + 3);
  v10 = *((_QWORD *)a2 + 4);
  if ( v10 )
LABEL_7:
    ++*(_QWORD *)(v10 + 8);
LABEL_8:
  v12 = (_QWORD *)*((_QWORD *)this + 22);
  *((_QWORD *)this + 21) = v11;
  *((_QWORD *)this + 22) = v10;
  if ( v12 )
  {
    v13 = v12[1] - 1LL;
    v12[1] = v13;
    if ( !v13 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
      v14 = v12[2] - 1LL;
      v12[2] = v14;
      if ( !v14 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
    }
  }
  return result;
}

