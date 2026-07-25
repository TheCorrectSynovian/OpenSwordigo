/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002128CC
 * Mangled: _ZN5Caver13AnimBlendNode6UpdateEf
 * Demangled: Caver::AnimBlendNode::Update(float)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 32
 *   insn=0x00000000002128E0 string=0x00000000002128E4 "`\n@"
 *   insn=0x00000000002128E4 string=0x00000000002128E8 ""
 *   insn=0x00000000002128E8 string=0x00000000002128EC "@"
 *   insn=0x00000000002128EC string=0x00000000002128F0 "h"
 *   insn=0x00000000002128F4 string=0x00000000002128F8 "u"
 *   insn=0x00000000002128F8 string=0x00000000002128FC "5"
 *   insn=0x00000000002128FC string=0x0000000000212900 "h"
 *   insn=0x00000000002128FC string=0x0000000000212960 ""
 *   insn=0x0000000000212904 string=0x0000000000212908 "`*@"
 *   insn=0x0000000000212904 string=0x0000000000212938 "a"
 *   insn=0x0000000000212908 string=0x000000000021290C "  "
 *   insn=0x000000000021290C string=0x0000000000212910 "L"
 *   insn=0x0000000000212910 string=0x0000000000212914 "`&@"
 *   insn=0x0000000000212910 string=0x0000000000212918 "a"@"
 *   insn=0x000000000021291C string=0x0000000000212920 " 8 "
 *   insn=0x0000000000212920 string=0x0000000000212924 "  "
 *   insn=0x0000000000212924 string=0x0000000000212928 "`""
 *   insn=0x0000000000212930 string=0x0000000000212934 "\n"
 *   insn=0x000000000021293C string=0x0000000000212940 " ( "
 *   insn=0x0000000000212948 string=0x000000000021294C "`""
 *   insn=0x0000000000212954 string=0x0000000000212958 "h""
 *   insn=0x0000000000212964 string=0x0000000000212968 "\t@"
 *   insn=0x000000000021296C string=0x0000000000212970 "h"
 *   insn=0x0000000000212978 string=0x000000000021297C "\t"
 *   insn=0x0000000000212980 string=0x0000000000212984 ")\t@"
 *   insn=0x0000000000212984 string=0x0000000000212988 " "
 *   insn=0x0000000000212988 string=0x000000000021298C "u"
 *   insn=0x0000000000212998 string=0x000000000021299C "`"@"
 *   insn=0x0000000000212998 string=0x0000000000583734 "o"
 *   insn=0x00000000002129AC string=0x00000000002129B0 ""
 *   insn=0x00000000002129B4 string=0x0000000000583730 "w"
 *   insn=0x00000000002129C0 string=0x00000000002129C4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AnimBlendNode::Update(Caver::AnimBlendNode *this, long double a2)
{
  __int64 result; // x0
  int v5; // w21
  float v6; // s0
  float v7; // s0
  float v8; // s0
  char v9; // w20
  unsigned __int8 v10; // w0
  float v11; // s0

  result = *((_QWORD *)this + 2);
  if ( result )
  {
    if ( !*((_QWORD *)this + 3) )
      return 0;
    v5 = *((unsigned __int8 *)this + 45);
    if ( *((_BYTE *)this + 45) )
    {
      if ( !*((_BYTE *)this + 44) )
      {
        v8 = *((float *)this + 8) + (float)(*(float *)&a2 / *((float *)this + 9));
        *((float *)this + 8) = v8;
        if ( v8 <= 1.0 )
          goto LABEL_12;
        *((_DWORD *)this + 8) = 1065353216;
        goto LABEL_11;
      }
      v6 = *((float *)this + 10);
      if ( v6 <= 0.0 )
        v6 = *((float *)this + 9);
      v7 = *((float *)this + 8) - (float)(*(float *)&a2 / v6);
      *((float *)this + 8) = v7;
      if ( v7 < 0.0 )
      {
        *((_DWORD *)this + 8) = 0;
LABEL_11:
        *((_BYTE *)this + 45) = 0;
      }
    }
LABEL_12:
    v9 = (*(__int64 (__fastcall **)(__int64, long double))(*(_QWORD *)result + 16LL))(result, a2);
    v10 = (unsigned __int8)(*(_QWORD *(__fastcall **)(_QWORD *__return_ptr, _QWORD, long double))(**((_QWORD **)this + 3)
                                                                                                + 16LL))(
                             *((_QWORD **)this + 3),
                             *((_QWORD *)this + 3),
                             a2);
    if ( v5 )
      return 1;
    v11 = *((float *)this + 8);
    if ( v9 & 1 | (v11 >= 0.001) )
      return v10 & 1 | (unsigned int)(v11 <= 0.999);
    return 0;
  }
  return result;
}

