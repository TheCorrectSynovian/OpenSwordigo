/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003185B0
 * Mangled: _ZN5Caver5Proto22PhysicsObjectComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::PhysicsObjectComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5710  Caver::Proto::Vector2::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F7CD0  Caver::Proto::Vector2::Vector2(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *   0x0000000000318A38  Caver::Proto::PhysicsObjectComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 135
 *   insn=0x00000000003185C4 string=0x00000000003185C8 "W"
 *   insn=0x00000000003185E0 string=0x00000000003185E4 "h"
 *   insn=0x00000000003185E8 string=0x00000000003185EC """
 *   insn=0x00000000003185EC string=0x00000000003185F0 "\t"
 *   insn=0x00000000003185F4 string=0x00000000003185F8 "!"
 *   insn=0x00000000003185F8 string=0x00000000003185FC ""
 *   insn=0x00000000003185FC string=0x0000000000318600 "a""
 *   insn=0x0000000000318600 string=0x0000000000318604 "h"
 *   insn=0x0000000000318608 string=0x0000000000318624 "(|"
 *   insn=0x0000000000318610 string=0x0000000000318614 "}"
 *   insn=0x0000000000318614 string=0x00000000001F7A40 "0'"
 *   insn=0x0000000000318618 string=0x000000000031861C "a""
 *   insn=0x000000000031861C string=0x0000000000318620 "a"
 *   insn=0x0000000000318624 string=0x0000000000318628 ""
 *   insn=0x0000000000318630 string=0x0000000000318634 "{"
 *   insn=0x0000000000318630 string=0x0000000000318704 "("
 *   insn=0x0000000000318634 string=0x0000000000318638 ""
 *   insn=0x000000000031863C string=0x0000000000318640 "("
 *   insn=0x000000000031863C string=0x0000000000318670 "("
 *   insn=0x000000000031863C string=0x0000000000318680 "("
 *   insn=0x000000000031863C string=0x0000000000318690 "("
 *   insn=0x000000000031863C string=0x00000000003186A0 "("
 *   insn=0x000000000031863C string=0x00000000003186B0 "("
 *   insn=0x000000000031863C string=0x00000000003186C4 "("
 *   insn=0x000000000031863C string=0x00000000003186D4 "("
 *   insn=0x0000000000318640 string=0x0000000000318644 "!"
 *   insn=0x0000000000318644 string=0x0000000000318648 "i"
 *   insn=0x0000000000318648 string=0x000000000031864C "?"
 *   insn=0x0000000000318650 string=0x0000000000318654 "*"
 *   insn=0x0000000000318654 string=0x0000000000318658 "J"
 *   insn=0x0000000000318658 string=0x000000000031865C "J"
 *   insn=0x000000000031865C string=0x0000000000318660 ")"
 *   insn=0x0000000000318664 string=0x0000000000318668 "i"
 *   insn=0x0000000000318668 string=0x000000000031866C "3"
 *   insn=0x0000000000318688 string=0x000000000031868C "m"
 *   insn=0x0000000000318698 string=0x000000000031869C "z"
 *   insn=0x00000000003186BC string=0x00000000003186C0 "+"
 *   insn=0x00000000003186D8 string=0x00000000003186DC "i"
 *   insn=0x00000000003186DC string=0x00000000003186E0 "?"
 *   insn=0x00000000003186E4 string=0x00000000003186E8 "*"
 *   insn=0x00000000003186E8 string=0x00000000003186EC "j"
 *   insn=0x00000000003186EC string=0x00000000003186F0 "J"
 *   insn=0x00000000003186F0 string=0x00000000003186F4 ")"
 *   insn=0x00000000003186F8 string=0x00000000003186FC "i"
 *   insn=0x0000000000318710 string=0x0000000000318714 "o"
 *   insn=0x0000000000318714 string=0x0000000000318718 "`"
 *   insn=0x0000000000318714 string=0x00000000001FD8D0 "0'"
 *   insn=0x0000000000318724 string=0x0000000000318728 "J"
 *   insn=0x0000000000318728 string=0x000000000031872C "@"
 *   insn=0x0000000000318728 string=0x00000000001F9050 "0'"
 *   insn=0x0000000000318730 string=0x0000000000318734 "i"
 *   insn=0x0000000000318738 string=0x000000000031873C "_"
 *   insn=0x0000000000318744 string=0x0000000000318748 "j"
 *   insn=0x0000000000318748 string=0x000000000031874C "?"
 *   insn=0x0000000000318754 string=0x0000000000318758 "("
 *   insn=0x000000000031875C string=0x0000000000318760 "!"
 *   insn=0x0000000000318760 string=0x0000000000318764 "("
 *   insn=0x0000000000318764 string=0x0000000000318768 "h"
 *   insn=0x000000000031876C string=0x0000000000318770 "H"
 *   insn=0x0000000000318778 string=0x0000000000318790 "h"
 *   insn=0x0000000000318780 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000318784 string=0x0000000000318788 "R}"
 *   insn=0x0000000000318788 string=0x00000000001F7CD0 "0'"
 *   insn=0x0000000000318798 string=0x000000000031879C "\t"
 *   insn=0x00000000003187A0 string=0x00000000003187A4 ")"
 *   insn=0x00000000003187A4 string=0x00000000003187A8 ""
 *   insn=0x00000000003187AC string=0x00000000003187B0 "h"
 *   insn=0x00000000003187B4 string=0x00000000003187C8 "h&G)\n"
 *   insn=0x00000000003187BC string=0x00000000003187C0 "$"
 *   insn=0x00000000003187C8 string=0x00000000003187CC "\n"
 *   insn=0x00000000003187D0 string=0x00000000003187D4 "j:"
 *   insn=0x00000000003187E0 string=0x00000000003187E4 "g"
 *   insn=0x00000000003187F4 string=0x00000000001F5710 "P'"
 *   insn=0x00000000003187F8 string=0x00000000003187FC "h"
 *   insn=0x000000000031880C string=0x0000000000318810 "h:@"
 *   insn=0x0000000000318810 string=0x0000000000318814 ""
 *   insn=0x0000000000318814 string=0x0000000000318818 "K"
 *   insn=0x0000000000318818 string=0x000000000031881C "h:"
 *   insn=0x0000000000318818 string=0x0000000000318820 "h"
 *   insn=0x0000000000318828 string=0x000000000031882C "\t"
 *   insn=0x000000000031882C string=0x0000000000318830 "?u"
 *   insn=0x0000000000318834 string=0x0000000000318838 ""
 *   insn=0x0000000000318838 string=0x000000000031883C "h"
 *   insn=0x0000000000318848 string=0x000000000031884C "@"
 *   insn=0x0000000000318848 string=0x00000000001FA750 "0'"
 *   insn=0x0000000000318858 string=0x000000000031885C "("
 *   insn=0x0000000000318860 string=0x0000000000318864 "h"
 *   insn=0x000000000031886C string=0x0000000000318870 "\t"
 *   insn=0x0000000000318870 string=0x0000000000318874 "?"
 *   insn=0x0000000000318874 string=0x0000000000318878 "a"
 *   insn=0x0000000000318878 string=0x000000000031887C ""
 *   insn=0x000000000031887C string=0x0000000000318880 "h"
 *   insn=0x000000000031888C string=0x0000000000318890 " "
 *   insn=0x000000000031889C string=0x00000000003188A0 "("
 *   insn=0x00000000003188A4 string=0x00000000003188A8 "h"
 *   insn=0x00000000003188B0 string=0x00000000003188B4 "\t"
 *   insn=0x00000000003188B4 string=0x00000000003188B8 "?"
 *   insn=0x00000000003188B8 string=0x00000000003188BC "A"
 *   insn=0x00000000003188BC string=0x00000000003188C0 ""
 *   insn=0x00000000003188C0 string=0x00000000003188C4 "h"
 *   insn=0x00000000003188E0 string=0x00000000003188E4 "("
 *   insn=0x00000000003188E8 string=0x00000000003188EC "h"
 *   insn=0x00000000003188F4 string=0x00000000003188F8 "\t"
 *   insn=0x00000000003188F8 string=0x00000000003188FC "?"
 *   insn=0x00000000003188FC string=0x0000000000318900 "!"
 *   insn=0x0000000000318900 string=0x0000000000318904 ""
 *   insn=0x0000000000318904 string=0x0000000000318908 "h"
 *   insn=0x0000000000318924 string=0x0000000000318928 "("
 *   insn=0x000000000031892C string=0x0000000000318930 "i"
 *   insn=0x0000000000318930 string=0x0000000000318934 "?"
 *   insn=0x0000000000318934 string=0x0000000000318938 "b"
 *   insn=0x0000000000318938 string=0x000000000031893C "*"
 *   insn=0x000000000031893C string=0x0000000000318940 "_"
 *   insn=0x0000000000318944 string=0x0000000000318948 ")"
 *   insn=0x0000000000318948 string=0x000000000031894C "i"
 *   insn=0x000000000031894C string=0x0000000000318950 "?"
 *   insn=0x0000000000318968 string=0x000000000031896C "i"
 *   insn=0x0000000000318970 string=0x0000000000318974 "_"
 *   insn=0x000000000031897C string=0x0000000000318980 "j"
 *   insn=0x0000000000318980 string=0x0000000000318984 "?"
 *   insn=0x000000000031898C string=0x0000000000318990 "("
 *   insn=0x0000000000318994 string=0x0000000000318998 "a"
 *   insn=0x0000000000318998 string=0x000000000031899C "("
 *   insn=0x000000000031899C string=0x00000000003189A0 "h"
 *   insn=0x00000000003189A8 string=0x00000000003189AC "i"
 *   insn=0x00000000003189AC string=0x00000000003189B0 " "
 *   insn=0x00000000003189BC string=0x00000000003189C0 "("
 *   insn=0x00000000003189C4 string=0x00000000003189C8 "h"
 *   insn=0x00000000003189D0 string=0x00000000003189D4 "h.@"
 *   insn=0x00000000003189D4 string=0x00000000003189D8 "h"
 *   insn=0x00000000003189E0 string=0x00000000003189E4 "`"
 *   insn=0x0000000000318A04 string=0x0000000000318A20 ",v"
 *   insn=0x0000000000318A20 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000318A28 string=0x0000000000318A2C "!z"
 *   insn=0x0000000000318A2C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PhysicsObjectComponent::MergePartialFromCodedStream(
        Caver::Proto::PhysicsObjectComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  int v8; // w8
  unsigned __int64 v9; // x8
  char *v10; // x9
  unsigned int v11; // w10
  _BYTE *v12; // x9
  int v13; // w10
  unsigned __int64 v14; // x8
  char *v15; // x9
  unsigned int v16; // w10
  _BYTE *v17; // x9
  int v18; // w11
  Caver::Proto::Vector2 *v19; // x21
  char *v20; // x8
  int v21; // w8
  int v22; // w9
  int v23; // w22
  int v24; // w8
  bool v25; // vf
  int v26; // w8
  _BYTE *v27; // x8
  int v28; // w9
  _BYTE *v29; // x8
  int v30; // w9
  _BYTE *v31; // x8
  int v32; // w9
  _BYTE *v33; // x8
  int v34; // w9
  _BYTE *v35; // x9
  int v36; // w11
  int v37; // w9
  __int64 result; // x0
  unsigned int v39; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v40; // [xsp+8h] [xbp-38h]

  v40 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 2 )
  {
    v5 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v5 >= *((_QWORD *)a2 + 2) || *v5 < 0 )
    {
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
      v6 = TagFallback;
      *((_DWORD *)a2 + 8) = TagFallback;
      if ( !TagFallback )
        return 1;
    }
    else
    {
      v6 = (unsigned __int8)*v5;
      *((_DWORD *)a2 + 8) = v6;
      *((_QWORD *)a2 + 1) = v5 + 1;
      if ( !(_DWORD)v6 )
        return 1;
    }
    switch ( (unsigned int)v6 >> 3 )
    {
      case 1u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_29;
        v10 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v10 >= v9 || *v10 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v39) & 1) == 0 )
            return 0;
          v11 = v39;
          v12 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v11 = (unsigned __int8)*v10;
          v12 = v10 + 1;
          v39 = v11;
          *((_QWORD *)a2 + 1) = v12;
        }
        v18 = *((_DWORD *)this + 12);
        *((_BYTE *)this + 12) = v11 != 0;
        v13 = v18 | 1;
        *((_DWORD *)this + 12) = v18 | 1;
        if ( (unsigned __int64)v12 >= v9 || *v12 != 18 )
          continue;
        *((_QWORD *)a2 + 1) = v12 + 1;
        goto LABEL_37;
      case 2u:
        v8 = v6 & 7;
        if ( v8 != 2 )
          goto LABEL_29;
        v13 = *((_DWORD *)this + 12);
LABEL_37:
        v19 = (Caver::Proto::Vector2 *)*((_QWORD *)this + 2);
        *((_DWORD *)this + 12) = v13 | 2;
        if ( !v19 )
        {
          v19 = (Caver::Proto::Vector2 *)operator new(0x18u);
          Caver::Proto::Vector2::Vector2(v19);
          *((_QWORD *)this + 2) = v19;
        }
        v20 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v20 >= *((_QWORD *)a2 + 2) || *v20 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v39) & 1) == 0 )
            return 0;
        }
        else
        {
          v39 = (unsigned __int8)*v20;
          *((_QWORD *)a2 + 1) = v20 + 1;
        }
        v21 = *((_DWORD *)a2 + 14);
        v22 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v21 + 1;
        if ( v21 >= v22 )
          return 0;
        v23 = google::protobuf::io::CodedInputStream::PushLimit(a2, v39);
        if ( (Caver::Proto::Vector2::MergePartialFromCodedStream(v19, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v23);
        v24 = *((_DWORD *)a2 + 14);
        v25 = __OFSUB__(v24, 1);
        v26 = v24 - 1;
        if ( v26 < 0 == v25 )
          *((_DWORD *)a2 + 14) = v26;
        v27 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v27 >= *((_QWORD *)a2 + 2) || *v27 != 29 )
          continue;
        *((_QWORD *)a2 + 1) = v27 + 1;
LABEL_51:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v39) & 1) == 0 )
          return 0;
        v28 = *((_DWORD *)this + 12);
        *((_DWORD *)this + 6) = v39;
        *((_DWORD *)this + 12) = v28 | 4;
        v29 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v29 >= *((_QWORD *)a2 + 2) || *v29 != 37 )
          continue;
        *((_QWORD *)a2 + 1) = v29 + 1;
LABEL_55:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v39) & 1) == 0 )
          return 0;
        v30 = *((_DWORD *)this + 12);
        *((_DWORD *)this + 7) = v39;
        *((_DWORD *)this + 12) = v30 | 8;
        v31 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v31 >= *((_QWORD *)a2 + 2) || *v31 != 45 )
          continue;
        *((_QWORD *)a2 + 1) = v31 + 1;
LABEL_59:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v39) & 1) == 0 )
          return 0;
        v32 = *((_DWORD *)this + 12);
        *((_DWORD *)this + 8) = v39;
        *((_DWORD *)this + 12) = v32 | 0x10;
        v33 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v33 >= *((_QWORD *)a2 + 2) || *v33 != 53 )
          continue;
        *((_QWORD *)a2 + 1) = v33 + 1;
LABEL_63:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v39) & 1) == 0 )
          return 0;
        v34 = *((_DWORD *)this + 12);
        *((_DWORD *)this + 9) = v39;
        *((_DWORD *)this + 12) = v34 | 0x20;
        v35 = (_BYTE *)*((_QWORD *)a2 + 1);
        v14 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v35 >= v14 || *v35 != 56 )
          continue;
        v15 = v35 + 1;
        *((_QWORD *)a2 + 1) = v15;
        if ( (unsigned __int64)v15 >= v14 )
          goto LABEL_67;
LABEL_26:
        if ( *v15 < 0 )
        {
LABEL_67:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v39) & 1) == 0 )
            return 0;
          v16 = v39;
          v17 = (_BYTE *)*((_QWORD *)a2 + 1);
          v14 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v16 = (unsigned __int8)*v15;
          v17 = v15 + 1;
          v39 = v16;
          *((_QWORD *)a2 + 1) = v17;
        }
        v36 = *((_DWORD *)this + 12);
        *((_BYTE *)this + 40) = v16 != 0;
        *((_DWORD *)this + 12) = v36 | 0x40;
        if ( (unsigned __int64)v17 >= v14 || *v17 != 69 )
          continue;
        *((_QWORD *)a2 + 1) = v17 + 1;
LABEL_72:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v39) & 1) != 0 )
        {
          v37 = *((_DWORD *)this + 12);
          *((_DWORD *)this + 11) = v39;
          *((_DWORD *)this + 12) = v37 | 0x80;
          if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
          {
            result = 1;
            *((_DWORD *)a2 + 8) = 0;
            *((_BYTE *)a2 + 36) = 1;
            return result;
          }
          continue;
        }
        return 0;
      case 3u:
        v8 = v6 & 7;
        if ( v8 == 5 )
          goto LABEL_51;
        goto LABEL_29;
      case 4u:
        v8 = v6 & 7;
        if ( v8 == 5 )
          goto LABEL_55;
        goto LABEL_29;
      case 5u:
        v8 = v6 & 7;
        if ( v8 == 5 )
          goto LABEL_59;
        goto LABEL_29;
      case 6u:
        v8 = v6 & 7;
        if ( v8 == 5 )
          goto LABEL_63;
        goto LABEL_29;
      case 7u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_29;
        v15 = (char *)*((_QWORD *)a2 + 1);
        v14 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v15 < v14 )
          goto LABEL_26;
        goto LABEL_67;
      case 8u:
        v8 = v6 & 7;
        if ( v8 == 5 )
          goto LABEL_72;
        goto LABEL_29;
      default:
        v8 = v6 & 7;
LABEL_29:
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

