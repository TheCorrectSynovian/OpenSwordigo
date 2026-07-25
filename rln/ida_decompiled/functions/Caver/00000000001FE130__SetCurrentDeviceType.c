/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE130
 * Mangled: ._ZN5Caver20SetCurrentDeviceTypeENS_10DeviceTypeE
 * Demangled: Caver::SetCurrentDeviceType(Caver::DeviceType)
 *
 * Callers: 1
 *   0x00000000004789F0  Java_com_touchfoo_swordigo_Native_setApplicationViewSize
 *
 * Callees: 1
 *   0x00000000004B2D64  Caver::SetCurrentDeviceType(Caver::DeviceType)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE138 string=0x00000000001FE13C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::SetCurrentDeviceType()
{
  return _ZN5Caver20SetCurrentDeviceTypeENS_10DeviceTypeE();
}

