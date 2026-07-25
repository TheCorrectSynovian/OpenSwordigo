/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000266F14
 * Mangled: _ZN5Caver21EntityActionComponent17InitWithComponentEPKS0_
 * Demangled: Caver::EntityActionComponent::InitWithComponent(Caver::EntityActionComponent const*)
 *
 * Callers: 1
 *   0x00000000001F5490  Caver::EntityActionComponent::InitWithComponent(Caver::EntityActionComponent const*)
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 24
 *   insn=0x0000000000266F30 string=0x0000000000266F34 "`"
 *   insn=0x0000000000266F34 string=0x0000000000266F38 "h""
 *   insn=0x0000000000266F3C string=0x0000000000266F40 "`"
 *   insn=0x0000000000266F50 string=0x0000000000266F54 "\n"
 *   insn=0x0000000000266F50 string=0x0000000000266F60 "uB@"
 *   insn=0x0000000000266F54 string=0x0000000000266F58 "J"
 *   insn=0x0000000000266F58 string=0x0000000000266F5C "\n"
 *   insn=0x0000000000266F60 string=0x0000000000266F64 "i"
 *   insn=0x0000000000266F6C string=0x0000000000266F70 ""
 *   insn=0x0000000000266F74 string=0x0000000000266F78 "!"
 *   insn=0x0000000000266F80 string=0x0000000000266F84 "\t@"
 *   insn=0x0000000000266F8C string=0x0000000000266F90 ""
 *   insn=0x0000000000266F94 string=0x0000000000266F98 " "
 *   insn=0x0000000000266FA0 string=0x0000000000266FA4 "\n"
 *   insn=0x0000000000266FA0 string=0x0000000000266FB0 "tJ@"
 *   insn=0x0000000000266FA4 string=0x0000000000266FA8 "J"
 *   insn=0x0000000000266FA8 string=0x0000000000266FAC "\n"
 *   insn=0x0000000000266FB0 string=0x0000000000266FB4 "i"
 *   insn=0x0000000000266FBC string=0x0000000000266FC0 ""
 *   insn=0x0000000000266FC4 string=0x0000000000266FC8 "!"
 *   insn=0x0000000000266FD0 string=0x0000000000266FD4 "\t@"
 *   insn=0x0000000000266FDC string=0x0000000000266FE0 ""
 *   insn=0x0000000000267000 string=0x0000000000267004 "@"
 *   insn=0x000000000026702C string=0x0000000000267030 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::EntityActionComponent::InitWithComponent(
        Caver::EntityActionComponent *this,
        const Caver::EntityActionComponent *a2)
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
  result = sub_56A6A8((char *)this + 112);
  v6 = *((_QWORD *)a2 + 15);
  v5 = *((_QWORD *)a2 + 16);
  if ( v5 )
    ++*(_QWORD *)(v5 + 8);
  v7 = (_QWORD *)*((_QWORD *)this + 16);
  *((_QWORD *)this + 15) = v6;
  *((_QWORD *)this + 16) = v5;
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
        v11 = *((_QWORD *)a2 + 17);
        v10 = *((_QWORD *)a2 + 18);
        if ( !v10 )
          goto LABEL_8;
        goto LABEL_7;
      }
    }
  }
  v11 = *((_QWORD *)a2 + 17);
  v10 = *((_QWORD *)a2 + 18);
  if ( v10 )
LABEL_7:
    ++*(_QWORD *)(v10 + 8);
LABEL_8:
  v12 = (_QWORD *)*((_QWORD *)this + 18);
  *((_QWORD *)this + 17) = v11;
  *((_QWORD *)this + 18) = v10;
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

