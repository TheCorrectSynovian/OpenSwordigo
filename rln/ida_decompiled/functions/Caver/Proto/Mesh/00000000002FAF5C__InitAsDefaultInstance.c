/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FAF5C
 * Mangled: _ZN5Caver5Proto4Mesh21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::Mesh::InitAsDefaultInstance(void)
 *
 * Callers: 1
 *   0x00000000001FB830  Caver::Proto::Mesh::InitAsDefaultInstance(void)
 *
 * Callees: 2
 *   0x00000000001F3D70  Caver::Proto::Box::default_instance(void)
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 27
 *   insn=0x00000000002FAF64 string=0x00000000002FAF68 "t"
 *   insn=0x00000000002FAF74 string=0x00000000002FAF78 "h"
 *   insn=0x00000000002FAF78 string=0x00000000002FAF7C "h"
 *   insn=0x00000000002FAF78 string=0x00000000002FAF84 "3"
 *   insn=0x00000000002FAF80 string=0x00000000002FAF94 "h""
 *   insn=0x00000000002FAF88 string=0x00000000002FAF8C "h"
 *   insn=0x00000000002FAF8C string=0x00000000002FAF90 ""
 *   insn=0x00000000002FAF90 string=0x00000000002FAFD0 " "
 *   insn=0x00000000002FAF94 string=0x00000000002FAF98 "h"
 *   insn=0x00000000002FAF98 string=0x00000000002FAF9C "h>"
 *   insn=0x00000000002FAF9C string=0x00000000002FAFA0 "t"
 *   insn=0x00000000002FAFA8 string=0x00000000002FAFAC "h"
 *   insn=0x00000000002FAFAC string=0x00000000002FAFB0 "("
 *   insn=0x00000000002FAFAC string=0x00000000002FAFB8 "hB"
 *   insn=0x00000000002FAFB8 string=0x00000000002FAFBC "m"
 *   insn=0x00000000002FAFBC string=0x00000000002FAFC0 "`F"
 *   insn=0x00000000002FAFBC string=0x00000000001F3D70 "P'"
 *   insn=0x00000000002FAFD4 string=0x00000000002FAFD8 "h"
 *   insn=0x00000000002FAFD8 string=0x00000000002FAFDC "h"
 *   insn=0x00000000002FAFDC string=0x00000000002FAFE0 "h"
 *   insn=0x00000000002FAFEC string=0x00000000002FAFF0 "h"
 *   insn=0x00000000002FAFF0 string=0x00000000002FAFF4 "("
 *   insn=0x00000000002FAFFC string=0x00000000002FB000 "h6"
 *   insn=0x00000000002FB000 string=0x00000000002FB004 "h"
 *   insn=0x00000000002FB004 string=0x00000000002FB008 "h:"
 *   insn=0x00000000002FB014 string=0x00000000002FB018 "h:"
 *   insn=0x00000000002FB018 string=0x00000000002FB01C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Mesh::InitAsDefaultInstance(Caver::Proto::Mesh *this)
{
  Caver::Proto::Mesh *v1; // x19
  __int64 v2; // x8
  __int64 v3; // x8
  __int64 result; // x0

  v1 = this;
  v2 = Caver::Proto::MeshData::default_instance_;
  if ( Caver::Proto::MeshData::default_instance_ )
  {
    *((_QWORD *)this + 3) = Caver::Proto::MeshData::default_instance_;
LABEL_4:
    *((_QWORD *)v1 + 4) = v2;
    *((_QWORD *)v1 + 5) = v2;
LABEL_5:
    *((_QWORD *)v1 + 13) = v2;
    *((_QWORD *)v1 + 14) = v2;
    goto LABEL_6;
  }
  this = (Caver::Proto::Mesh *)Caver::Proto::protobuf_AddDesc_Scene_2eproto(this);
  v2 = Caver::Proto::MeshData::default_instance_;
  *((_QWORD *)v1 + 3) = Caver::Proto::MeshData::default_instance_;
  if ( v2 )
    goto LABEL_4;
  this = (Caver::Proto::Mesh *)Caver::Proto::protobuf_AddDesc_Scene_2eproto(this);
  v2 = Caver::Proto::MeshData::default_instance_;
  *((_QWORD *)v1 + 4) = Caver::Proto::MeshData::default_instance_;
  if ( v2 )
  {
    *((_QWORD *)v1 + 5) = v2;
    goto LABEL_5;
  }
  this = (Caver::Proto::Mesh *)Caver::Proto::protobuf_AddDesc_Scene_2eproto(this);
  v2 = Caver::Proto::MeshData::default_instance_;
  *((_QWORD *)v1 + 5) = Caver::Proto::MeshData::default_instance_;
  if ( v2 )
    goto LABEL_5;
  this = (Caver::Proto::Mesh *)Caver::Proto::protobuf_AddDesc_Scene_2eproto(this);
  v2 = Caver::Proto::MeshData::default_instance_;
  *((_QWORD *)v1 + 13) = Caver::Proto::MeshData::default_instance_;
  if ( v2 )
  {
    *((_QWORD *)v1 + 14) = v2;
  }
  else
  {
    this = (Caver::Proto::Mesh *)Caver::Proto::protobuf_AddDesc_Scene_2eproto(this);
    v2 = Caver::Proto::MeshData::default_instance_;
    *((_QWORD *)v1 + 14) = Caver::Proto::MeshData::default_instance_;
    if ( !v2 )
    {
      this = (Caver::Proto::Mesh *)Caver::Proto::protobuf_AddDesc_Scene_2eproto(this);
      v2 = Caver::Proto::MeshData::default_instance_;
    }
  }
LABEL_6:
  *((_QWORD *)v1 + 15) = v2;
  v3 = Caver::Proto::MeshMaterial::default_instance_;
  if ( !Caver::Proto::MeshMaterial::default_instance_ )
  {
    this = (Caver::Proto::Mesh *)Caver::Proto::protobuf_AddDesc_Scene_2eproto(this);
    v3 = Caver::Proto::MeshMaterial::default_instance_;
  }
  *((_QWORD *)v1 + 16) = v3;
  result = Caver::Proto::Box::default_instance(this);
  *((_QWORD *)v1 + 17) = result;
  return result;
}

