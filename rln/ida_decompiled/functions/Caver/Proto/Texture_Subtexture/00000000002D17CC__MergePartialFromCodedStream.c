/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D17CC
 * Mangled: _ZN5Caver5Proto18Texture_Subtexture27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::Texture_Subtexture::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000001F8BB0  Caver::Proto::Texture_Subtexture::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 10
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001F97D0  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001F9860  Caver::Proto::Rectangle::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *
 * Referenced strings: 72
 *   insn=0x00000000002D17E4 string=0x00000000002D17E8 "W"
 *   insn=0x00000000002D17FC string=0x00000000002D1800 ")"
 *   insn=0x00000000002D1800 string=0x00000000002D1804 "J"
 *   insn=0x00000000002D180C string=0x00000000002D1810 "9a"
 *   insn=0x00000000002D1810 string=0x00000000002D1814 "ZA"
 *   insn=0x00000000002D1818 string=0x00000000002D181C "h"
 *   insn=0x00000000002D1820 string=0x00000000002D1824 """
 *   insn=0x00000000002D1824 string=0x00000000002D1828 "\t"
 *   insn=0x00000000002D182C string=0x00000000002D1830 "!"
 *   insn=0x00000000002D1830 string=0x00000000002D1834 ""
 *   insn=0x00000000002D1834 string=0x00000000002D1838 "a""
 *   insn=0x00000000002D1838 string=0x00000000002D183C "h"
 *   insn=0x00000000002D1840 string=0x00000000002D1844 "~"
 *   insn=0x00000000002D1840 string=0x00000000002D185C "(|"
 *   insn=0x00000000002D1848 string=0x00000000002D184C "}"
 *   insn=0x00000000002D184C string=0x00000000001F7A40 "0'"
 *   insn=0x00000000002D1850 string=0x00000000002D1854 "a""
 *   insn=0x00000000002D1854 string=0x00000000002D1858 "!"
 *   insn=0x00000000002D1864 string=0x00000000002D1898 "("
 *   insn=0x00000000002D186C string=0x00000000002D1888 "("
 *   insn=0x00000000002D1874 string=0x00000000002D1878 "("
 *   insn=0x00000000002D1874 string=0x00000000002D1950 "("
 *   insn=0x00000000002D1880 string=0x00000000002D1884 "\"
 *   insn=0x00000000002D188C string=0x00000000002D1890 "`"
 *   insn=0x00000000002D1890 string=0x00000000002D1894 "0"
 *   insn=0x00000000002D18A8 string=0x00000000002D18AC ""
 *   insn=0x00000000002D18AC string=0x00000000002D18B0 "?"
 *   insn=0x00000000002D18BC string=0x00000000002D18C0 "H"
 *   insn=0x00000000002D18C0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002D18C4 string=0x00000000002D18C8 "9"
 *   insn=0x00000000002D18D4 string=0x00000000002D18D8 "`"
 *   insn=0x00000000002D18D4 string=0x00000000001F97D0 "0'"
 *   insn=0x00000000002D18D8 string=0x00000000002D18DC "h"
 *   insn=0x00000000002D18E4 string=0x00000000002D18E8 "\t"
 *   insn=0x00000000002D18E8 string=0x00000000002D18EC "?I"
 *   insn=0x00000000002D18EC string=0x00000000002D18F0 "a"
 *   insn=0x00000000002D18F0 string=0x00000000002D18F4 ""
 *   insn=0x00000000002D18F4 string=0x00000000002D18F8 "h"
 *   insn=0x00000000002D1900 string=0x00000000002D1904 ""
 *   insn=0x00000000002D190C string=0x00000000002D1928 "h"
 *   insn=0x00000000002D1910 string=0x00000000002D1914 "3"
 *   insn=0x00000000002D1930 string=0x00000000002D1934 "\t"
 *   insn=0x00000000002D1938 string=0x00000000002D193C ")"
 *   insn=0x00000000002D193C string=0x00000000002D1940 ""
 *   insn=0x00000000002D1944 string=0x00000000002D1948 "h"
 *   insn=0x00000000002D194C string=0x00000000002D197C "h&G)\n"
 *   insn=0x00000000002D1954 string=0x00000000002D1958 " "
 *   insn=0x00000000002D1960 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000002D1964 string=0x00000000002D1968 "7"
 *   insn=0x00000000002D1974 string=0x00000000002D1978 "`"
 *   insn=0x00000000002D1974 string=0x00000000001F9050 "0'"
 *   insn=0x00000000002D197C string=0x00000000002D1980 "\n"
 *   insn=0x00000000002D1984 string=0x00000000002D1988 "j:"
 *   insn=0x00000000002D19A8 string=0x00000000001F9860 "0'"
 *   insn=0x00000000002D19AC string=0x00000000002D19B0 "h"
 *   insn=0x00000000002D19C0 string=0x00000000002D19C4 "h:@"
 *   insn=0x00000000002D19C4 string=0x00000000002D19C8 ""
 *   insn=0x00000000002D19C8 string=0x00000000002D19CC "K"
 *   insn=0x00000000002D19CC string=0x00000000002D19D0 "h:"
 *   insn=0x00000000002D19CC string=0x00000000002D19D4 "h"
 *   insn=0x00000000002D19DC string=0x00000000002D19E0 "\t"
 *   insn=0x00000000002D19E0 string=0x00000000002D19E4 "?u"
 *   insn=0x00000000002D19E8 string=0x00000000002D19EC ""
 *   insn=0x00000000002D19EC string=0x00000000002D19F0 "h"
 *   insn=0x00000000002D19F8 string=0x00000000002D19FC "U"
 *   insn=0x00000000002D19FC string=0x00000000002D1A00 " "
 *   insn=0x00000000002D19FC string=0x00000000001FA750 "0'"
 *   insn=0x00000000002D1A0C string=0x00000000002D1A10 "("
 *   insn=0x00000000002D1A14 string=0x00000000002D1A18 "h"
 *   insn=0x00000000002D1A20 string=0x00000000002D1A24 "h.@"
 *   insn=0x00000000002D1A30 string=0x00000000002D1A34 "`"
 *   insn=0x00000000002D1A74 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Texture_Subtexture::MergePartialFromCodedStream(
        Caver::Proto::Texture_Subtexture *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  unsigned int v8; // w8
  int v9; // w8
  __int64 *v10; // x1
  _QWORD *v11; // x0
  _BYTE *v12; // x8
  Caver::Proto::Rectangle *v13; // x21
  char *v14; // x8
  int v15; // w8
  int v16; // w9
  int v17; // w22
  int v18; // w8
  bool v19; // vf
  int v20; // w8
  _BYTE *v21; // x8
  int v22; // w9
  __int64 result; // x0
  unsigned int v24; // [xsp+4h] [xbp-4Ch] BYREF
  __int64 v25; // [xsp+8h] [xbp-48h]

  v25 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
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
        v8 = (unsigned int)v6 >> 3;
        if ( (unsigned int)v6 >> 3 != 1 )
          break;
        v9 = v6 & 7;
        if ( v9 != 2 )
          goto LABEL_27;
        v10 = (__int64 *)*((_QWORD *)this + 2);
        *((_DWORD *)this + 9) |= 1u;
        if ( v10 == &Caver::Proto::Texture_Subtexture::_default_name_ )
        {
          v11 = (_QWORD *)operator new(8u);
          *v11 = &byte_6FD2F8;
          *((_QWORD *)this + 2) = v11;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v12 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v12 < *((_QWORD *)a2 + 2) && *v12 == 18 )
        {
          *((_QWORD *)a2 + 1) = v12 + 1;
          goto LABEL_21;
        }
      }
      if ( v8 == 2 )
        break;
      if ( v8 != 3 )
      {
        v9 = v6 & 7;
        goto LABEL_27;
      }
      v9 = v6 & 7;
      if ( v9 == 5 )
      {
LABEL_39:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v24) & 1) == 0 )
          return 0;
        v22 = *((_DWORD *)this + 9);
        *((_DWORD *)this + 8) = v24;
        *((_DWORD *)this + 9) = v22 | 4;
        if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
        {
          result = 1;
          *((_DWORD *)a2 + 8) = 0;
          *((_BYTE *)a2 + 36) = 1;
          return result;
        }
      }
      else
      {
LABEL_27:
        if ( v9 == 4 )
          return 1;
        if ( (google::protobuf::internal::WireFormatLite::SkipField(
                a2,
                (google::protobuf::io::CodedInputStream *)v6,
                a3)
            & 1) == 0 )
          return 0;
      }
    }
    v9 = v6 & 7;
    if ( v9 != 2 )
      goto LABEL_27;
LABEL_21:
    v13 = (Caver::Proto::Rectangle *)*((_QWORD *)this + 3);
    *((_DWORD *)this + 9) |= 2u;
    if ( !v13 )
    {
      v13 = (Caver::Proto::Rectangle *)operator new(0x20u);
      *((_QWORD *)v13 + 2) = 0;
      *((_QWORD *)v13 + 3) = 0;
      *(_QWORD *)v13 = off_6C5AF8;
      *((_QWORD *)v13 + 1) = 0;
      *((_QWORD *)this + 3) = v13;
    }
    v14 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v14 >= *((_QWORD *)a2 + 2) || *v14 < 0 )
    {
      if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v24) & 1) == 0 )
        return 0;
    }
    else
    {
      v24 = (unsigned __int8)*v14;
      *((_QWORD *)a2 + 1) = v14 + 1;
    }
    v15 = *((_DWORD *)a2 + 14);
    v16 = *((_DWORD *)a2 + 15);
    *((_DWORD *)a2 + 14) = v15 + 1;
    if ( v15 >= v16 )
      return 0;
    v17 = google::protobuf::io::CodedInputStream::PushLimit(a2, v24);
    if ( (Caver::Proto::Rectangle::MergePartialFromCodedStream(v13, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
      return 0;
    google::protobuf::io::CodedInputStream::PopLimit(a2, v17);
    v18 = *((_DWORD *)a2 + 14);
    v19 = __OFSUB__(v18, 1);
    v20 = v18 - 1;
    if ( v20 < 0 == v19 )
      *((_DWORD *)a2 + 14) = v20;
    v21 = (_BYTE *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v21 < *((_QWORD *)a2 + 2) && *v21 == 29 )
    {
      *((_QWORD *)a2 + 1) = v21 + 1;
      goto LABEL_39;
    }
  }
}

