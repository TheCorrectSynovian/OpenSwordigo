/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB1D0
 * Mangled: ._ZN5Caver14SizeOfDataTypeENS_8DataTypeE
 * Demangled: Caver::SizeOfDataType(Caver::DataType)
 *
 * Callers: 9
 *   0x0000000000443E38  Caver::MeshData::valueSize(void)
 *   0x0000000000444214  Caver::Mesh::LoadFromProtobufMessage(Caver::Proto::Mesh const&)
 *   0x0000000000444C48  Caver::Mesh::SaveToProtobufMessage(Caver::Proto::Mesh *)
 *   0x00000000004457D4  Caver::Mesh::CreateInterleavedData(int,int,int)
 *   0x00000000004459BC  Caver::Mesh::AllocateBuffers(int)
 *   0x00000000004484F8  Caver::MeshInstance::MeshInstance(void)
 *   0x000000000048D358  Caver::VertexArrayObject::CreateIndexBuffer(Caver::DataType,int)
 *   0x000000000048D39C  Caver::VertexArrayObject::CreateBufferObjects(bool)
 *   0x000000000048DA6C  Caver::VertexArrayObject::Draw(Caver::RenderingContext *,int,int,int)
 *
 * Callees: 1
 *   0x000000000047E2F0  Caver::SizeOfDataType(Caver::DataType)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB1D8 string=0x00000000001FB1DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::SizeOfDataType()
{
  return _ZN5Caver14SizeOfDataTypeENS_8DataTypeE();
}

