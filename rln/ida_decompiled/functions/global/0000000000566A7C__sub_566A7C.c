/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000566A7C
 * Mangled: sub_566A7C
 * Demangled: sub_566A7C
 *
 * Callers: 11
 *   0x000000000047A684  DataFromJByteArray(_JNIEnv *,_jbyteArray *)
 *   0x00000000004BB8D0  Caver::ProfileManager_Android::PlayerProfileWasSaved(Caver::PlayerProfile *,bool)
 *   0x00000000004C191C  Caver::ProgramState::StringAtStackIndex(int)
 *   0x00000000004C2658  Caver::Font::LoadFromFile(std::string const&)
 *   0x0000000000545D04  sub_545D04
 *   0x0000000000546320  sub_546320
 *   0x00000000005464C0  sub_5464C0
 *   0x0000000000546C04  sub_546C04
 *   0x0000000000546D9C  sub_546D9C
 *   0x0000000000547574  sub_547574
 *   0x0000000000547764  sub_547764
 *
 * Callees: 4
 *   0x00000000001F55E0  operator new(ulong)
 *   0x0000000000201760  .memcpy
 *   0x0000000000565330  sub_565330
 *   0x000000000056554C  sub_56554C
 *
 * Referenced strings: 21
 *   insn=0x0000000000566A88 string=0x0000000000566A8C """
 *   insn=0x0000000000566A90 string=0x0000000000566A94 "?"
 *   insn=0x0000000000566A98 string=0x0000000000566A9C " "
 *   insn=0x0000000000566AA8 string=0x0000000000566AB0 " "
 *   insn=0x0000000000566AA8 string=0x000000000059E2E8 "basic_string::_S_construct null not valid"
 *   insn=0x0000000000566ABC string=0x0000000000566AC0 "h"
 *   insn=0x0000000000566AC0 string=0x0000000000566AC4 "b"?"
 *   insn=0x0000000000566AC4 string=0x0000000000566AC8 " "
 *   insn=0x0000000000566ACC string=0x0000000000566AD0 "_"
 *   insn=0x0000000000566AD4 string=0x0000000000566AD8 "b"
 *   insn=0x0000000000566AD4 string=0x0000000000566B50 "`f"
 *   insn=0x0000000000566AD8 string=0x0000000000566ADC "`"
 *   insn=0x0000000000566ADC string=0x0000000000566AE0 "B,@"
 *   insn=0x0000000000566AE8 string=0x0000000000566AEC "#"
 *   insn=0x0000000000566AF4 string=0x0000000000566AF8 "4"
 *   insn=0x0000000000566B04 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000566B34 string=0x0000000000566B38 "!"
 *   insn=0x0000000000566B6C string=0x0000000000566B70 "a"
 *   insn=0x0000000000566B70 string=0x0000000000566B74 " "
 *   insn=0x0000000000566BAC string=0x0000000000566BB4 "f"
 *   insn=0x0000000000566BAC string=0x000000000059F980 "basic_string::_S_create"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_566A7C(_QWORD *result, unsigned __int8 *a2, size_t a3)
{
  unsigned __int8 *v4; // x2
  _QWORD *v5; // x22
  __int64 v6; // x2
  __int64 v7; // x20
  __int64 v8; // x21
  unsigned __int8 *v9; // x1
  void *v10; // x3
  __int64 v11; // x0

  v4 = &a2[a3];
  v5 = result;
  if ( a2 == v4 )
  {
    *result = &byte_6FD2F8;
    return result;
  }
  if ( v4 && !a2 )
    sub_565330("basic_string::_S_construct null not valid");
  if ( a3 > 0x3FFFFFFFFFFFFFF9LL )
    sub_56554C("basic_string::_S_create");
  if ( a3 - 4040 > 0xFFFFFFFFFFFFEFFELL )
  {
    v11 = operator new(a3 + 25);
    *(_QWORD *)(v11 + 8) = a3;
    *(_DWORD *)(v11 + 16) = 0;
    v8 = v11;
    v10 = (void *)(v11 + 24);
    v9 = a2;
    if ( a3 == 1 )
    {
      result = (_QWORD *)*a2;
      *(_BYTE *)(v8 + 24) = (_BYTE)result;
      goto LABEL_11;
    }
  }
  else
  {
    v6 = ((_WORD)a3 + 57) & 0xFFF;
    v7 = 0x3FFFFFFFFFFFFFF9LL;
    if ( a3 + 4096 - v6 <= 0x3FFFFFFFFFFFFFF9LL )
      v7 = a3 + 4096 - v6;
    v8 = operator new(v7 + 25);
    v9 = a2;
    v10 = (void *)(v8 + 24);
    *(_QWORD *)(v8 + 8) = v7;
    *(_DWORD *)(v8 + 16) = 0;
  }
  result = memcpy(v10, v9, a3);
  v10 = result;
LABEL_11:
  if ( (__int64 *)v8 != &qword_6FD2E0 )
  {
    result = (_QWORD *)(v8 + a3);
    *(_QWORD *)v8 = a3;
    *(_BYTE *)(v8 + a3 + 24) = 0;
  }
  *v5 = v10;
  return result;
}

