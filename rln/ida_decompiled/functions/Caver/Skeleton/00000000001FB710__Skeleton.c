/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB710
 * Mangled: ._ZN5Caver8SkeletonC2Ei
 * Demangled: Caver::Skeleton::Skeleton(int)
 *
 * Callers: 1
 *   0x000000000044E4FC  Caver::PODLoader::CreateSkeleton(void)
 *
 * Callees: 1
 *   0x0000000000450D7C  Caver::Skeleton::Skeleton(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB718 string=0x00000000001FB71C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Skeleton::Skeleton(Caver::Skeleton *this, int a2)
{
  return _ZN5Caver8SkeletonC2Ei(this, a2);
}

