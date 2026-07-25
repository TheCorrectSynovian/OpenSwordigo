/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000261928
 * Mangled: _ZN5Caver24CollectableItemComponent17InitWithComponentEPKS0_
 * Demangled: Caver::CollectableItemComponent::InitWithComponent(Caver::CollectableItemComponent const*)
 *
 * Callers: 1
 *   0x00000000001FB520  Caver::CollectableItemComponent::InitWithComponent(Caver::CollectableItemComponent const*)
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 32
 *   insn=0x0000000000261944 string=0x0000000000261948 "`"
 *   insn=0x0000000000261948 string=0x000000000026194C "h""
 *   insn=0x000000000026194C string=0x0000000000261950 "V#"
 *   insn=0x0000000000261958 string=0x000000000026195C "`"
 *   insn=0x000000000026195C string=0x0000000000261960 "h:"
 *   insn=0x0000000000261960 string=0x0000000000261964 "Q#"
 *   insn=0x0000000000261968 string=0x000000000026196C "`"
 *   insn=0x000000000026196C string=0x0000000000261970 "N#"
 *   insn=0x0000000000261974 string=0x0000000000261978 "`B"
 *   insn=0x000000000026197C string=0x0000000000261980 "h""
 *   insn=0x0000000000261980 string=0x0000000000261984 "I#"
 *   insn=0x000000000026198C string=0x0000000000261990 "\n"
 *   insn=0x000000000026198C string=0x000000000026199C "uR@"
 *   insn=0x0000000000261990 string=0x0000000000261994 "J"
 *   insn=0x0000000000261994 string=0x0000000000261998 "\n"
 *   insn=0x000000000026199C string=0x00000000002619A0 "i"
 *   insn=0x00000000002619A8 string=0x00000000002619AC ""
 *   insn=0x00000000002619B0 string=0x00000000002619B4 "!"
 *   insn=0x00000000002619BC string=0x00000000002619C0 "\t@"
 *   insn=0x00000000002619C8 string=0x00000000002619CC ""
 *   insn=0x00000000002619D0 string=0x00000000002619D4 " "
 *   insn=0x00000000002619DC string=0x00000000002619E0 "\n"
 *   insn=0x00000000002619DC string=0x00000000002619EC "tZ@"
 *   insn=0x00000000002619E0 string=0x00000000002619E4 "J"
 *   insn=0x00000000002619E4 string=0x00000000002619E8 "\n"
 *   insn=0x00000000002619EC string=0x00000000002619F0 "i"
 *   insn=0x00000000002619F8 string=0x00000000002619FC ""
 *   insn=0x0000000000261A00 string=0x0000000000261A04 "!"
 *   insn=0x0000000000261A0C string=0x0000000000261A10 "\t@"
 *   insn=0x0000000000261A18 string=0x0000000000261A1C ""
 *   insn=0x0000000000261A3C string=0x0000000000261A40 "@"
 *   insn=0x0000000000261A68 string=0x0000000000261A6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CollectableItemComponent::InitWithComponent(
        Caver::CollectableItemComponent *this,
        const Caver::CollectableItemComponent *a2)
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

  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  sub_56A6A8((char *)this + 56);
  *((_QWORD *)this + 14) = *((_QWORD *)a2 + 14);
  sub_56A6A8((char *)this + 120);
  sub_56A6A8((char *)this + 128);
  *((_BYTE *)this + 136) = *((_BYTE *)a2 + 136);
  result = sub_56A6A8((char *)this + 144);
  v6 = *((_QWORD *)a2 + 19);
  v5 = *((_QWORD *)a2 + 20);
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
        v11 = *((_QWORD *)a2 + 21);
        v10 = *((_QWORD *)a2 + 22);
        if ( !v10 )
          goto LABEL_8;
        goto LABEL_7;
      }
    }
  }
  v11 = *((_QWORD *)a2 + 21);
  v10 = *((_QWORD *)a2 + 22);
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

