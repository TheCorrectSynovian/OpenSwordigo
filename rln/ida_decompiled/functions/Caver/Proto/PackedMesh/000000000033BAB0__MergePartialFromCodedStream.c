/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033BAB0
 * Mangled: _ZN5Caver5Proto10PackedMesh27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::PackedMesh::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 14
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F67E0  google::protobuf::io::CodedInputStream::BytesUntilLimit(void)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000001FAD40  google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)15>(int,uint,google::protobuf::io::CodedInputStream *,google::protobuf::RepeatedField<int> *)
 *   0x00000000001FC6E0  google::protobuf::internal::WireFormatLite::ReadBytes(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x0000000000201760  .memcpy
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *
 * Referenced strings: 134
 *   insn=0x000000000033BAD4 string=0x000000000033BAD8 "H"
 *   insn=0x000000000033BAFC string=0x000000000033BB00 ""
 *   insn=0x000000000033BB04 string=0x000000000058BA80 ""
 *   insn=0x000000000033BB10 string=0x000000000033BB14 "H"
 *   insn=0x000000000033BB14 string=0x000000000033BB18 ""
 *   insn=0x000000000033BB20 string=0x000000000033BB24 "a"
 *   insn=0x000000000033BB28 string=0x000000000033BB2C "h"
 *   insn=0x000000000033BB30 string=0x000000000033BB34 """
 *   insn=0x000000000033BB34 string=0x000000000033BB38 "\t"
 *   insn=0x000000000033BB3C string=0x000000000033BB40 "!"
 *   insn=0x000000000033BB40 string=0x000000000033BB44 ""
 *   insn=0x000000000033BB44 string=0x000000000033BB48 "a""
 *   insn=0x000000000033BB48 string=0x000000000033BB4C "h"
 *   insn=0x000000000033BB50 string=0x000000000033BB54 "6"
 *   insn=0x000000000033BB50 string=0x000000000033BB6C "(|"
 *   insn=0x000000000033BB5C string=0x00000000001F7A40 "0'"
 *   insn=0x000000000033BB60 string=0x000000000033BB64 "a""
 *   insn=0x000000000033BB64 string=0x000000000033BB68 "!&"
 *   insn=0x000000000033BB6C string=0x000000000033BB70 ""
 *   insn=0x000000000033BB78 string=0x000000000033BC4C "("
 *   insn=0x000000000033BB7C string=0x000000000033BB80 ""
 *   insn=0x000000000033BB84 string=0x000000000033BB88 "("
 *   insn=0x000000000033BB84 string=0x000000000033BBC4 "("
 *   insn=0x000000000033BB84 string=0x000000000033BC00 "("
 *   insn=0x000000000033BB84 string=0x000000000033BC10 "("
 *   insn=0x000000000033BB98 string=0x000000000033BB9C "h"
 *   insn=0x000000000033BBA4 string=0x000000000033BBA8 "\t"
 *   insn=0x000000000033BBAC string=0x000000000033BBB0 "!"
 *   insn=0x000000000033BBB0 string=0x000000000033BBB4 ""
 *   insn=0x000000000033BBB8 string=0x000000000033BBBC "h"
 *   insn=0x000000000033BBBC string=0x000000000033BBC0 "D"
 *   insn=0x000000000033BBD4 string=0x000000000033BBD8 "h"
 *   insn=0x000000000033BBDC string=0x000000000033BBE0 """
 *   insn=0x000000000033BBE0 string=0x000000000033BBE4 "\t"
 *   insn=0x000000000033BBE8 string=0x000000000033BBEC "!"
 *   insn=0x000000000033BBEC string=0x000000000033BBF0 ""
 *   insn=0x000000000033BBF4 string=0x000000000033BBF8 "h"
 *   insn=0x000000000033BC08 string=0x000000000033BFBC "i"
 *   insn=0x000000000033BC14 string=0x000000000033BC18 "@"
 *   insn=0x000000000033BC1C string=0x000000000033BC20 "a"
 *   insn=0x000000000033BC20 string=0x000000000033BC24 "h"
 *   insn=0x000000000033BC2C string=0x000000000033BC30 "\t"
 *   insn=0x000000000033BC30 string=0x000000000033BC34 "i"
 *   insn=0x000000000033BC34 string=0x000000000033BC38 "!"
 *   insn=0x000000000033BC38 string=0x000000000033BC3C ""
 *   insn=0x000000000033BC40 string=0x000000000033BC44 "h"
 *   insn=0x000000000033BC44 string=0x000000000033BC48 "c"
 *   insn=0x000000000033BC5C string=0x000000000033BC60 "`"
 *   insn=0x000000000033BC5C string=0x00000000001FD8D0 "0'"
 *   insn=0x000000000033BC6C string=0x000000000033BC70 "A"
 *   insn=0x000000000033BC74 string=0x000000000033BC78 "2"
 *   insn=0x000000000033BC78 string=0x00000000001FAD40 "0'"
 *   insn=0x000000000033BC7C string=0x000000000033BF9C "h"
 *   insn=0x000000000033BC88 string=0x000000000033BC8C "A"
 *   insn=0x000000000033BC90 string=0x000000000033BC94 "+"
 *   insn=0x000000000033BC98 string=0x000000000033BD98 "h"
 *   insn=0x000000000033BCA4 string=0x000000000033BCA8 "A"
 *   insn=0x000000000033BCAC string=0x000000000033BCB0 "$"
 *   insn=0x000000000033BCB0 string=0x000000000033BCB4 "@"
 *   insn=0x000000000033BCB4 string=0x000000000033BE9C "h"
 *   insn=0x000000000033BCC4 string=0x00000000001F9050 "0'"
 *   insn=0x000000000033BCD0 string=0x000000000033BCD4 "+"
 *   insn=0x000000000033BCE0 string=0x00000000001F67E0 "0'"
 *   insn=0x000000000033BCE4 string=0x000000000033BCE8 "+"
 *   insn=0x000000000033BCF4 string=0x000000000033BCF8 "`"
 *   insn=0x000000000033BCF4 string=0x00000000001FA750 "0'"
 *   insn=0x000000000033BD04 string=0x000000000033BD08 "!"
 *   insn=0x000000000033BD10 string=0x000000000033BD14 "?"
 *   insn=0x000000000033BD14 string=0x000000000033BD18 "("
 *   insn=0x000000000033BD18 string=0x000000000033BD1C "\t}@"
 *   insn=0x000000000033BD20 string=0x000000000033BD24 ")}"
 *   insn=0x000000000033BD28 string=0x000000000033BD2C "}~"
 *   insn=0x000000000033BD38 string=0x000000000033BD3C ""
 *   insn=0x000000000033BD3C string=0x00000000001F8570 "0'"
 *   insn=0x000000000033BD50 string=0x000000000033BD54 "?"
 *   insn=0x000000000033BD64 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000033BD84 string=0x000000000033BD88 ","
 *   insn=0x000000000033BD9C string=0x000000000033BDA0 "b"
 *   insn=0x000000000033BDA0 string=0x000000000033BDA4 "\n"
 *   insn=0x000000000033BDA4 string=0x000000000033BDA8 "_I"
 *   insn=0x000000000033BDAC string=0x000000000033BDB0 ""
 *   insn=0x000000000033BDB0 string=0x000000000033BDB4 "h"
 *   insn=0x000000000033BDE8 string=0x000000000033BDEC "+"
 *   insn=0x000000000033BDF4 string=0x000000000033BDF8 "V"
 *   insn=0x000000000033BDF8 string=0x000000000033BDFC "@"
 *   insn=0x000000000033BE08 string=0x000000000033BE0C "!"
 *   insn=0x000000000033BE14 string=0x000000000033BE18 "?"
 *   insn=0x000000000033BE18 string=0x000000000033BE1C "("
 *   insn=0x000000000033BE1C string=0x000000000033BE20 "\t}@"
 *   insn=0x000000000033BE24 string=0x000000000033BE28 ")}"
 *   insn=0x000000000033BE2C string=0x000000000033BE30 "}~"
 *   insn=0x000000000033BE40 string=0x000000000033BE44 "b"
 *   insn=0x000000000033BE4C string=0x000000000033BE50 "D"
 *   insn=0x000000000033BE54 string=0x000000000033BE58 "?"
 *   insn=0x000000000033BE64 string=0x000000000033BE68 ">"
 *   insn=0x000000000033BE80 string=0x000000000033BE84 "W"
 *   insn=0x000000000033BE88 string=0x000000000033BE8C ","
 *   insn=0x000000000033BEA0 string=0x000000000033BEA4 "B"
 *   insn=0x000000000033BEA4 string=0x000000000033BEA8 "\n"
 *   insn=0x000000000033BEA8 string=0x000000000033BEAC "_i"
 *   insn=0x000000000033BEB0 string=0x000000000033BEB4 ""
 *   insn=0x000000000033BEB4 string=0x000000000033BEB8 "h"
 *   insn=0x000000000033BEBC string=0x000000000033BEC0 "#"
 *   insn=0x000000000033BEC8 string=0x000000000033BECC "a"
 *   insn=0x000000000033BEE4 string=0x000000000033BEE8 ">"
 *   insn=0x000000000033BEEC string=0x000000000033BEF0 ""
 *   insn=0x000000000033BEFC string=0x000000000033BF00 " \t"
 *   insn=0x000000000033BF18 string=0x000000000033BF1C "?"
 *   insn=0x000000000033BF1C string=0x000000000033BF20 "("
 *   insn=0x000000000033BF20 string=0x000000000033BF24 "\t}@"
 *   insn=0x000000000033BF28 string=0x000000000033BF2C ")}"
 *   insn=0x000000000033BF30 string=0x000000000033BF34 "}~"
 *   insn=0x000000000033BF44 string=0x000000000033BF48 "b"
 *   insn=0x000000000033BF54 string=0x000000000033BF58 "?"
 *   insn=0x000000000033BF88 string=0x000000000033BF8C "L"
 *   insn=0x000000000033BFA0 string=0x000000000033BFA4 "B"
 *   insn=0x000000000033BFA4 string=0x000000000033BFA8 "\t"
 *   insn=0x000000000033BFA8 string=0x000000000033BFAC "?"
 *   insn=0x000000000033BFB0 string=0x000000000033BFB4 ""
 *   insn=0x000000000033BFB4 string=0x000000000033BFB8 "h"
 *   insn=0x000000000033BFC4 string=0x000000000033BFC8 ")uB"
 *   insn=0x000000000033BFC8 string=0x000000000033BFCC ""
 *   insn=0x000000000033BFD0 string=0x000000000033BFD4 "?"
 *   insn=0x000000000033BFE0 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000033BFE8 string=0x000000000033BFEC "("
 *   insn=0x000000000033BFF8 string=0x000000000033BFFC "@"
 *   insn=0x000000000033BFF8 string=0x00000000001FC6E0 "0'"
 *   insn=0x000000000033BFFC string=0x000000000033C000 "h"
 *   insn=0x000000000033C004 string=0x000000000033C008 "!"
 *   insn=0x000000000033C008 string=0x000000000033C00C "h.@"
 *   insn=0x000000000033C018 string=0x000000000033C01C "`"
 *   insn=0x000000000033C030 string=0x000000000033C034 ""
 *   insn=0x000000000033C03C string=0x000000000033C040 "!"
 *   insn=0x000000000033C064 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PackedMesh::MergePartialFromCodedStream(
        Caver::Proto::PackedMesh *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x28
  char *v6; // x8
  unsigned __int64 v7; // x1
  unsigned int TagFallback; // w0
  char *v9; // x8
  unsigned int v10; // w1
  unsigned __int8 *v11; // x8
  unsigned int v12; // w1
  char *v13; // x8
  unsigned int v14; // w1
  int v15; // w27
  int v16; // w21
  unsigned int v17; // w26
  int v18; // w8
  char *v19; // x25
  __int64 v20; // x9
  __int64 v21; // x8
  unsigned __int64 v22; // x0
  void *v23; // x0
  __int64 v24; // x8
  _BYTE *v25; // x8
  unsigned __int64 v26; // x9
  int v27; // w24
  int v28; // w21
  unsigned int v29; // w26
  int v30; // w8
  char *v31; // x25
  __int64 v32; // x9
  __int64 v33; // x8
  unsigned __int64 v34; // x0
  void *v35; // x0
  __int64 v36; // x8
  _BYTE *v37; // x8
  unsigned __int64 v38; // x9
  int v39; // w24
  int v40; // w21
  unsigned int v41; // w26
  int v42; // w8
  char *v43; // x25
  __int64 v44; // x9
  __int64 v45; // x8
  unsigned __int64 v46; // x0
  void *v47; // x0
  __int64 v48; // x8
  _BYTE *v49; // x8
  __int64 *v50; // x1
  _QWORD *v51; // x0
  __int64 result; // x0
  char *v53; // [xsp+30h] [xbp-70h]
  char *v54; // [xsp+38h] [xbp-68h]
  unsigned int v55; // [xsp+40h] [xbp-60h] BYREF
  unsigned int v56; // [xsp+44h] [xbp-5Ch] BYREF
  __int64 v57; // [xsp+48h] [xbp-58h]

  v54 = (char *)this + 72;
  v53 = (char *)this + 32;
  v5 = (char *)this + 112;
  v57 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 2 )
  {
    v6 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v6 >= *((_QWORD *)a2 + 2) || *v6 < 0 )
    {
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
      v7 = TagFallback;
      *((_DWORD *)a2 + 8) = TagFallback;
      if ( !TagFallback )
        return 1;
    }
    else
    {
      v7 = (unsigned __int8)*v6;
      *((_DWORD *)a2 + 8) = v7;
      *((_QWORD *)a2 + 1) = v6 + 1;
      if ( !(_DWORD)v7 )
        return 1;
    }
    switch ( (unsigned int)v7 >> 3 )
    {
      case 1u:
        if ( (v7 & 7) == 5 )
        {
          if ( (google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)15>(
                  1,
                  10,
                  a2)
              & 1) == 0 )
            return 0;
        }
        else
        {
          if ( (v7 & 7) != 2 )
            goto LABEL_25;
          v9 = (char *)*((_QWORD *)a2 + 1);
          if ( (unsigned __int64)v9 >= *((_QWORD *)a2 + 2) || *v9 < 0 )
          {
            if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v55) & 1) == 0 )
              return 0;
            v10 = v55;
          }
          else
          {
            v10 = (unsigned __int8)*v9;
            v55 = v10;
            *((_QWORD *)a2 + 1) = v9 + 1;
          }
          v15 = google::protobuf::io::CodedInputStream::PushLimit(a2, v10);
          if ( (int)google::protobuf::io::CodedInputStream::BytesUntilLimit(a2) >= 1 )
          {
            do
            {
              if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v56) & 1) == 0 )
                return 0;
              v16 = *((_DWORD *)this + 6);
              v17 = v56;
              if ( v16 == *((_DWORD *)this + 7) )
              {
                v18 = 2 * v16 < v16 + 1 ? v16 + 1 : 2 * v16;
                v19 = (char *)*((_QWORD *)this + 2);
                v20 = ((unsigned __int64)v18 * (unsigned __int128)4uLL) >> 64;
                *((_DWORD *)this + 7) = v18;
                v21 = 4LL * v18;
                v22 = v20 ? -1LL : v21;
                v23 = (void *)operator new[](v22);
                *((_QWORD *)this + 2) = v23;
                memcpy(v23, v19, 4LL * v16);
                if ( v19 != v53 )
                {
                  if ( v19 )
                  {
                    operator delete[](v19);
                    v16 = *((_DWORD *)this + 6);
                  }
                }
              }
              v24 = *((_QWORD *)this + 2);
              *((_DWORD *)this + 6) = v16 + 1;
              *(_DWORD *)(v24 + 4LL * v16) = v17;
            }
            while ( (int)google::protobuf::io::CodedInputStream::BytesUntilLimit(a2) > 0 );
          }
          google::protobuf::io::CodedInputStream::PopLimit(a2, v15);
        }
        v25 = (_BYTE *)*((_QWORD *)a2 + 1);
        v26 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v25 >= v26 || *v25 != 18 )
          continue;
        v13 = v25 + 1;
        *((_QWORD *)a2 + 1) = v13;
        if ( (unsigned __int64)v13 < v26 )
          goto LABEL_23;
        goto LABEL_53;
      case 2u:
        if ( (v7 & 7) == 5 )
        {
          if ( (google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)15>(
                  1,
                  18,
                  a2)
              & 1) == 0 )
            return 0;
          goto LABEL_69;
        }
        if ( (v7 & 7) != 2 )
        {
LABEL_25:
          if ( (v7 & 7) == 4 )
            return 1;
          if ( (google::protobuf::internal::WireFormatLite::SkipField(
                  a2,
                  (google::protobuf::io::CodedInputStream *)v7,
                  a3)
              & 1) == 0 )
            return 0;
          continue;
        }
        v13 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v13 < *((_QWORD *)a2 + 2) )
        {
LABEL_23:
          if ( (*v13 & 0x80000000) == 0 )
          {
            v14 = (unsigned __int8)*v13;
            v55 = v14;
            *((_QWORD *)a2 + 1) = v13 + 1;
            goto LABEL_55;
          }
        }
