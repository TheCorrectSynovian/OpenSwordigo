/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003023A4
 * Mangled: _ZNK5Caver5Proto5Scene8ByteSizeEv
 * Demangled: Caver::Proto::Scene::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F34D0  Caver::Proto::Program::ByteSize(void)
 *   0x00000000001F47A0  Caver::Proto::ObjectLibrary::ByteSize(void)
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001FE3C0  Caver::Proto::Rectangle::ByteSize(void)
 *   0x00000000001FF090  Caver::Proto::SceneObject::ByteSize(void)
 *   0x00000000001FF680  Caver::Proto::SceneObjectGroup::ByteSize(void)
 *
 * Referenced strings: 52
 *   insn=0x00000000003023B4 string=0x00000000003023B8 "h"
 *   insn=0x00000000003023C4 string=0x00000000003023DC ")"
 *   insn=0x00000000003023CC string=0x00000000003023D0 ")"
 *   insn=0x00000000003023CC string=0x0000000000302428 ")"
 *   insn=0x00000000003023D0 string=0x0000000000302474 "h"
 *   insn=0x00000000003023D4 string=0x00000000003023D8 ":"
 *   insn=0x00000000003023D8 string=0x00000000003024C0 "h"
 *   insn=0x00000000003023DC string=0x00000000003023E0 "hB@"
 *   insn=0x00000000003023E0 string=0x00000000003023E4 ")"
 *   insn=0x00000000003023E8 string=0x00000000003023EC ")"
 *   insn=0x00000000003023EC string=0x00000000003023F0 "("
 *   insn=0x00000000003023F8 string=0x00000000001F47A0 "P'"
 *   insn=0x0000000000302400 string=0x0000000000302404 "b"
 *   insn=0x000000000030240C string=0x0000000000302418 "h"
 *   insn=0x0000000000302410 string=0x0000000000302414 "o"
 *   insn=0x0000000000302414 string=0x00000000001F61D0 "0'"
 *   insn=0x000000000030241C string=0x0000000000302420 "5"
 *   insn=0x0000000000302428 string=0x000000000030242C "hF@"
 *   insn=0x000000000030242C string=0x0000000000302430 ")"
 *   insn=0x0000000000302434 string=0x0000000000302438 ")"
 *   insn=0x0000000000302438 string=0x000000000030243C "("
 *   insn=0x000000000030244C string=0x0000000000302450 "b"
 *   insn=0x0000000000302458 string=0x0000000000302464 "h"
 *   insn=0x000000000030245C string=0x0000000000302460 "\"
 *   insn=0x0000000000302468 string=0x000000000030246C ")"
 *   insn=0x000000000030246C string=0x0000000000302470 "5"
 *   insn=0x0000000000302474 string=0x0000000000302478 ")"
 *   insn=0x0000000000302478 string=0x000000000030247C "hJ@"
 *   insn=0x000000000030247C string=0x0000000000302480 ")"
 *   insn=0x0000000000302484 string=0x0000000000302488 ")"
 *   insn=0x0000000000302488 string=0x000000000030248C "("
 *   insn=0x0000000000302494 string=0x00000000001F34D0 "P'"
 *   insn=0x000000000030249C string=0x00000000003024A0 "b"
 *   insn=0x00000000003024AC string=0x00000000003024B0 "H"
 *   insn=0x00000000003024B4 string=0x00000000003024B8 ""
 *   insn=0x00000000003024C8 string=0x00000000003024CC "K"
 *   insn=0x00000000003024CC string=0x0000000000302514 "hR@"
 *   insn=0x00000000003024D0 string=0x00000000003024D4 "h\n@"
 *   insn=0x00000000003024E4 string=0x00000000003024E8 "b"
 *   insn=0x00000000003024F0 string=0x00000000003024FC "h"
 *   insn=0x00000000003024F4 string=0x00000000003024F8 "6"
 *   insn=0x0000000000302504 string=0x0000000000302508 "5"
 *   insn=0x000000000030250C string=0x0000000000302510 "+"
 *   insn=0x000000000030251C string=0x0000000000302520 "K"
 *   insn=0x0000000000302520 string=0x0000000000302568 "t\n"
 *   insn=0x0000000000302524 string=0x0000000000302528 "h&@"
 *   insn=0x000000000030252C string=0x0000000000302530 "T"
 *   insn=0x0000000000302538 string=0x000000000030253C "b"
 *   insn=0x0000000000302544 string=0x0000000000302550 "hR"
 *   insn=0x0000000000302548 string=0x000000000030254C "!"
 *   insn=0x0000000000302558 string=0x000000000030255C "4"
 *   insn=0x0000000000302560 string=0x0000000000302564 "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Scene::ByteSize(Caver::Proto::Scene *this)
{
  int v2; // w8
  int v3; // w21
  Caver::Proto::Scene *v4; // x8
  unsigned int v5; // w1
  unsigned int v6; // w20
  int v7; // w0
  Caver::Proto::Scene *v8; // x8
  unsigned int v9; // w1
  unsigned int v10; // w20
  int v11; // w0
  Caver::Proto::Scene *v12; // x8
  unsigned int v13; // w1
  unsigned int v14; // w20
  int v15; // w0
  int v16; // w8
  int v17; // w21
  __int64 v18; // x22
  unsigned int v19; // w1
  unsigned int v20; // w20
  int v21; // w0
  int v22; // w8
  unsigned int v23; // w20
  __int64 v24; // x22
  unsigned int v25; // w1
  unsigned int v26; // w21
  int v27; // w0

  v2 = *((_DWORD *)this + 38);
  if ( (v2 & 0x3FC) == 0 )
  {
    v3 = 0;
    goto LABEL_28;
  }
  if ( (v2 & 4) == 0 )
  {
    v3 = 0;
    if ( (v2 & 8) == 0 )
      goto LABEL_20;
    goto LABEL_13;
  }
  if ( *((_QWORD *)this + 16) )
    v4 = this;
  else
    v4 = (Caver::Proto::Scene *)Caver::Proto::Scene::default_instance_;
  v6 = Caver::Proto::ObjectLibrary::ByteSize(*((Caver::Proto::ObjectLibrary **)v4 + 16));
  if ( v6 >= 0x80 )
    v7 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
           (google::protobuf::io::CodedOutputStream *)v6,
           v5);
  else
    v7 = 1;
  v2 = *((_DWORD *)this + 38);
  v3 = v6 + v7 + 1;
  if ( (v2 & 8) != 0 )
  {
LABEL_13:
    if ( *((_QWORD *)this + 17) )
      v8 = this;
    else
      v8 = (Caver::Proto::Scene *)Caver::Proto::Scene::default_instance_;
    v10 = Caver::Proto::Rectangle::ByteSize(*((Caver::Proto::Rectangle **)v8 + 17));
    if ( v10 >= 0x80 )
      v11 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v10,
              v9);
    else
      v11 = 1;
    v2 = *((_DWORD *)this + 38);
    v3 += v10 + v11 + 1;
  }
