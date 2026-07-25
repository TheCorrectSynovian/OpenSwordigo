/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000333704
 * Mangled: _ZN5Caver5Proto23MagicExplosionComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::MagicExplosionComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F3F20  Caver::Proto::FloatColor::FloatColor(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x00000000002028F0  Caver::Proto::FloatColor::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *   0x0000000000333A80  Caver::Proto::MagicExplosionComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 103
 *   insn=0x0000000000333718 string=0x000000000033371C "W"
 *   insn=0x0000000000333724 string=0x000000000058B968 ",~"
 *   insn=0x0000000000333734 string=0x0000000000333738 "h"
 *   insn=0x000000000033373C string=0x0000000000333740 """
 *   insn=0x0000000000333740 string=0x0000000000333744 "\t"
 *   insn=0x0000000000333748 string=0x000000000033374C "!"
 *   insn=0x000000000033374C string=0x0000000000333750 ""
 *   insn=0x0000000000333750 string=0x0000000000333754 "a""
 *   insn=0x0000000000333754 string=0x0000000000333758 "h"
 *   insn=0x000000000033375C string=0x0000000000333778 "(|"
 *   insn=0x0000000000333768 string=0x00000000001F7A40 "0'"
 *   insn=0x000000000033376C string=0x0000000000333770 "a""
 *   insn=0x0000000000333778 string=0x000000000033377C ""
 *   insn=0x0000000000333780 string=0x0000000000333784 "("
 *   insn=0x0000000000333784 string=0x0000000000333788 "{"
 *   insn=0x0000000000333784 string=0x0000000000333828 "("
 *   insn=0x0000000000333788 string=0x000000000033378C ""
 *   insn=0x0000000000333790 string=0x0000000000333794 "("
 *   insn=0x0000000000333790 string=0x00000000003337C4 "("
 *   insn=0x0000000000333790 string=0x00000000003337D4 "("
 *   insn=0x0000000000333790 string=0x00000000003337E8 "("
 *   insn=0x0000000000333790 string=0x00000000003337F8 "("
 *   insn=0x0000000000333798 string=0x000000000033379C "i"
 *   insn=0x000000000033379C string=0x00000000003337A0 "?"
 *   insn=0x00000000003337A4 string=0x00000000003337A8 "*"
 *   insn=0x00000000003337AC string=0x00000000003337B0 "J"
 *   insn=0x00000000003337B0 string=0x00000000003337B4 ")"
 *   insn=0x00000000003337B8 string=0x00000000003337BC "i"
 *   insn=0x00000000003337BC string=0x00000000003337C0 "'"
 *   insn=0x00000000003337E0 string=0x00000000003337E4 "<"
 *   insn=0x00000000003337F0 string=0x00000000003337F4 "m"
 *   insn=0x00000000003337FC string=0x0000000000333800 "i"
 *   insn=0x0000000000333800 string=0x0000000000333804 "?"
 *   insn=0x0000000000333804 string=0x0000000000333808 "B"
 *   insn=0x0000000000333808 string=0x000000000033380C "*"
 *   insn=0x000000000033380C string=0x0000000000333810 "\n"
 *   insn=0x0000000000333810 string=0x0000000000333814 "J"
 *   insn=0x0000000000333814 string=0x0000000000333818 ")"
 *   insn=0x000000000033381C string=0x0000000000333820 "i"
 *   insn=0x0000000000333820 string=0x0000000000333824 "!"
 *   insn=0x000000000033382C string=0x0000000000333830 " "
 *   insn=0x0000000000333834 string=0x0000000000333838 "&("
 *   insn=0x0000000000333838 string=0x00000000001FD8D0 "0'"
 *   insn=0x000000000033384C string=0x0000000000333850 "`"
 *   insn=0x000000000033384C string=0x00000000001F9050 "0'"
 *   insn=0x0000000000333854 string=0x0000000000333858 "i"
 *   insn=0x0000000000333860 string=0x0000000000333864 "?"
 *   insn=0x0000000000333864 string=0x0000000000333868 "j"
 *   insn=0x000000000033386C string=0x0000000000333870 "B"
 *   insn=0x0000000000333870 string=0x0000000000333874 "*"
 *   insn=0x0000000000333874 string=0x0000000000333878 "_A"
 *   insn=0x000000000033387C string=0x0000000000333880 ")"
 *   insn=0x0000000000333880 string=0x0000000000333884 "i"
 *   insn=0x0000000000333884 string=0x0000000000333888 "?"
 *   insn=0x00000000003338A0 string=0x00000000003338A4 "i"
 *   insn=0x00000000003338AC string=0x00000000003338B0 "?"
 *   insn=0x00000000003338B0 string=0x00000000003338B4 "j"
 *   insn=0x00000000003338BC string=0x00000000003338C0 "("
 *   insn=0x00000000003338C8 string=0x00000000003338CC "("
 *   insn=0x00000000003338CC string=0x00000000003338D0 "h"
 *   insn=0x00000000003338D4 string=0x00000000003338D8 "H"
 *   insn=0x00000000003338E0 string=0x00000000003338F8 "h"
 *   insn=0x00000000003338E4 string=0x00000000003338E8 ">"
 *   insn=0x00000000003338E8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003338F0 string=0x00000000001F3F20 "P'"
 *   insn=0x0000000000333900 string=0x0000000000333904 "\t"
 *   insn=0x0000000000333908 string=0x000000000033390C ")"
 *   insn=0x000000000033390C string=0x0000000000333910 ""
 *   insn=0x0000000000333914 string=0x0000000000333918 "h"
 *   insn=0x000000000033391C string=0x0000000000333930 "h&G)\n"
 *   insn=0x0000000000333930 string=0x0000000000333934 "\n"
 *   insn=0x0000000000333938 string=0x000000000033393C "j:"
 *   insn=0x0000000000333948 string=0x000000000033394C "<"
 *   insn=0x0000000000333960 string=0x0000000000333964 "h"
 *   insn=0x0000000000333970 string=0x0000000000333974 "'="
 *   insn=0x0000000000333974 string=0x0000000000333978 "h:@"
 *   insn=0x0000000000333978 string=0x000000000033397C ""
 *   insn=0x000000000033397C string=0x0000000000333980 "K"
 *   insn=0x0000000000333980 string=0x0000000000333984 "h:"
 *   insn=0x0000000000333980 string=0x0000000000333988 "h"
 *   insn=0x000000000033398C string=0x0000000000333990 "B"
 *   insn=0x0000000000333990 string=0x0000000000333994 "\t"
 *   insn=0x0000000000333994 string=0x0000000000333998 "?"
 *   insn=0x000000000033399C string=0x00000000003339A0 ""
 *   insn=0x00000000003339A0 string=0x00000000003339A4 "h"
 *   insn=0x00000000003339AC string=0x00000000003339B0 "h"
 *   insn=0x00000000003339B0 string=0x00000000003339B4 "@"
 *   insn=0x00000000003339B0 string=0x00000000001FA750 "0'"
 *   insn=0x00000000003339C0 string=0x00000000003339C4 "("
 *   insn=0x00000000003339C8 string=0x00000000003339CC "h"
 *   insn=0x00000000003339D0 string=0x00000000003339D4 """
 *   insn=0x00000000003339D4 string=0x00000000003339D8 "\t"
 *   insn=0x00000000003339D8 string=0x00000000003339DC "?"
 *   insn=0x00000000003339E0 string=0x00000000003339E4 ""
 *   insn=0x00000000003339E4 string=0x00000000003339E8 "h"
 *   insn=0x00000000003339F0 string=0x00000000003339F4 "W"
 *   insn=0x00000000003339F4 string=0x00000000003339F8 " "
 *   insn=0x0000000000333A04 string=0x0000000000333A08 "("
 *   insn=0x0000000000333A0C string=0x0000000000333A10 "h"
 *   insn=0x0000000000333A18 string=0x0000000000333A1C "h.@"
 *   insn=0x0000000000333A28 string=0x0000000000333A2C "`"
 *   insn=0x0000000000333A68 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000333A74 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MagicExplosionComponent::MergePartialFromCodedStream(
        Caver::Proto::MagicExplosionComponent *this,
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
  char *v14; // x9
  unsigned int v15; // w10
  _BYTE *v16; // x9
  int v17; // w11
  int v18; // w11
  Caver::Proto::FloatColor *v19; // x21
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
  __int64 result; // x0
  unsigned int v32; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v33; // [xsp+8h] [xbp-38h]

  v33 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
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
          goto LABEL_23;
        v10 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v10 >= v9 || *v10 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v32) & 1) == 0 )
            return 0;
          v11 = v32;
          v12 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v11 = (unsigned __int8)*v10;
          v12 = v10 + 1;
          v32 = v11;
          *((_QWORD *)a2 + 1) = v12;
        }
        v17 = *((_DWORD *)this + 9);
        *((_DWORD *)this + 3) = v11;
        *((_DWORD *)this + 9) = v17 | 1;
        if ( (unsigned __int64)v12 >= v9 || *v12 != 16 )
          continue;
        v14 = v12 + 1;
        *((_QWORD *)a2 + 1) = v14;
        if ( (unsigned __int64)v14 < v9 )
          goto LABEL_20;
        goto LABEL_31;
      case 2u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_23;
        v14 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v14 >= v9 )
          goto LABEL_31;