LABEL_53:
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v55) & 1) == 0 )
          return 0;
        v14 = v55;
LABEL_55:
        v27 = google::protobuf::io::CodedInputStream::PushLimit(a2, v14);
        if ( (int)google::protobuf::io::CodedInputStream::BytesUntilLimit(a2) < 1 )
        {
LABEL_68:
          google::protobuf::io::CodedInputStream::PopLimit(a2, v27);
LABEL_69:
          v37 = (_BYTE *)*((_QWORD *)a2 + 1);
          v38 = *((_QWORD *)a2 + 2);
          if ( (unsigned __int64)v37 < v38 && *v37 == 26 )
          {
            v11 = v37 + 1;
            *((_QWORD *)a2 + 1) = v11;
            if ( (unsigned __int64)v11 >= v38 )
            {
LABEL_72:
              if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v55) & 1) == 0 )
                return 0;
              v12 = v55;
              goto LABEL_74;
            }
LABEL_16:
            if ( (char)*v11 < 0 )
              goto LABEL_72;
            v12 = *v11;
            v55 = v12;
            *((_QWORD *)a2 + 1) = v11 + 1;
LABEL_74:
            v39 = google::protobuf::io::CodedInputStream::PushLimit(a2, v12);
            if ( (int)google::protobuf::io::CodedInputStream::BytesUntilLimit(a2) >= 1 )
            {
              while ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v56) & 1) != 0 )
              {
                v40 = *((_DWORD *)this + 26);
                v41 = v56;
                if ( v40 == *((_DWORD *)this + 27) )
                {
                  v42 = 2 * v40 < v40 + 1 ? v40 + 1 : 2 * v40;
                  v43 = (char *)*((_QWORD *)this + 12);
                  v44 = ((unsigned __int64)v42 * (unsigned __int128)4uLL) >> 64;
                  *((_DWORD *)this + 27) = v42;
                  v45 = 4LL * v42;
                  v46 = v44 ? -1LL : v45;
                  v47 = (void *)operator new[](v46);
                  *((_QWORD *)this + 12) = v47;
                  memcpy(v47, v43, 4LL * v40);
                  if ( v43 != v5 )
                  {
                    if ( v43 )
                    {
                      operator delete[](v43);
                      v40 = *((_DWORD *)this + 26);
                    }
                  }
                }
                v48 = *((_QWORD *)this + 12);
                *((_DWORD *)this + 26) = v40 + 1;
                *(_DWORD *)(v48 + 4LL * v40) = v41;
                if ( (int)google::protobuf::io::CodedInputStream::BytesUntilLimit(a2) <= 0 )
                  goto LABEL_87;
              }
              return 0;
            }
