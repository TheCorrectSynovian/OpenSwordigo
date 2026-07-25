/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6770
 * Mangled: .calloc
 * Demangled: .calloc
 *
 * Callers: 17
 *   0x0000000000503314  CPVRTModelPOD::ReadFromFile(char const*,char *,ulong,char *,ulong)
 *   0x0000000000504048  CPVRTModelPOD::CopyFromMemory(SPODScene const&)
 *   0x00000000005043EC  PVRTModelPODCopyNode(SPODNode const&,SPODNode&,int)
 *   0x0000000000504930  PVRTModelPODCopyMesh(SPODMesh const&,SPODMesh&)
 *   0x0000000000504DB0  PVRTModelPODCopyCamera(SPODCamera const&,SPODCamera&,int)
 *   0x0000000000504E44  PVRTModelPODCopyTexture(SPODTexture const&,SPODTexture&)
 *   0x0000000000504EC8  PVRTModelPODCopyMaterial(SPODMaterial const&,SPODMaterial&)
 *   0x000000000050CEBC  PVRTModelPODToggleInterleaved(SPODMesh &,uint)
 *   0x000000000050DF90  PVRTModelPODDeIndex(SPODMesh &)
 *   0x000000000050E220  PVRTModelPODToggleStrips(SPODMesh &)
 *   0x000000000050F1E0  PVRTModelPODCopyCPODData(CPODData const&,CPODData&,uint,bool)
 *   0x000000000050F2AC  PVRTModelPODFlattenToWorldSpace(CPVRTModelPOD &,CPVRTModelPOD &)
 *   0x0000000000510538  sub_510538
 *   0x00000000005128B0  sub_5128B0
 *   0x0000000000514480  CPVRTString::CPVRTString(void)
 *   0x0000000000514934  CPVRTString::clear(void)
 *   0x0000000000517E18  PVRTVertexGenerateTangentSpace(int *,char **,ushort *,int,char const*,int,int,EPVRTDataType,int,EPVRTDataType,int,EPVRTDataType,int,EPVRTDataType,int,EPVRTDataType,int,float)
 *
 * Callees: 1
 *   0x00000000006FE720  calloc
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6778 string=0x00000000001F677C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void *calloc(size_t item_count, size_t item_size)
{
  return calloc(item_count, item_size);
}

