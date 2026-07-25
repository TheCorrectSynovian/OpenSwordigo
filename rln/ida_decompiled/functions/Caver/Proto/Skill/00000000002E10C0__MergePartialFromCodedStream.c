/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E10C0
 * Mangled: _ZN5Caver5Proto5Skill27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::Skill::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x0000000000201120  Caver::Proto::Skill::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001F97D0  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 124
 *   insn=0x00000000002E10DC string=0x00000000002E10E0 "U"
 *   insn=0x00000000002E10E0 string=0x00000000002E10E4 "7 "
 *   insn=0x00000000002E10EC string=0x00000000002E10F0 "8 "
 *   insn=0x00000000002E10F0 string=0x00000000002E10F4 "9 "
 *   insn=0x00000000002E10F8 string=0x00000000002E10FC "9"
 *   insn=0x00000000002E1100 string=0x00000000002E1104 "; "
 *   insn=0x00000000002E1104 string=0x00000000002E1108 "{"
 *   insn=0x00000000002E1108 string=0x00000000002E110C "V"
 *   insn=0x00000000002E111C string=0x00000000002E1120 "h"
 *   insn=0x00000000002E1124 string=0x00000000002E1128 """
 *   insn=0x00000000002E1128 string=0x00000000002E112C "\t"
 *   insn=0x00000000002E1130 string=0x00000000002E1134 "!"
 *   insn=0x00000000002E1134 string=0x00000000002E1138 ""
 *   insn=0x00000000002E1138 string=0x00000000002E113C "a""
 *   insn=0x00000000002E113C string=0x00000000002E1140 "h"
 *   insn=0x00000000002E1144 string=0x00000000002E1160 "(|"
 *   insn=0x00000000002E114C string=0x00000000002E1150 "<Z"
 *   insn=0x00000000002E1150 string=0x00000000001F7A40 "0'"
 *   insn=0x00000000002E1154 string=0x00000000002E1158 "a""
 *   insn=0x00000000002E1158 string=0x00000000002E115C "A"
 *   insn=0x00000000002E1160 string=0x00000000002E1164 ""
 *   insn=0x00000000002E116C string=0x00000000002E1424 "("
 *   insn=0x00000000002E1170 string=0x00000000002E1174 ""
 *   insn=0x00000000002E1178 string=0x00000000002E117C "("
 *   insn=0x00000000002E1178 string=0x00000000002E11E4 "("
 *   insn=0x00000000002E1178 string=0x00000000002E1214 "("
 *   insn=0x00000000002E1178 string=0x00000000002E1224 "("
 *   insn=0x00000000002E1178 string=0x00000000002E1254 "("
 *   insn=0x00000000002E1178 string=0x00000000002E13D4 "("
 *   insn=0x00000000002E1180 string=0x00000000002E1184 "!"
 *   insn=0x00000000002E118C string=0x00000000002E1190 ""
 *   insn=0x00000000002E1190 string=0x00000000002E1194 "?"
 *   insn=0x00000000002E11A4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002E11A8 string=0x00000000002E11AC ":"
 *   insn=0x00000000002E11B8 string=0x00000000001F97D0 "0'"
 *   insn=0x00000000002E11BC string=0x00000000002E11C0 "h"
 *   insn=0x00000000002E11C8 string=0x00000000002E11CC "\t"
 *   insn=0x00000000002E11CC string=0x00000000002E11D0 "?I"
 *   insn=0x00000000002E11D0 string=0x00000000002E11D4 "a"
 *   insn=0x00000000002E11D4 string=0x00000000002E11D8 ""
 *   insn=0x00000000002E11D8 string=0x00000000002E11DC "h"
 *   insn=0x00000000002E11DC string=0x00000000002E11E0 " "
 *   insn=0x00000000002E11E8 string=0x00000000002E11EC "i"
 *   insn=0x00000000002E11EC string=0x00000000002E11F0 "?"
 *   insn=0x00000000002E11F4 string=0x00000000002E11F8 "*"
 *   insn=0x00000000002E11FC string=0x00000000002E1200 "J"
 *   insn=0x00000000002E1200 string=0x00000000002E1204 ")"
 *   insn=0x00000000002E1208 string=0x00000000002E120C "i"
 *   insn=0x00000000002E120C string=0x00000000002E1210 "]"
 *   insn=0x00000000002E1228 string=0x00000000002E122C "i"
 *   insn=0x00000000002E122C string=0x00000000002E1230 "?"
 *   insn=0x00000000002E1230 string=0x00000000002E1234 "b"
 *   insn=0x00000000002E1234 string=0x00000000002E1238 "*"
 *   insn=0x00000000002E1238 string=0x00000000002E123C "*"
 *   insn=0x00000000002E123C string=0x00000000002E1240 "J"
 *   insn=0x00000000002E1240 string=0x00000000002E1244 ")"
 *   insn=0x00000000002E1248 string=0x00000000002E124C "i"
 *   insn=0x00000000002E124C string=0x00000000002E1250 ":"
 *   insn=0x00000000002E1258 string=0x00000000002E125C "a"
 *   insn=0x00000000002E1264 string=0x00000000002E1268 ""
 *   insn=0x00000000002E1268 string=0x00000000002E126C "?"
 *   insn=0x00000000002E1280 string=0x00000000002E1284 "c"
 *   insn=0x00000000002E1284 string=0x00000000002E1288 "("
 *   insn=0x00000000002E1290 string=0x00000000002E1294 "Oa"
 *   insn=0x00000000002E1294 string=0x00000000002E1298 " "
 *   insn=0x00000000002E1298 string=0x00000000002E129C "h"
 *   insn=0x00000000002E12A4 string=0x00000000002E12A8 "\t"
 *   insn=0x00000000002E12A8 string=0x00000000002E12AC "?i"
 *   insn=0x00000000002E12B0 string=0x00000000002E12B4 ""
 *   insn=0x00000000002E12B4 string=0x00000000002E12B8 "h"
 *   insn=0x00000000002E12C0 string=0x00000000002E12C4 ""
 *   insn=0x00000000002E12C4 string=0x00000000002E12C8 "?"
 *   insn=0x00000000002E12DC string=0x00000000002E12E0 "c"
 *   insn=0x00000000002E12E0 string=0x00000000002E12E4 "("
 *   insn=0x00000000002E12EC string=0x00000000002E12F0 "8a"
 *   insn=0x00000000002E12F0 string=0x00000000002E12F4 "@\n"
 *   insn=0x00000000002E12F4 string=0x00000000002E12F8 "i"
 *   insn=0x00000000002E12F8 string=0x00000000002E12FC "?"
 *   insn=0x00000000002E1300 string=0x00000000002E1304 "*"
 *   insn=0x00000000002E1304 string=0x00000000002E1308 "_"
 *   insn=0x00000000002E130C string=0x00000000002E1310 ")"
 *   insn=0x00000000002E1310 string=0x00000000002E1314 "i"
 *   insn=0x00000000002E1314 string=0x00000000002E1318 "?"
 *   insn=0x00000000002E1324 string=0x00000000002E1328 "J_"
 *   insn=0x00000000002E1328 string=0x00000000001F9050 "0'"
 *   insn=0x00000000002E1330 string=0x00000000002E1334 "i"
 *   insn=0x00000000002E133C string=0x00000000002E1340 "?"
 *   insn=0x00000000002E1340 string=0x00000000002E1344 "j"
 *   insn=0x00000000002E134C string=0x00000000002E1350 "*"
 *   insn=0x00000000002E1350 string=0x00000000002E1354 "_"
 *   insn=0x00000000002E1354 string=0x00000000002E1358 "A"
 *   insn=0x00000000002E1358 string=0x00000000002E135C ")"
 *   insn=0x00000000002E135C string=0x00000000002E1360 "i"
 *   insn=0x00000000002E1360 string=0x00000000002E1364 "?"
 *   insn=0x00000000002E1370 string=0x00000000002E1374 "7_"
 *   insn=0x00000000002E1374 string=0x00000000002E1378 " "
 *   insn=0x00000000002E137C string=0x00000000002E1380 "i"
 *   insn=0x00000000002E1388 string=0x00000000002E138C "?"
 *   insn=0x00000000002E138C string=0x00000000002E1390 "j"
 *   insn=0x00000000002E1394 string=0x00000000002E1398 "B"
 *   insn=0x00000000002E1398 string=0x00000000002E139C "*"
 *   insn=0x00000000002E139C string=0x00000000002E13A0 "_"
 *   insn=0x00000000002E13A4 string=0x00000000002E13A8 ")"
 *   insn=0x00000000002E13A8 string=0x00000000002E13AC "i"
 *   insn=0x00000000002E13AC string=0x00000000002E13B0 "?"
 *   insn=0x00000000002E13B4 string=0x00000000002E13B8 "*"
 *   insn=0x00000000002E13B8 string=0x00000000002E13BC "j"
 *   insn=0x00000000002E13BC string=0x00000000002E13C0 "J"
 *   insn=0x00000000002E13C0 string=0x00000000002E13C4 ")"
 *   insn=0x00000000002E13C8 string=0x00000000002E13CC "i"
 *   insn=0x00000000002E13D8 string=0x00000000002E13DC "i"
 *   insn=0x00000000002E13DC string=0x00000000002E13E0 "?"
 *   insn=0x00000000002E13F0 string=0x00000000002E13F4 "@"
 *   insn=0x00000000002E13F8 string=0x00000000002E13FC "i"
 *   insn=0x00000000002E1404 string=0x00000000002E1408 "?"
 *   insn=0x00000000002E1408 string=0x00000000002E140C "j"
 *   insn=0x00000000002E1410 string=0x00000000002E1414 "a"
 *   insn=0x00000000002E1414 string=0x00000000002E1418 "h.@"
 *   insn=0x00000000002E1418 string=0x00000000002E141C "("
 *   insn=0x00000000002E1430 string=0x00000000002E1434 "'q"
 *   insn=0x00000000002E1434 string=0x00000000002E1438 "@"
 *   insn=0x00000000002E1434 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000002E147C string=0x00000000002E1480 "`"
 *   insn=0x00000000002E1488 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Skill::MergePartialFromCodedStream(
        Caver::Proto::Skill *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  int v8; // w8
  __int64 *v9; // x1
  _QWORD *v10; // x0
  _BYTE *v11; // x8
  unsigned __int64 v12; // x8
  char *v13; // x9
  unsigned int v14; // w10
  _BYTE *v15; // x9
  char *v16; // x9
  unsigned int v17; // w10
  _BYTE *v18; // x9
  __int64 *v19; // x1
  _QWORD *v20; // x0
  _BYTE *v21; // x8
  __int64 *v22; // x1
  _QWORD *v23; // x0
  _BYTE *v24; // x9
  int v25; // w11
  int v26; // w11
  char *v27; // x9
  unsigned int v28; // w10
  unsigned __int8 *v29; // x9
  int v30; // w11
  __int64 result; // x0
  unsigned int v32; // [xsp+4h] [xbp-5Ch] BYREF
  __int64 v33; // [xsp+8h] [xbp-58h]

  v33 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 1 )
  {
    v5 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v5 < *((_QWORD *)a2 + 2) && (*v5 & 0x80000000) == 0 )
    {
      v6 = (unsigned __int8)*v5;
      *((_DWORD *)a2 + 8) = v6;
      *((_QWORD *)a2 + 1) = v5 + 1;
      if ( !(_DWORD)v6 )
        return 1;
      goto LABEL_7;
    }
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
    v6 = TagFallback;
    *((_DWORD *)a2 + 8) = TagFallback;
    if ( !TagFallback )
      return 1;
LABEL_7:
    switch ( (unsigned int)v6 >> 3 )
    {
      case 1u:
        v8 = v6 & 7;
        if ( v8 != 2 )
          goto LABEL_58;
        v9 = (__int64 *)*((_QWORD *)this + 2);
        *((_DWORD *)this + 13) |= 1u;
        if ( v9 == &Caver::Proto::Skill::_default_name_ )
        {
          v10 = (_QWORD *)operator new(8u);
          *v10 = &byte_6FD2F8;
          *((_QWORD *)this + 2) = v10;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v11 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v11 >= *((_QWORD *)a2 + 2) || *v11 != 18 )
          continue;
        *((_QWORD *)a2 + 1) = v11 + 1;
        goto LABEL_26;
      case 2u:
        v8 = v6 & 7;
        if ( v8 != 2 )
          goto LABEL_58;
LABEL_26:
        v19 = (__int64 *)*((_QWORD *)this + 3);
        *((_DWORD *)this + 13) |= 2u;
        if ( v19 == &Caver::Proto::Skill::_default_title_ )
        {
          v20 = (_QWORD *)operator new(8u);
          *v20 = &byte_6FD2F8;
          *((_QWORD *)this + 3) = v20;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v21 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v21 >= *((_QWORD *)a2 + 2) || *v21 != 26 )
          continue;
        *((_QWORD *)a2 + 1) = v21 + 1;
LABEL_32:
        v22 = (__int64 *)*((_QWORD *)this + 4);
        *((_DWORD *)this + 13) |= 4u;
        if ( v22 == &Caver::Proto::Skill::_default_description_ )
        {
          v23 = (_QWORD *)operator new(8u);
          *v23 = &byte_6FD2F8;
          *((_QWORD *)this + 4) = v23;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v24 = (_BYTE *)*((_QWORD *)a2 + 1);
        v12 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v24 >= v12 || *v24 != 32 )
          continue;
        v16 = v24 + 1;
        *((_QWORD *)a2 + 1) = v16;
        if ( (unsigned __int64)v16 >= v12 )
          goto LABEL_38;
LABEL_23:
        if ( *v16 < 0 )
        {
LABEL_38:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v32) & 1) == 0 )
            return 0;
          v17 = v32;
          v18 = (_BYTE *)*((_QWORD *)a2 + 1);
          v12 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v17 = (unsigned __int8)*v16;
          v18 = v16 + 1;
          v32 = v17;
          *((_QWORD *)a2 + 1) = v18;
        }
        v25 = *((_DWORD *)this + 13);
        *((_DWORD *)this + 10) = v17;
        *((_DWORD *)this + 13) = v25 | 8;
        if ( (unsigned __int64)v18 >= v12 || *v18 != 40 )
          continue;
        v13 = v18 + 1;
        *((_QWORD *)a2 + 1) = v13;
        if ( (unsigned __int64)v13 >= v12 )
          goto LABEL_43;
LABEL_17:
        if ( *v13 < 0 )
        {
LABEL_43:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v32) & 1) == 0 )
            return 0;
          v14 = v32;
          v15 = (_BYTE *)*((_QWORD *)a2 + 1);
          v12 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v14 = (unsigned __int8)*v13;
          v15 = v13 + 1;
          v32 = v14;
          *((_QWORD *)a2 + 1) = v15;
        }
        v26 = *((_DWORD *)this + 13);
        *((_DWORD *)this + 11) = v14;
        *((_DWORD *)this + 13) = v26 | 0x10;
        if ( (unsigned __int64)v15 >= v12 || *v15 != 48 )
          continue;
        v27 = v15 + 1;
        *((_QWORD *)a2 + 1) = v27;
        if ( (unsigned __int64)v27 >= v12 )
          goto LABEL_52;
LABEL_48:
        if ( *v27 < 0 )
        {
LABEL_52:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v32) & 1) == 0 )
            return 0;
          v28 = v32;
          v29 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
          v12 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v28 = (unsigned __int8)*v27;
          v29 = (unsigned __int8 *)(v27 + 1);
          v32 = v28;
          *((_QWORD *)a2 + 1) = v29;
        }
        v30 = *((_DWORD *)this + 13);
        *((_DWORD *)this + 12) = v28;
        *((_DWORD *)this + 13) = v30 | 0x20;
        if ( v29 == (unsigned __int8 *)v12 && *((_DWORD *)a2 + 11) )
        {
          result = 1;
          *((_DWORD *)a2 + 8) = 0;
          *((_BYTE *)a2 + 36) = 1;
          return result;
        }
        break;
      case 3u:
        v8 = v6 & 7;
        if ( v8 != 2 )
          goto LABEL_58;
        goto LABEL_32;
      case 4u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_58;
        v16 = (char *)*((_QWORD *)a2 + 1);
        v12 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v16 < v12 )
          goto LABEL_23;
        goto LABEL_38;
      case 5u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_58;
        v13 = (char *)*((_QWORD *)a2 + 1);
        v12 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v13 < v12 )
          goto LABEL_17;
        goto LABEL_43;
      case 6u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_58;
        v27 = (char *)*((_QWORD *)a2 + 1);
        v12 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v27 >= v12 )
          goto LABEL_52;
        goto LABEL_48;
      default:
        v8 = v6 & 7;
LABEL_58:
        if ( v8 == 4 )
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