LABEL_87:
            google::protobuf::io::CodedInputStream::PopLimit(a2, v39);
LABEL_88:
            v49 = (_BYTE *)*((_QWORD *)a2 + 1);
            if ( (unsigned __int64)v49 < *((_QWORD *)a2 + 2) && *v49 == 34 )
            {
              *((_QWORD *)a2 + 1) = v49 + 1;
LABEL_91:
              v50 = (__int64 *)*((_QWORD *)this + 17);
              *((_DWORD *)this + 36) |= 8u;
              if ( v50 == &Caver::Proto::PackedMesh::_default_vertex_data_ )
              {
                v51 = (_QWORD *)operator new(8u);
                *v51 = &byte_6FD2F8;
                *((_QWORD *)this + 17) = v51;
              }
              if ( (google::protobuf::internal::WireFormatLite::ReadBytes(a2) & 1) == 0 )
                return 0;
              if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
              {
                result = 1;
                *((_DWORD *)a2 + 8) = 0;
                *((_BYTE *)a2 + 36) = 1;
                return result;
              }
            }
          }
          continue;
        }
        while ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v56) & 1) != 0 )
        {
          v28 = *((_DWORD *)this + 16);
          v29 = v56;
          if ( v28 == *((_DWORD *)this + 17) )
          {
            v30 = 2 * v28 < v28 + 1 ? v28 + 1 : 2 * v28;
            v31 = (char *)*((_QWORD *)this + 7);
            v32 = ((unsigned __int64)v30 * (unsigned __int128)4uLL) >> 64;
            *((_DWORD *)this + 17) = v30;
            v33 = 4LL * v30;
            v34 = v32 ? -1LL : v33;
            v35 = (void *)operator new[](v34);
            *((_QWORD *)this + 7) = v35;
            memcpy(v35, v31, 4LL * v28);
            if ( v31 != v54 )
            {
              if ( v31 )
              {
                operator delete[](v31);
                v28 = *((_DWORD *)this + 16);
              }
            }
          }
          v36 = *((_QWORD *)this + 7);
          *((_DWORD *)this + 16) = v28 + 1;
          *(_DWORD *)(v36 + 4LL * v28) = v29;
          if ( (int)google::protobuf::io::CodedInputStream::BytesUntilLimit(a2) <= 0 )
            goto LABEL_68;
        }
        return 0;
      case 3u:
        if ( (v7 & 7) == 5 )
        {
          if ( (google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)15>(
                  1,
                  26,
                  a2)
              & 1) == 0 )
            return 0;
          goto LABEL_88;
        }
        if ( (v7 & 7) != 2 )
          goto LABEL_25;
        v11 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v11 < *((_QWORD *)a2 + 2) )
          goto LABEL_16;
        goto LABEL_72;
      case 4u:
        if ( (v7 & 7) != 2 )
          goto LABEL_25;
        goto LABEL_91;
      default:
        goto LABEL_25;
    }
  }
}