LABEL_20:
  if ( (v2 & 0x10) != 0 )
  {
    if ( *((_QWORD *)this + 18) )
      v12 = this;
    else
      v12 = (Caver::Proto::Scene *)Caver::Proto::Scene::default_instance_;
    v14 = Caver::Proto::Program::ByteSize(*((Caver::Proto::Program **)v12 + 18));
    if ( v14 >= 0x80 )
      v15 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v14,
              v13);
    else
      v15 = 1;
    v3 += v14 + v15 + 1;
  }
LABEL_28:
  v16 = *((_DWORD *)this + 6);
  v17 = v16 + v3;
  if ( v16 >= 1 )
  {
    v18 = 0;
    do
    {
      v20 = Caver::Proto::SceneObject::ByteSize(*(Caver::Proto::SceneObject **)(*((_QWORD *)this + 2) + 8 * v18));
      if ( v20 >= 0x80 )
        v21 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                (google::protobuf::io::CodedOutputStream *)v20,
                v19);
      else
        v21 = 1;
      ++v18;
      v17 += v20 + v21;
    }
    while ( v18 < *((int *)this + 6) );
  }
  v22 = *((_DWORD *)this + 20);
  v23 = v22 + v17;
  if ( v22 >= 1 )
  {
    v24 = 0;
    do
    {
      v26 = Caver::Proto::SceneObjectGroup::ByteSize(*(Caver::Proto::SceneObjectGroup **)(*((_QWORD *)this + 9) + 8 * v24));
      if ( v26 >= 0x80 )
        v27 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                (google::protobuf::io::CodedOutputStream *)v26,
                v25);
      else
        v27 = 1;
      ++v24;
      v23 += v26 + v27;
    }
    while ( v24 < *((int *)this + 20) );
  }
  *((_DWORD *)this + 2) = v23;
  return v23;
}

