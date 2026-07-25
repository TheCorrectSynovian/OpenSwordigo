/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003091BC
 * Mangled: _ZNK5Caver5Proto28GroundMeshGeneratorComponent8ByteSizeEv
 * Demangled: Caver::Proto::GroundMeshGeneratorComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 62
 *   insn=0x00000000003091C8 string=0x00000000003091CC "h:@"
 *   insn=0x00000000003091D0 string=0x00000000003091D4 "@"
 *   insn=0x00000000003091D8 string=0x000000000030920C "`"
 *   insn=0x00000000003091DC string=0x00000000003091E0 "h"
 *   insn=0x00000000003091E0 string=0x00000000003091E4 "`"
 *   insn=0x00000000003091E0 string=0x000000000030924C "("
 *   insn=0x00000000003091E8 string=0x0000000000309228 "i"
 *   insn=0x00000000003091EC string=0x00000000003091F0 "b"
 *   insn=0x00000000003091F8 string=0x0000000000309248 "4"
 *   insn=0x0000000000309204 string=0x0000000000309208 "f"
 *   insn=0x0000000000309204 string=0x000000000030937C "\t"
 *   insn=0x0000000000309208 string=0x00000000003093A0 "`\n"
 *   insn=0x0000000000309210 string=0x0000000000309230 "t"
 *   insn=0x000000000030921C string=0x0000000000309220 "("
 *   insn=0x0000000000309220 string=0x0000000000309224 "\n"
 *   insn=0x0000000000309228 string=0x000000000030922C ""
 *   insn=0x000000000030923C string=0x0000000000309240 "h:@"
 *   insn=0x000000000030923C string=0x00000000001F61D0 "0'"
 *   insn=0x0000000000309240 string=0x0000000000309244 "\t"
 *   insn=0x000000000030924C string=0x0000000000309270 "`"
 *   insn=0x0000000000309250 string=0x0000000000309254 "("
 *   insn=0x0000000000309250 string=0x000000000030928C "`"
 *   insn=0x0000000000309254 string=0x0000000000309258 "`"
 *   insn=0x000000000030925C string=0x00000000003092AC "i"
 *   insn=0x0000000000309260 string=0x0000000000309264 """
 *   insn=0x0000000000309268 string=0x000000000030926C """
 *   insn=0x000000000030926C string=0x00000000003092F4 "4"
 *   insn=0x0000000000309274 string=0x00000000003092B4 "i"
 *   insn=0x0000000000309278 string=0x000000000030927C "b"
 *   insn=0x0000000000309280 string=0x0000000000309284 "4"
 *   insn=0x0000000000309284 string=0x0000000000309288 "h"
 *   insn=0x0000000000309290 string=0x00000000003092C4 "i"
 *   insn=0x0000000000309294 string=0x0000000000309298 "B"
 *   insn=0x000000000030929C string=0x00000000003092A0 "4"
 *   insn=0x00000000003092B4 string=0x00000000003092B8 "4"
 *   insn=0x00000000003092C4 string=0x00000000003092C8 "4"
 *   insn=0x00000000003092C8 string=0x00000000003092CC "h"
 *   insn=0x00000000003092CC string=0x00000000003092D0 "\n"
 *   insn=0x00000000003092D4 string=0x00000000003092D8 "h:@"
 *   insn=0x00000000003092DC string=0x00000000003092E0 "("
 *   insn=0x00000000003092E8 string=0x00000000003092EC "h:@"
 *   insn=0x00000000003092EC string=0x00000000003092F0 "\t"
 *   insn=0x0000000000309300 string=0x0000000000309304 "("
 *   insn=0x0000000000309304 string=0x0000000000309308 "`&@"
 *   insn=0x000000000030930C string=0x0000000000309320 "i"
 *   insn=0x0000000000309310 string=0x0000000000309314 """
 *   insn=0x000000000030931C string=0x0000000000309364 "4"
 *   insn=0x0000000000309328 string=0x000000000030932C "h:@"
 *   insn=0x000000000030932C string=0x0000000000309330 "\t"
 *   insn=0x0000000000309330 string=0x0000000000309334 "4"
 *   insn=0x0000000000309340 string=0x0000000000309344 "h:@"
 *   insn=0x0000000000309344 string=0x0000000000309348 "\t"
 *   insn=0x0000000000309348 string=0x000000000030934C "4"
 *   insn=0x000000000030934C string=0x0000000000309350 "H"
 *   insn=0x0000000000309358 string=0x000000000030935C "h:@"
 *   insn=0x000000000030935C string=0x0000000000309360 "\t"
 *   insn=0x0000000000309374 string=0x0000000000309378 "@"
 *   insn=0x0000000000309380 string=0x0000000000309384 "\t"
 *   insn=0x0000000000309388 string=0x000000000030938C "*"
 *   insn=0x000000000030938C string=0x0000000000309390 ")"
 *   insn=0x0000000000309390 string=0x0000000000309394 "*"
 *   insn=0x0000000000309398 string=0x000000000030939C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GroundMeshGeneratorComponent::ByteSize(
        Caver::Proto::GroundMeshGeneratorComponent *this,
        unsigned int a2)
{
  int v3; // w8
  unsigned int v4; // w20
  google::protobuf::io::CodedOutputStream *v5; // x0
  int v6; // w9
  __int64 result; // x0
  google::protobuf::io::CodedOutputStream *v8; // x0
  int v9; // w0
  google::protobuf::io::CodedOutputStream *v10; // x0
  int v11; // w9
  google::protobuf::io::CodedOutputStream *v12; // x0
  google::protobuf::io::CodedOutputStream *v13; // x0
  int v14; // w0
  int v15; // w0
  google::protobuf::io::CodedOutputStream *v16; // x0
  int v17; // w9
  int v18; // w0
  int v19; // w0
  int v20; // w0
  unsigned int v21; // w9

  v3 = *((_DWORD *)this + 14);
  if ( !(_BYTE)v3 )
  {
    result = 0;
    if ( (v3 & 0xFF00) == 0 )
      goto LABEL_64;
    goto LABEL_57;
  }
  if ( (v3 & 1) != 0 )
  {
    v8 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 3);
    if ( ((unsigned int)v8 & 0x80000000) != 0 )
    {
      v4 = 11;
      if ( (v3 & 2) == 0 )
        goto LABEL_18;
    }
    else if ( (unsigned int)v8 >= 0x80 )
    {
      v14 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v8, a2);
      v3 = *((_DWORD *)this + 14);
      v4 = v14 + 1;
      if ( (v3 & 2) == 0 )
        goto LABEL_18;
    }
    else
    {
      v4 = 2;
      if ( (v3 & 2) == 0 )
        goto LABEL_18;
    }
  }
  else
  {
    v4 = 0;
    if ( (v3 & 2) == 0 )
      goto LABEL_18;
  }
  v5 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 4);
  if ( ((unsigned int)v5 & 0x80000000) != 0 )
  {
    v6 = 11;
  }
  else if ( (unsigned int)v5 >= 0x80 )
  {
    v9 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, a2);
    v3 = *((_DWORD *)this + 14);
    v6 = v9 + 1;
  }
  else
  {
    v6 = 2;
  }
  v4 += v6;
LABEL_18:
  if ( (v3 & 4) != 0 )
  {
    v12 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 5);
    if ( ((unsigned int)v12 & 0x80000000) != 0 )
    {
      v4 += 11;
      if ( (v3 & 8) != 0 )
        goto LABEL_27;
    }
    else if ( (unsigned int)v12 >= 0x80 )
    {
      v18 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v12, a2);
      v3 = *((_DWORD *)this + 14);
      v4 += v18 + 1;
      if ( (v3 & 8) != 0 )
        goto LABEL_27;
    }
    else
    {
      v4 += 2;
      if ( (v3 & 8) != 0 )
        goto LABEL_27;
    }
LABEL_20:
    if ( (v3 & 0x10) == 0 )
      goto LABEL_40;
    goto LABEL_21;
  }
  if ( (v3 & 8) == 0 )
    goto LABEL_20;
LABEL_27:
  v13 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 6);
  if ( ((unsigned int)v13 & 0x80000000) != 0 )
  {
    v4 += 11;
    if ( (v3 & 0x10) == 0 )
      goto LABEL_40;
  }
  else if ( (unsigned int)v13 >= 0x80 )
  {
    v19 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v13, a2);
    v3 = *((_DWORD *)this + 14);
    v4 += v19 + 1;
    if ( (v3 & 0x10) == 0 )
      goto LABEL_40;
  }
  else
  {
    v4 += 2;
    if ( (v3 & 0x10) == 0 )
      goto LABEL_40;
  }
LABEL_21:
  v10 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 7);
  if ( ((unsigned int)v10 & 0x80000000) != 0 )
  {
    v11 = 11;
  }
  else if ( (unsigned int)v10 >= 0x80 )
  {
    v15 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v10, a2);
    v3 = *((_DWORD *)this + 14);
    v11 = v15 + 1;
  }
  else
  {
    v11 = 2;
  }
  v4 += v11;
LABEL_40:
  if ( (v3 & 0x20) != 0 )
    v4 += 5;
  if ( (v3 & 0x40) != 0 )
  {
    v16 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 9);
    if ( ((unsigned int)v16 & 0x80000000) != 0 )
    {
      v17 = 11;
    }
    else if ( (unsigned int)v16 >= 0x80 )
    {
      v20 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v16, a2);
      v3 = *((_DWORD *)this + 14);
      v17 = v20 + 1;
    }
    else
    {
      v17 = 2;
    }
    v4 += v17;
  }
  if ( (v3 & 0x80) != 0 )
    result = v4 + 5;
  else
    result = v4;
  if ( (v3 & 0xFF00) != 0 )
  {
LABEL_57:
    v21 = result + 5;
    if ( (v3 & 0x100) == 0 )
      v21 = result;
    if ( (v3 & 0x200) != 0 )
      v21 += 5;
    if ( (v3 & 0x400) != 0 )
      result = v21 + 5;
    else
      result = v21;
  }
LABEL_64:
  *((_DWORD *)this + 2) = result;
  return result;
}

