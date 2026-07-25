/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D9A40
 * Mangled: _ZNK5Caver5Proto13MusicPlaylist8ByteSizeEv
 * Demangled: Caver::Proto::MusicPlaylist::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000001FB730  Caver::Proto::MusicPlaylist::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 25
 *   insn=0x00000000002D9A54 string=0x00000000002D9A58 "hBA9h"
 *   insn=0x00000000002D9A58 string=0x00000000002D9A5C "h"
 *   insn=0x00000000002D9A5C string=0x00000000002D9A68 "t\n@"
 *   insn=0x00000000002D9A64 string=0x00000000002D9AA0 "i"@"
 *   insn=0x00000000002D9A6C string=0x00000000002D9A70 ""
 *   insn=0x00000000002D9A74 string=0x00000000002D9A78 "b"
 *   insn=0x00000000002D9A80 string=0x00000000002D9A98 "("
 *   insn=0x00000000002D9A88 string=0x00000000001F61D0 "0'"
 *   insn=0x00000000002D9A90 string=0x00000000002D9A94 ""
 *   insn=0x00000000002D9A98 string=0x00000000002D9A9C ""
 *   insn=0x00000000002D9AA0 string=0x00000000002D9AA4 "?"
 *   insn=0x00000000002D9AA4 string=0x00000000002D9AA8 "4"
 *   insn=0x00000000002D9AAC string=0x00000000002D9B5C "t\n"
 *   insn=0x00000000002D9AB0 string=0x00000000002D9AB4 "h"
 *   insn=0x00000000002D9ACC string=0x00000000002D9B1C "\n"
 *   insn=0x00000000002D9ADC string=0x00000000002D9B44 "h""
 *   insn=0x00000000002D9AE4 string=0x00000000002D9AE8 ""
 *   insn=0x00000000002D9AEC string=0x00000000002D9AF0 "b"
 *   insn=0x00000000002D9AF4 string=0x00000000002D9AF8 ""
 *   insn=0x00000000002D9AF8 string=0x00000000002D9B14 "H"
 *   insn=0x00000000002D9B0C string=0x00000000002D9B10 ""
 *   insn=0x00000000002D9B14 string=0x00000000002D9B18 ""
 *   insn=0x00000000002D9B1C string=0x00000000002D9B20 "?"
 *   insn=0x00000000002D9B2C string=0x00000000002D9B30 "b"
 *   insn=0x00000000002D9B4C string=0x00000000002D9B50 "4"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MusicPlaylist::ByteSize(Caver::Proto::MusicPlaylist *this, unsigned int a2)
{
  int v3; // w8
  _QWORD *v4; // x20
  __int64 v5; // x8
  int v6; // w9
  int v7; // w9
  unsigned int v8; // w20
  __int64 v9; // x22
  __int64 v10; // x23
  int v11; // w9
  unsigned int v12; // w8
  unsigned int v13; // w21
  int v14; // w0
  _QWORD *v15; // x21
  __int64 v16; // x8
  int v17; // w10
  int v18; // w0

  if ( (*((_BYTE *)this + 80) & 1) != 0 )
  {
    v4 = (_QWORD *)*((_QWORD *)this + 2);
    v5 = *(_QWORD *)(*v4 - 24LL);
    if ( (unsigned int)v5 >= 0x80 )
    {
      v6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
             (google::protobuf::io::CodedOutputStream *)(unsigned int)v5,
             a2);
      v5 = *(_QWORD *)(*v4 - 24LL);
    }
    else
    {
      v6 = 1;
    }
    v3 = v6 + v5 + 1;
  }
  else
  {
    v3 = 0;
  }
  v7 = *((_DWORD *)this + 8);
  v8 = v7 + v3;
  if ( v7 >= 1 )
  {
    v9 = 0;
    do
    {
      v10 = *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v9);
      LOBYTE(v11) = *(_BYTE *)(v10 + 28);
      if ( (_BYTE)v11 )
      {
        if ( (*(_BYTE *)(v10 + 28) & 1) != 0 )
        {
          v15 = *(_QWORD **)(v10 + 16);
          v16 = *(_QWORD *)(*v15 - 24LL);
          if ( (unsigned int)v16 >= 0x80 )
          {
            v18 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                    (google::protobuf::io::CodedOutputStream *)(unsigned int)v16,
                    a2);
            v11 = *(_DWORD *)(v10 + 28);
            v17 = v18;
            v16 = *(_QWORD *)(*v15 - 24LL);
          }
          else
          {
            v17 = 1;
          }
          v12 = v17 + v16 + 1;
        }
        else
        {
          v12 = 0;
        }
        if ( (v11 & 2) != 0 )
          v13 = v12 + 5;
        else
          v13 = v12;
        *(_DWORD *)(v10 + 8) = v13;
        if ( v13 >= 0x80 )
          v14 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                  (google::protobuf::io::CodedOutputStream *)v13,
                  a2);
        else
          v14 = 1;
      }
      else
      {
        v13 = 0;
        *(_DWORD *)(v10 + 8) = 0;
        v14 = 1;
      }
      ++v9;
      v8 += v13 + v14;
    }
    while ( v9 < *((int *)this + 8) );
  }
  *((_DWORD *)this + 2) = v8;
  return v8;
}

