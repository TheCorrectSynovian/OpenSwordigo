/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200CA0
 * Mangled: ._ZN5Caver7Matrix46LookAtERKNS_7Vector3ES3_S3_
 * Demangled: Caver::Matrix4::LookAt(Caver::Vector3 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *
 * Callers: 1
 *   0x000000000045807C  Caver::CameraController::CameraController(void)
 *
 * Callees: 1
 *   0x00000000004AF474  Caver::Matrix4::LookAt(Caver::Vector3 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200CA8 string=0x0000000000200CAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Matrix4::LookAt(
        Caver::Matrix4 *this,
        const Caver::Vector3 *a2,
        const Caver::Vector3 *a3,
        const Caver::Vector3 *a4)
{
  return _ZN5Caver7Matrix46LookAtERKNS_7Vector3ES3_S3_(this, a2, a3, a4);
}