LABEL_20:
        if ( *v14 < 0 )
        {
LABEL_31:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v32) & 1) == 0 )
            return 0;
          v15 = v32;
          v16 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v15 = (unsigned __int8)*v14;
          v16 = v14 + 1;
          v32 = v15;
          *((_QWORD *)a2 + 1) = v16;
        }
        v18 = *((_DWORD *)this + 9);
        *((_DWORD *)this + 8) = v15;
        v13 = v18 | 0x10;
        *((_DWORD *)this + 9) = v18 | 0x10;
        if ( (unsigned __int64)v16 >= v9 || *v16 != 26 )
          continue;
        *((_QWORD *)a2 + 1) = v16 + 1;
LABEL_36:
        v19 = (Caver::Proto::FloatColor *)*((_QWORD *)this + 2);
        *((_DWORD *)this + 9) = v13 | 2;
        if ( !v19 )
        {
          v19 = (Caver::Proto::FloatColor *)operator new(0x20u);
          Caver::Proto::FloatColor::FloatColor(v19);
          *((_QWORD *)this + 2) = v19;
        }
        v20 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v20 >= *((_QWORD *)a2 + 2) || *v20 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v32) & 1) == 0 )
            return 0;
        }
        else
        {
          v32 = (unsigned __int8)*v20;
          *((_QWORD *)a2 + 1) = v20 + 1;
        }
        v21 = *((_DWORD *)a2 + 14);
        v22 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v21 + 1;
        if ( v21 >= v22 )
          return 0;
        v23 = google::protobuf::io::CodedInputStream::PushLimit(a2, v32);
        if ( (Caver::Proto::FloatColor::MergePartialFromCodedStream(v19, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v23);
        v24 = *((_DWORD *)a2 + 14);
        v25 = __OFSUB__(v24, 1);
        v26 = v24 - 1;
        if ( v26 < 0 == v25 )
          *((_DWORD *)a2 + 14) = v26;
        v27 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v27 >= *((_QWORD *)a2 + 2) || *v27 != 37 )
          continue;
        *((_QWORD *)a2 + 1) = v27 + 1;
LABEL_50:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v32) & 1) == 0 )
          return 0;
        v28 = *((_DWORD *)this + 9);
        *((_DWORD *)this + 6) = v32;
        *((_DWORD *)this + 9) = v28 | 4;
        v29 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v29 >= *((_QWORD *)a2 + 2) || *v29 != 45 )
          continue;
        *((_QWORD *)a2 + 1) = v29 + 1;
LABEL_54:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v32) & 1) != 0 )
        {
          v30 = *((_DWORD *)this + 9);
          *((_DWORD *)this + 7) = v32;
          *((_DWORD *)this + 9) = v30 | 8;
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
        if ( v8 != 2 )
          goto LABEL_23;
        v13 = *((_DWORD *)this + 9);
        goto LABEL_36;
      case 4u:
        v8 = v6 & 7;
        if ( v8 == 5 )
          goto LABEL_50;
        goto LABEL_23;
      case 5u:
        v8 = v6 & 7;
        if ( v8 == 5 )
          goto LABEL_54;
        goto LABEL_23;
      default:
        v8 = v6 & 7;
LABEL_23:
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

