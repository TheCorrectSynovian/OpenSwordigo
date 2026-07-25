/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000308AEC
 * Mangled: _ZN5Caver5Proto28GroundMeshGeneratorComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::GroundMeshGeneratorComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 171
 *   insn=0x0000000000308AFC string=0x0000000000308B00 "U"
 *   insn=0x0000000000308B18 string=0x0000000000308B1C "7"
 *   insn=0x0000000000308B1C string=0x0000000000308FF8 "h"
 *   insn=0x0000000000308B24 string=0x00000000001F7A40 "0'"
 *   insn=0x0000000000308B28 string=0x0000000000308B2C "a""
 *   insn=0x0000000000308B30 string=0x0000000000308B34 "(|"
 *   insn=0x0000000000308B34 string=0x0000000000308B38 ""
 *   insn=0x0000000000308B40 string=0x0000000000308DFC "("
 *   insn=0x0000000000308B44 string=0x0000000000308B48 ""
 *   insn=0x0000000000308B4C string=0x0000000000308B50 "("
 *   insn=0x0000000000308B4C string=0x0000000000308B80 "("
 *   insn=0x0000000000308B4C string=0x0000000000308BB0 "("
 *   insn=0x0000000000308B4C string=0x0000000000308BC0 "("
 *   insn=0x0000000000308B4C string=0x0000000000308BF0 "("
 *   insn=0x0000000000308B4C string=0x0000000000308C20 "("
 *   insn=0x0000000000308B4C string=0x0000000000308C30 "("
 *   insn=0x0000000000308B4C string=0x0000000000308C60 "("
 *   insn=0x0000000000308B4C string=0x0000000000308C70 "("
 *   insn=0x0000000000308B4C string=0x0000000000308D1C "("
 *   insn=0x0000000000308B4C string=0x0000000000308DB4 "("
 *   insn=0x0000000000308B50 string=0x0000000000308B54 "a"
 *   insn=0x0000000000308B54 string=0x0000000000308B58 "i"
 *   insn=0x0000000000308B58 string=0x0000000000308B5C "?"
 *   insn=0x0000000000308B60 string=0x0000000000308B64 "*"
 *   insn=0x0000000000308B68 string=0x0000000000308B6C "J"
 *   insn=0x0000000000308B6C string=0x0000000000308B70 ")"
 *   insn=0x0000000000308B74 string=0x0000000000308B78 "i"
 *   insn=0x0000000000308B84 string=0x0000000000308B88 "i"
 *   insn=0x0000000000308B88 string=0x0000000000308B8C "?"
 *   insn=0x0000000000308B90 string=0x0000000000308B94 "*"
 *   insn=0x0000000000308B98 string=0x0000000000308B9C "J"
 *   insn=0x0000000000308B9C string=0x0000000000308BA0 ")"
 *   insn=0x0000000000308BA4 string=0x0000000000308BA8 "i"
 *   insn=0x0000000000308BB4 string=0x0000000000308BB8 "A"
 *   insn=0x0000000000308BB8 string=0x0000000000308BBC "l"
 *   insn=0x0000000000308BC4 string=0x0000000000308BC8 "i"
 *   insn=0x0000000000308BC8 string=0x0000000000308BCC "?"
 *   insn=0x0000000000308BD0 string=0x0000000000308BD4 "*"
 *   insn=0x0000000000308BD8 string=0x0000000000308BDC "J"
 *   insn=0x0000000000308BDC string=0x0000000000308BE0 ")"
 *   insn=0x0000000000308BE4 string=0x0000000000308BE8 "i"
 *   insn=0x0000000000308BF0 string=0x0000000000308BF4 "a"
 *   insn=0x0000000000308BF4 string=0x0000000000308BF8 "i"
 *   insn=0x0000000000308BF8 string=0x0000000000308BFC "?"
 *   insn=0x0000000000308C00 string=0x0000000000308C04 "*"
 *   insn=0x0000000000308C08 string=0x0000000000308C0C "J"
 *   insn=0x0000000000308C0C string=0x0000000000308C10 ")"
 *   insn=0x0000000000308C14 string=0x0000000000308C18 "i"
 *   insn=0x0000000000308C28 string=0x0000000000308C2C "*"
 *   insn=0x0000000000308C30 string=0x0000000000308C34 "a"
 *   insn=0x0000000000308C34 string=0x0000000000308C38 "i"
 *   insn=0x0000000000308C38 string=0x0000000000308C3C "?"
 *   insn=0x0000000000308C3C string=0x0000000000308C40 """
 *   insn=0x0000000000308C40 string=0x0000000000308C44 "*"
 *   insn=0x0000000000308C48 string=0x0000000000308C4C "J"
 *   insn=0x0000000000308C4C string=0x0000000000308C50 ")"
 *   insn=0x0000000000308C54 string=0x0000000000308C58 "i"
 *   insn=0x0000000000308C70 string=0x0000000000308C74 "a"
 *   insn=0x0000000000308C74 string=0x0000000000308C78 "h"
 *   insn=0x0000000000308C80 string=0x0000000000308C84 "\t"
 *   insn=0x0000000000308C88 string=0x0000000000308C8C ")"
 *   insn=0x0000000000308C8C string=0x0000000000308C90 ""
 *   insn=0x0000000000308C94 string=0x0000000000308C98 "h"
 *   insn=0x0000000000308C98 string=0x0000000000308C9C "?"
 *   insn=0x0000000000308CA0 string=0x0000000000308CB4 "h"
 *   insn=0x0000000000308CA8 string=0x0000000000308CAC ""
 *   insn=0x0000000000308CBC string=0x0000000000308CC0 "\t"
 *   insn=0x0000000000308CC0 string=0x0000000000308CC4 "?"
 *   insn=0x0000000000308CC8 string=0x0000000000308CCC ""
 *   insn=0x0000000000308CCC string=0x0000000000308CD0 "h"
 *   insn=0x0000000000308CDC string=0x0000000000308CE0 "@"
 *   insn=0x0000000000308CDC string=0x00000000001FA750 "0'"
 *   insn=0x0000000000308CEC string=0x0000000000308CF0 "("
 *   insn=0x0000000000308CF4 string=0x0000000000308CF8 "h"
 *   insn=0x0000000000308D00 string=0x0000000000308D04 "\t"
 *   insn=0x0000000000308D04 string=0x0000000000308D08 "?5"
 *   insn=0x0000000000308D08 string=0x0000000000308D0C "a"
 *   insn=0x0000000000308D0C string=0x0000000000308D10 ""
 *   insn=0x0000000000308D10 string=0x0000000000308D14 "h"
 *   insn=0x0000000000308D40 string=0x0000000000308D44 "("
 *   insn=0x0000000000308D48 string=0x0000000000308D4C "h"
 *   insn=0x0000000000308D50 string=0x0000000000308D54 """
 *   insn=0x0000000000308D54 string=0x0000000000308D58 "\t"
 *   insn=0x0000000000308D58 string=0x0000000000308D5C "?U"
 *   insn=0x0000000000308D60 string=0x0000000000308D64 ""
 *   insn=0x0000000000308D64 string=0x0000000000308D68 "h"
 *   insn=0x0000000000308D70 string=0x0000000000308D74 "w"
 *   insn=0x0000000000308D84 string=0x0000000000308D88 "("
 *   insn=0x0000000000308D8C string=0x0000000000308D90 "h"
 *   insn=0x0000000000308D98 string=0x0000000000308D9C "\t"
 *   insn=0x0000000000308D9C string=0x0000000000308DA0 "?u"
 *   insn=0x0000000000308DA4 string=0x0000000000308DA8 ""
 *   insn=0x0000000000308DA8 string=0x0000000000308DAC "h"
 *   insn=0x0000000000308DB8 string=0x0000000000308DBC "!"
 *   insn=0x0000000000308DC4 string=0x0000000000308DC8 "b"
 *   insn=0x0000000000308DD8 string=0x0000000000308DDC "("
 *   insn=0x0000000000308DE0 string=0x0000000000308DE4 "h"
 *   insn=0x0000000000308DE8 string=0x0000000000308DEC "a"
 *   insn=0x0000000000308DEC string=0x0000000000308DF0 "h.@"
 *   insn=0x0000000000308DF0 string=0x0000000000308DF4 "("
 *   insn=0x0000000000308E0C string=0x0000000000308E10 "@"
 *   insn=0x0000000000308E0C string=0x00000000001FD8D0 "0'"
 *   insn=0x0000000000308E20 string=0x0000000000308E24 " "
 *   insn=0x0000000000308E20 string=0x00000000001F9050 "0'"
 *   insn=0x0000000000308E28 string=0x0000000000308E2C "i"
 *   insn=0x0000000000308E34 string=0x0000000000308E38 "?"
 *   insn=0x0000000000308E38 string=0x0000000000308E3C "j"
 *   insn=0x0000000000308E44 string=0x0000000000308E48 "*"
 *   insn=0x0000000000308E48 string=0x0000000000308E4C "_A"
 *   insn=0x0000000000308E4C string=0x0000000000308E50 "A"
 *   insn=0x0000000000308E50 string=0x0000000000308E54 ")"
 *   insn=0x0000000000308E54 string=0x0000000000308E58 "i"
 *   insn=0x0000000000308E58 string=0x0000000000308E5C "?"
 *   insn=0x0000000000308E5C string=0x0000000000308E60 "#"
 *   insn=0x0000000000308E68 string=0x0000000000308E6C "y"
 *   insn=0x0000000000308E74 string=0x0000000000308E78 "i"
 *   insn=0x0000000000308E80 string=0x0000000000308E84 "?"
 *   insn=0x0000000000308E84 string=0x0000000000308E88 "j"
 *   insn=0x0000000000308E8C string=0x0000000000308E90 "B"
 *   insn=0x0000000000308E90 string=0x0000000000308E94 "*"
 *   insn=0x0000000000308E94 string=0x0000000000308E98 "_a"
 *   insn=0x0000000000308E9C string=0x0000000000308EA0 ")"
 *   insn=0x0000000000308EA0 string=0x0000000000308EA4 "i"
 *   insn=0x0000000000308EA4 string=0x0000000000308EA8 "?"
 *   insn=0x0000000000308EA8 string=0x0000000000308EAC "C"
 *   insn=0x0000000000308EB4 string=0x0000000000308EB8 "f"
 *   insn=0x0000000000308EB8 string=0x0000000000308EBC "`"
 *   insn=0x0000000000308EC0 string=0x0000000000308EC4 "i"
 *   insn=0x0000000000308ECC string=0x0000000000308ED0 "?"
 *   insn=0x0000000000308ED0 string=0x0000000000308ED4 "j"
 *   insn=0x0000000000308EDC string=0x0000000000308EE0 "*"
 *   insn=0x0000000000308EE0 string=0x0000000000308EE4 "_"
 *   insn=0x0000000000308EE8 string=0x0000000000308EEC ")"
 *   insn=0x0000000000308EEC string=0x0000000000308EF0 "i"
 *   insn=0x0000000000308EF0 string=0x0000000000308EF4 "?"
 *   insn=0x0000000000308EF4 string=0x0000000000308EF8 "c"
 *   insn=0x0000000000308F00 string=0x0000000000308F04 "S"
 *   insn=0x0000000000308F0C string=0x0000000000308F10 "i"
 *   insn=0x0000000000308F18 string=0x0000000000308F1C "?"
 *   insn=0x0000000000308F1C string=0x0000000000308F20 "j"
 *   insn=0x0000000000308F28 string=0x0000000000308F2C "*"
 *   insn=0x0000000000308F2C string=0x0000000000308F30 "_"
 *   insn=0x0000000000308F30 string=0x0000000000308F34 "!"
 *   insn=0x0000000000308F34 string=0x0000000000308F38 ")"
 *   insn=0x0000000000308F38 string=0x0000000000308F3C "i"
 *   insn=0x0000000000308F3C string=0x0000000000308F40 "?"
 *   insn=0x0000000000308F4C string=0x0000000000308F50 "@"
 *   insn=0x0000000000308F58 string=0x0000000000308F5C "i"
 *   insn=0x0000000000308F64 string=0x0000000000308F68 "?"
 *   insn=0x0000000000308F68 string=0x0000000000308F6C "j"
 *   insn=0x0000000000308F70 string=0x0000000000308F74 """
 *   insn=0x0000000000308F74 string=0x0000000000308F78 "("
 *   insn=0x0000000000308F80 string=0x0000000000308F84 "("
 *   insn=0x0000000000308F84 string=0x0000000000308F88 "h"
 *   insn=0x0000000000308FA4 string=0x0000000000308FA8 "("
 *   insn=0x0000000000308FAC string=0x0000000000308FB0 "h"
 *   insn=0x0000000000308FB8 string=0x0000000000308FBC "\n"
 *   insn=0x0000000000308FBC string=0x0000000000308FC0 "_"
 *   insn=0x0000000000308FC4 string=0x0000000000308FC8 ""
 *   insn=0x0000000000308FC8 string=0x0000000000308FCC "h"
 *   insn=0x0000000000308FE0 string=0x0000000000308FE4 " "
 *   insn=0x0000000000308FE8 string=0x0000000000308FEC "?"
 *   insn=0x0000000000308FF0 string=0x0000000000308FF4 "0"
 *   insn=0x0000000000309000 string=0x0000000000309004 "\t"
 *   insn=0x0000000000309008 string=0x000000000030900C "!"
 *   insn=0x000000000030900C string=0x0000000000309010 ""
 *   insn=0x0000000000309010 string=0x0000000000309014 "a""
 *   insn=0x0000000000309014 string=0x0000000000309018 "h"
 *   insn=0x0000000000309034 string=0x0000000000309038 "A"
 *   insn=0x0000000000309054 string=0x0000000000309058 "`"
 *   insn=0x0000000000309060 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GroundMeshGeneratorComponent::MergePartialFromCodedStream(
        Caver::Proto::GroundMeshGeneratorComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  unsigned int TagFallback; // w0
  unsigned __int64 v6; // x1
  int v7; // w8
  unsigned __int64 v8; // x8
  char *v9; // x9
  unsigned int v10; // w10
  _BYTE *v11; // x9
  char *v12; // x9
  unsigned int v13; // w10
  _BYTE *v14; // x9
  char *v15; // x9
  unsigned int v16; // w10
  _BYTE *v17; // x9
  char *v18; // x9
  unsigned int v19; // w10
  _BYTE *v20; // x9
  char *v21; // x9
  unsigned int v22; // w10
  _BYTE *v23; // x9
  char *v24; // x8
  unsigned int v25; // w9
  int v26; // w8
  _BYTE *v27; // x8
  int v28; // w9
  _BYTE *v29; // x8
  int v30; // w9
  _BYTE *v31; // x8
  int v32; // w9
  _BYTE *v33; // x8
  int v34; // w9
  int v35; // w11
  int v36; // w11
  int v37; // w11
  int v38; // w11
  int v39; // w11
  int v40; // w9
  _BYTE *v41; // x8
  unsigned __int64 v42; // x9
  char *v43; // x8
  __int64 result; // x0
  unsigned int v45; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v46; // [xsp+8h] [xbp-28h]

  v46 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 2 )
  {
    v43 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v43 >= *((_QWORD *)a2 + 2) || *v43 < 0 )
    {
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
      v6 = TagFallback;
      *((_DWORD *)a2 + 8) = TagFallback;
      if ( !TagFallback )
        return 1;
    }
    else
    {
      v6 = (unsigned __int8)*v43;
      *((_DWORD *)a2 + 8) = v6;
      *((_QWORD *)a2 + 1) = v43 + 1;
      if ( !(_DWORD)v6 )
        return 1;
    }
    switch ( (unsigned int)v6 >> 3 )
    {
      case 1u:
        v7 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_57;
        v9 = (char *)*((_QWORD *)a2 + 1);
        v8 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v9 >= v8 || *v9 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v45) & 1) == 0 )
            return 0;
          v10 = v45;
          v11 = (_BYTE *)*((_QWORD *)a2 + 1);
          v8 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v10 = (unsigned __int8)*v9;
          v11 = v9 + 1;
          v45 = v10;
          *((_QWORD *)a2 + 1) = v11;
        }
        v35 = *((_DWORD *)this + 14);
        *((_DWORD *)this + 3) = v10;
        *((_DWORD *)this + 14) = v35 | 1;
        if ( (unsigned __int64)v11 >= v8 || *v11 != 16 )
          continue;
        v21 = v11 + 1;
        *((_QWORD *)a2 + 1) = v21;
        if ( (unsigned __int64)v21 < v8 )
          goto LABEL_26;
        goto LABEL_65;
      case 2u:
        v7 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_57;
        v21 = (char *)*((_QWORD *)a2 + 1);
        v8 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v21 >= v8 )
          goto LABEL_65;
LABEL_26:
        if ( *v21 < 0 )
        {
LABEL_65:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v45) & 1) == 0 )
            return 0;
          v22 = v45;
          v23 = (_BYTE *)*((_QWORD *)a2 + 1);
          v8 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v22 = (unsigned __int8)*v21;
          v23 = v21 + 1;
          v45 = v22;
          *((_QWORD *)a2 + 1) = v23;
        }
        v36 = *((_DWORD *)this + 14);
        *((_DWORD *)this + 4) = v22;
        *((_DWORD *)this + 14) = v36 | 2;
        if ( (unsigned __int64)v23 >= v8 || *v23 != 24 )
          continue;
        v15 = v23 + 1;
        *((_QWORD *)a2 + 1) = v15;
        if ( (unsigned __int64)v15 >= v8 )
          goto LABEL_70;
LABEL_16:
        if ( *v15 < 0 )
        {
LABEL_70:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v45) & 1) == 0 )
            return 0;
          v16 = v45;
          v17 = (_BYTE *)*((_QWORD *)a2 + 1);
          v8 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v16 = (unsigned __int8)*v15;
          v17 = v15 + 1;
          v45 = v16;
          *((_QWORD *)a2 + 1) = v17;
        }
        v37 = *((_DWORD *)this + 14);
        *((_DWORD *)this + 5) = v16;
        *((_DWORD *)this + 14) = v37 | 4;
        if ( (unsigned __int64)v17 >= v8 || *v17 != 32 )
          continue;
        v18 = v17 + 1;
        *((_QWORD *)a2 + 1) = v18;
        if ( (unsigned __int64)v18 >= v8 )
          goto LABEL_75;
LABEL_20:
        if ( *v18 < 0 )
        {
LABEL_75:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v45) & 1) == 0 )
            return 0;
          v19 = v45;
          v20 = (_BYTE *)*((_QWORD *)a2 + 1);
          v8 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v19 = (unsigned __int8)*v18;
          v20 = v18 + 1;
          v45 = v19;
          *((_QWORD *)a2 + 1) = v20;
        }
        v38 = *((_DWORD *)this + 14);
        *((_DWORD *)this + 6) = v19;
        *((_DWORD *)this + 14) = v38 | 8;
        if ( (unsigned __int64)v20 >= v8 || *v20 != 40 )
          continue;
        v12 = v20 + 1;
        *((_QWORD *)a2 + 1) = v12;
        if ( (unsigned __int64)v12 >= v8 )
          goto LABEL_80;
LABEL_10:
        if ( *v12 < 0 )
        {
LABEL_80:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v45) & 1) == 0 )
            return 0;
          v13 = v45;
          v14 = (_BYTE *)*((_QWORD *)a2 + 1);
          v8 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v13 = (unsigned __int8)*v12;
          v14 = v12 + 1;
          v45 = v13;
          *((_QWORD *)a2 + 1) = v14;
        }
        v39 = *((_DWORD *)this + 14);
        *((_DWORD *)this + 7) = v13;
        *((_DWORD *)this + 14) = v39 | 0x10;
        if ( (unsigned __int64)v14 >= v8 || *v14 != 53 )
          continue;
        *((_QWORD *)a2 + 1) = v14 + 1;
LABEL_85:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v45) & 1) == 0 )
          return 0;
        v40 = *((_DWORD *)this + 14);
        *((_DWORD *)this + 8) = v45;
        *((_DWORD *)this + 14) = v40 | 0x20;
        v41 = (_BYTE *)*((_QWORD *)a2 + 1);
        v42 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v41 >= v42 || *v41 != 56 )
          continue;
        v24 = v41 + 1;
        *((_QWORD *)a2 + 1) = v24;
        if ( (unsigned __int64)v24 >= v42 )
          goto LABEL_89;
LABEL_32:
        if ( (*v24 & 0x80000000) == 0 )
        {
          v25 = (unsigned __int8)*v24;
          v45 = v25;
          *((_QWORD *)a2 + 1) = v24 + 1;
          if ( v25 > 1 )
            goto LABEL_35;
LABEL_34:
          v26 = *((_DWORD *)this + 14);
          *((_DWORD *)this + 9) = v25;
          *((_DWORD *)this + 14) = v26 | 0x40;
          goto LABEL_35;
        }
LABEL_89:
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v45) & 1) == 0 )
          return 0;
        v25 = v45;
        if ( v45 <= 1 )
          goto LABEL_34;
LABEL_35:
        v27 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v27 >= *((_QWORD *)a2 + 2) || *v27 != 69 )
          continue;
        *((_QWORD *)a2 + 1) = v27 + 1;
LABEL_38:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v45) & 1) != 0 )
        {
          v28 = *((_DWORD *)this + 14);
          *((_DWORD *)this + 10) = v45;
          *((_DWORD *)this + 14) = v28 | 0x80;
          v29 = (_BYTE *)*((_QWORD *)a2 + 1);
          if ( (unsigned __int64)v29 < *((_QWORD *)a2 + 2) && *v29 == 77 )
          {
            *((_QWORD *)a2 + 1) = v29 + 1;
LABEL_43:
            if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v45) & 1) == 0 )
              return 0;
            v30 = *((_DWORD *)this + 14);
            *((_DWORD *)this + 11) = v45;
            *((_DWORD *)this + 14) = v30 | 0x100;
            v31 = (_BYTE *)*((_QWORD *)a2 + 1);
            if ( (unsigned __int64)v31 < *((_QWORD *)a2 + 2) && *v31 == 85 )
            {
              *((_QWORD *)a2 + 1) = v31 + 1;
LABEL_47:
              if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v45) & 1) == 0 )
                return 0;
              v32 = *((_DWORD *)this + 14);
              *((_DWORD *)this + 12) = v45;
              *((_DWORD *)this + 14) = v32 | 0x200;
              v33 = (_BYTE *)*((_QWORD *)a2 + 1);
              if ( (unsigned __int64)v33 < *((_QWORD *)a2 + 2) && *v33 == 93 )
              {
                *((_QWORD *)a2 + 1) = v33 + 1;
LABEL_52:
                if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v45) & 1) == 0 )
                  return 0;
                v34 = *((_DWORD *)this + 14);
                *((_DWORD *)this + 13) = v45;
                *((_DWORD *)this + 14) = v34 | 0x400;
                if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) )
                {
                  if ( *((_DWORD *)a2 + 11) )
                  {
                    result = 1;
                    *((_DWORD *)a2 + 8) = 0;
                    *((_BYTE *)a2 + 36) = 1;
                    return result;
                  }
                }
              }
            }
          }
          continue;
        }
        return 0;
      case 3u:
        v7 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_57;
        v15 = (char *)*((_QWORD *)a2 + 1);
        v8 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v15 < v8 )
          goto LABEL_16;
        goto LABEL_70;
      case 4u:
        v7 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_57;
        v18 = (char *)*((_QWORD *)a2 + 1);
        v8 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v18 < v8 )
          goto LABEL_20;
        goto LABEL_75;
      case 5u:
        v7 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_57;
        v12 = (char *)*((_QWORD *)a2 + 1);
        v8 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v12 < v8 )
          goto LABEL_10;
        goto LABEL_80;
      case 6u:
        v7 = v6 & 7;
        if ( v7 == 5 )
          goto LABEL_85;
        goto LABEL_57;
      case 7u:
        v7 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_57;
        v24 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v24 < *((_QWORD *)a2 + 2) )
          goto LABEL_32;
        goto LABEL_89;
      case 8u:
        v7 = v6 & 7;
        if ( v7 == 5 )
          goto LABEL_38;
        goto LABEL_57;
      case 9u:
        v7 = v6 & 7;
        if ( v7 == 5 )
          goto LABEL_43;
        goto LABEL_57;
      case 0xAu:
        v7 = v6 & 7;
        if ( v7 == 5 )
          goto LABEL_47;
        goto LABEL_57;
      case 0xBu:
        v7 = v6 & 7;
        if ( v7 == 5 )
          goto LABEL_52;
        goto LABEL_57;
      default:
        v7 = v6 & 7;
LABEL_57:
        if ( v7 == 4 )
          return 1;
        if ( (google::protobuf::internal::WireFormatLite::SkipField(
                a2,
                (google::protobuf::io::CodedInputStream *)v6,
                a3)
            & 1) == 0 )
          return 0;
        continue;
    }
  }
}

