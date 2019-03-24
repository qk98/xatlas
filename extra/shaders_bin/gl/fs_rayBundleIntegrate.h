static const uint8_t fs_rayBundleIntegrate_gl[5026] =
{
	0x46, 0x53, 0x48, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8f, 0x13, // FSH.............
	0x00, 0x00, 0x23, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x20, 0x34, 0x33, 0x30, 0x0a, 0x23, // ..#version 430.#
	0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, // define texture2D
	0x4c, 0x6f, 0x64, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, // Lod      texture
	0x4c, 0x6f, 0x64, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x74, 0x65, 0x78, 0x74, // Lod.#define text
	0x75, 0x72, 0x65, 0x32, 0x44, 0x47, 0x72, 0x61, 0x64, 0x20, 0x20, 0x20, 0x20, 0x20, 0x74, 0x65, // ure2DGrad     te
	0x78, 0x74, 0x75, 0x72, 0x65, 0x47, 0x72, 0x61, 0x64, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, // xtureGrad.#defin
	0x65, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x50, 0x72, 0x6f, 0x6a, 0x4c, // e texture2DProjL
	0x6f, 0x64, 0x20, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x50, 0x72, 0x6f, 0x6a, 0x4c, // od  textureProjL
	0x6f, 0x64, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, // od.#define textu
	0x72, 0x65, 0x32, 0x44, 0x50, 0x72, 0x6f, 0x6a, 0x47, 0x72, 0x61, 0x64, 0x20, 0x74, 0x65, 0x78, // re2DProjGrad tex
	0x74, 0x75, 0x72, 0x65, 0x50, 0x72, 0x6f, 0x6a, 0x47, 0x72, 0x61, 0x64, 0x0a, 0x23, 0x64, 0x65, // tureProjGrad.#de
	0x66, 0x69, 0x6e, 0x65, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x43, 0x75, 0x62, 0x65, // fine textureCube
	0x4c, 0x6f, 0x64, 0x20, 0x20, 0x20, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x4c, 0x6f, // Lod    textureLo
	0x64, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, // d.#define textur
	0x65, 0x43, 0x75, 0x62, 0x65, 0x47, 0x72, 0x61, 0x64, 0x20, 0x20, 0x20, 0x74, 0x65, 0x78, 0x74, // eCubeGrad   text
	0x75, 0x72, 0x65, 0x47, 0x72, 0x61, 0x64, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, // ureGrad.#define 
	0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x33, 0x44, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, // texture3D       
	0x20, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, //   texture.#defin
	0x65, 0x20, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x69, 0x6e, 0x0a, 0x23, // e attribute in.#
	0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x69, // define varying i
	0x6e, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x62, 0x67, 0x66, 0x78, 0x53, 0x68, // n.#define bgfxSh
	0x61, 0x64, 0x6f, 0x77, 0x32, 0x44, 0x28, 0x5f, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, // adow2D(_sampler,
	0x20, 0x5f, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x29, 0x20, 0x20, 0x20, 0x20, 0x20, 0x76, 0x65, 0x63, //  _coord)     vec
	0x34, 0x5f, 0x73, 0x70, 0x6c, 0x61, 0x74, 0x28, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x28, // 4_splat(texture(
	0x5f, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x5f, 0x63, 0x6f, 0x6f, 0x72, 0x64, // _sampler, _coord
	0x29, 0x29, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x62, 0x67, 0x66, 0x78, 0x53, // )).#define bgfxS
	0x68, 0x61, 0x64, 0x6f, 0x77, 0x32, 0x44, 0x50, 0x72, 0x6f, 0x6a, 0x28, 0x5f, 0x73, 0x61, 0x6d, // hadow2DProj(_sam
	0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x5f, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x29, 0x20, 0x76, 0x65, // pler, _coord) ve
	0x63, 0x34, 0x5f, 0x73, 0x70, 0x6c, 0x61, 0x74, 0x28, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, // c4_splat(texture
	0x50, 0x72, 0x6f, 0x6a, 0x28, 0x5f, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x5f, // Proj(_sampler, _
	0x63, 0x6f, 0x6f, 0x72, 0x64, 0x29, 0x29, 0x0a, 0x76, 0x65, 0x63, 0x33, 0x20, 0x69, 0x6e, 0x73, // coord)).vec3 ins
	0x74, 0x4d, 0x75, 0x6c, 0x28, 0x76, 0x65, 0x63, 0x33, 0x20, 0x5f, 0x76, 0x65, 0x63, 0x2c, 0x20, // tMul(vec3 _vec, 
	0x6d, 0x61, 0x74, 0x33, 0x20, 0x5f, 0x6d, 0x74, 0x78, 0x29, 0x20, 0x7b, 0x20, 0x72, 0x65, 0x74, // mat3 _mtx) { ret
	0x75, 0x72, 0x6e, 0x20, 0x28, 0x20, 0x28, 0x5f, 0x76, 0x65, 0x63, 0x29, 0x20, 0x2a, 0x20, 0x28, // urn ( (_vec) * (
	0x5f, 0x6d, 0x74, 0x78, 0x29, 0x20, 0x29, 0x3b, 0x20, 0x7d, 0x0a, 0x76, 0x65, 0x63, 0x33, 0x20, // _mtx) ); }.vec3 
	0x69, 0x6e, 0x73, 0x74, 0x4d, 0x75, 0x6c, 0x28, 0x6d, 0x61, 0x74, 0x33, 0x20, 0x5f, 0x6d, 0x74, // instMul(mat3 _mt
	0x78, 0x2c, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x5f, 0x76, 0x65, 0x63, 0x29, 0x20, 0x7b, 0x20, // x, vec3 _vec) { 
	0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x28, 0x20, 0x28, 0x5f, 0x6d, 0x74, 0x78, 0x29, 0x20, // return ( (_mtx) 
	0x2a, 0x20, 0x28, 0x5f, 0x76, 0x65, 0x63, 0x29, 0x20, 0x29, 0x3b, 0x20, 0x7d, 0x0a, 0x76, 0x65, // * (_vec) ); }.ve
	0x63, 0x34, 0x20, 0x69, 0x6e, 0x73, 0x74, 0x4d, 0x75, 0x6c, 0x28, 0x76, 0x65, 0x63, 0x34, 0x20, // c4 instMul(vec4 
	0x5f, 0x76, 0x65, 0x63, 0x2c, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x5f, 0x6d, 0x74, 0x78, 0x29, // _vec, mat4 _mtx)
	0x20, 0x7b, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x28, 0x20, 0x28, 0x5f, 0x76, 0x65, //  { return ( (_ve
	0x63, 0x29, 0x20, 0x2a, 0x20, 0x28, 0x5f, 0x6d, 0x74, 0x78, 0x29, 0x20, 0x29, 0x3b, 0x20, 0x7d, // c) * (_mtx) ); }
	0x0a, 0x76, 0x65, 0x63, 0x34, 0x20, 0x69, 0x6e, 0x73, 0x74, 0x4d, 0x75, 0x6c, 0x28, 0x6d, 0x61, // .vec4 instMul(ma
	0x74, 0x34, 0x20, 0x5f, 0x6d, 0x74, 0x78, 0x2c, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x5f, 0x76, // t4 _mtx, vec4 _v
	0x65, 0x63, 0x29, 0x20, 0x7b, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x28, 0x20, 0x28, // ec) { return ( (
	0x5f, 0x6d, 0x74, 0x78, 0x29, 0x20, 0x2a, 0x20, 0x28, 0x5f, 0x76, 0x65, 0x63, 0x29, 0x20, 0x29, // _mtx) * (_vec) )
	0x3b, 0x20, 0x7d, 0x0a, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x72, 0x63, 0x70, 0x28, 0x66, 0x6c, // ; }.float rcp(fl
	0x6f, 0x61, 0x74, 0x20, 0x5f, 0x61, 0x29, 0x20, 0x7b, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, // oat _a) { return
	0x20, 0x31, 0x2e, 0x30, 0x2f, 0x5f, 0x61, 0x3b, 0x20, 0x7d, 0x0a, 0x76, 0x65, 0x63, 0x32, 0x20, //  1.0/_a; }.vec2 
	0x72, 0x63, 0x70, 0x28, 0x76, 0x65, 0x63, 0x32, 0x20, 0x5f, 0x61, 0x29, 0x20, 0x7b, 0x20, 0x72, // rcp(vec2 _a) { r
	0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x76, 0x65, 0x63, 0x32, 0x28, 0x31, 0x2e, 0x30, 0x29, 0x2f, // eturn vec2(1.0)/
	0x5f, 0x61, 0x3b, 0x20, 0x7d, 0x0a, 0x76, 0x65, 0x63, 0x33, 0x20, 0x72, 0x63, 0x70, 0x28, 0x76, // _a; }.vec3 rcp(v
	0x65, 0x63, 0x33, 0x20, 0x5f, 0x61, 0x29, 0x20, 0x7b, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, // ec3 _a) { return
	0x20, 0x76, 0x65, 0x63, 0x33, 0x28, 0x31, 0x2e, 0x30, 0x29, 0x2f, 0x5f, 0x61, 0x3b, 0x20, 0x7d, //  vec3(1.0)/_a; }
	0x0a, 0x76, 0x65, 0x63, 0x34, 0x20, 0x72, 0x63, 0x70, 0x28, 0x76, 0x65, 0x63, 0x34, 0x20, 0x5f, // .vec4 rcp(vec4 _
	0x61, 0x29, 0x20, 0x7b, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x76, 0x65, 0x63, 0x34, // a) { return vec4
	0x28, 0x31, 0x2e, 0x30, 0x29, 0x2f, 0x5f, 0x61, 0x3b, 0x20, 0x7d, 0x0a, 0x76, 0x65, 0x63, 0x32, // (1.0)/_a; }.vec2
	0x20, 0x76, 0x65, 0x63, 0x32, 0x5f, 0x73, 0x70, 0x6c, 0x61, 0x74, 0x28, 0x66, 0x6c, 0x6f, 0x61, //  vec2_splat(floa
	0x74, 0x20, 0x5f, 0x78, 0x29, 0x20, 0x7b, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x76, // t _x) { return v
	0x65, 0x63, 0x32, 0x28, 0x5f, 0x78, 0x2c, 0x20, 0x5f, 0x78, 0x29, 0x3b, 0x20, 0x7d, 0x0a, 0x76, // ec2(_x, _x); }.v
	0x65, 0x63, 0x33, 0x20, 0x76, 0x65, 0x63, 0x33, 0x5f, 0x73, 0x70, 0x6c, 0x61, 0x74, 0x28, 0x66, // ec3 vec3_splat(f
	0x6c, 0x6f, 0x61, 0x74, 0x20, 0x5f, 0x78, 0x29, 0x20, 0x7b, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, // loat _x) { retur
	0x6e, 0x20, 0x76, 0x65, 0x63, 0x33, 0x28, 0x5f, 0x78, 0x2c, 0x20, 0x5f, 0x78, 0x2c, 0x20, 0x5f, // n vec3(_x, _x, _
	0x78, 0x29, 0x3b, 0x20, 0x7d, 0x0a, 0x76, 0x65, 0x63, 0x34, 0x20, 0x76, 0x65, 0x63, 0x34, 0x5f, // x); }.vec4 vec4_
	0x73, 0x70, 0x6c, 0x61, 0x74, 0x28, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x5f, 0x78, 0x29, 0x20, // splat(float _x) 
	0x7b, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x76, 0x65, 0x63, 0x34, 0x28, 0x5f, 0x78, // { return vec4(_x
	0x2c, 0x20, 0x5f, 0x78, 0x2c, 0x20, 0x5f, 0x78, 0x2c, 0x20, 0x5f, 0x78, 0x29, 0x3b, 0x20, 0x7d, // , _x, _x, _x); }
	0x0a, 0x75, 0x76, 0x65, 0x63, 0x32, 0x20, 0x75, 0x76, 0x65, 0x63, 0x32, 0x5f, 0x73, 0x70, 0x6c, // .uvec2 uvec2_spl
	0x61, 0x74, 0x28, 0x75, 0x69, 0x6e, 0x74, 0x20, 0x5f, 0x78, 0x29, 0x20, 0x7b, 0x20, 0x72, 0x65, // at(uint _x) { re
	0x74, 0x75, 0x72, 0x6e, 0x20, 0x75, 0x76, 0x65, 0x63, 0x32, 0x28, 0x5f, 0x78, 0x2c, 0x20, 0x5f, // turn uvec2(_x, _
	0x78, 0x29, 0x3b, 0x20, 0x7d, 0x0a, 0x75, 0x76, 0x65, 0x63, 0x33, 0x20, 0x75, 0x76, 0x65, 0x63, // x); }.uvec3 uvec
	0x33, 0x5f, 0x73, 0x70, 0x6c, 0x61, 0x74, 0x28, 0x75, 0x69, 0x6e, 0x74, 0x20, 0x5f, 0x78, 0x29, // 3_splat(uint _x)
	0x20, 0x7b, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x75, 0x76, 0x65, 0x63, 0x33, 0x28, //  { return uvec3(
	0x5f, 0x78, 0x2c, 0x20, 0x5f, 0x78, 0x2c, 0x20, 0x5f, 0x78, 0x29, 0x3b, 0x20, 0x7d, 0x0a, 0x75, // _x, _x, _x); }.u
	0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x76, 0x65, 0x63, 0x34, 0x5f, 0x73, 0x70, 0x6c, 0x61, 0x74, // vec4 uvec4_splat
	0x28, 0x75, 0x69, 0x6e, 0x74, 0x20, 0x5f, 0x78, 0x29, 0x20, 0x7b, 0x20, 0x72, 0x65, 0x74, 0x75, // (uint _x) { retu
	0x72, 0x6e, 0x20, 0x75, 0x76, 0x65, 0x63, 0x34, 0x28, 0x5f, 0x78, 0x2c, 0x20, 0x5f, 0x78, 0x2c, // rn uvec4(_x, _x,
	0x20, 0x5f, 0x78, 0x2c, 0x20, 0x5f, 0x78, 0x29, 0x3b, 0x20, 0x7d, 0x0a, 0x6d, 0x61, 0x74, 0x34, //  _x, _x); }.mat4
	0x20, 0x6d, 0x74, 0x78, 0x46, 0x72, 0x6f, 0x6d, 0x52, 0x6f, 0x77, 0x73, 0x28, 0x76, 0x65, 0x63, //  mtxFromRows(vec
	0x34, 0x20, 0x5f, 0x30, 0x2c, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x5f, 0x31, 0x2c, 0x20, 0x76, // 4 _0, vec4 _1, v
	0x65, 0x63, 0x34, 0x20, 0x5f, 0x32, 0x2c, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x5f, 0x33, 0x29, // ec4 _2, vec4 _3)
	0x0a, 0x7b, 0x0a, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x74, 0x72, 0x61, 0x6e, 0x73, 0x70, // .{.return transp
	0x6f, 0x73, 0x65, 0x28, 0x6d, 0x61, 0x74, 0x34, 0x28, 0x5f, 0x30, 0x2c, 0x20, 0x5f, 0x31, 0x2c, // ose(mat4(_0, _1,
	0x20, 0x5f, 0x32, 0x2c, 0x20, 0x5f, 0x33, 0x29, 0x20, 0x29, 0x3b, 0x0a, 0x7d, 0x0a, 0x6d, 0x61, //  _2, _3) );.}.ma
	0x74, 0x34, 0x20, 0x6d, 0x74, 0x78, 0x46, 0x72, 0x6f, 0x6d, 0x43, 0x6f, 0x6c, 0x73, 0x28, 0x76, // t4 mtxFromCols(v
	0x65, 0x63, 0x34, 0x20, 0x5f, 0x30, 0x2c, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x5f, 0x31, 0x2c, // ec4 _0, vec4 _1,
	0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x5f, 0x32, 0x2c, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x5f, //  vec4 _2, vec4 _
	0x33, 0x29, 0x0a, 0x7b, 0x0a, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x6d, 0x61, 0x74, 0x34, // 3).{.return mat4
	0x28, 0x5f, 0x30, 0x2c, 0x20, 0x5f, 0x31, 0x2c, 0x20, 0x5f, 0x32, 0x2c, 0x20, 0x5f, 0x33, 0x29, // (_0, _1, _2, _3)
	0x3b, 0x0a, 0x7d, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, 0x34, // ;.}.uniform vec4
	0x20, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x52, 0x65, 0x63, 0x74, 0x3b, 0x0a, 0x75, 0x6e, 0x69, //  u_viewRect;.uni
	0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, // form vec4 u_view
	0x54, 0x65, 0x78, 0x65, 0x6c, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6d, // Texel;.uniform m
	0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, // at4 u_view;.unif
	0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x56, 0x69, // orm mat4 u_invVi
	0x65, 0x77, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x61, 0x74, 0x34, // ew;.uniform mat4
	0x20, 0x75, 0x5f, 0x70, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, //  u_proj;.uniform
	0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x50, 0x72, 0x6f, 0x6a, 0x3b, //  mat4 u_invProj;
	0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, // .uniform mat4 u_
	0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, // viewProj;.unifor
	0x6d, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x56, 0x69, 0x65, 0x77, // m mat4 u_invView
	0x50, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x61, // Proj;.uniform ma
	0x74, 0x34, 0x20, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x5b, 0x33, 0x32, 0x5d, 0x3b, 0x0a, // t4 u_model[32];.
	0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x6d, // uniform mat4 u_m
	0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, // odelView;.unifor
	0x6d, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, // m mat4 u_modelVi
	0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, // ewProj;.uniform 
	0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x61, 0x6c, 0x70, 0x68, 0x61, 0x52, 0x65, 0x66, 0x34, // vec4 u_alphaRef4
	0x3b, 0x0a, 0x6c, 0x61, 0x79, 0x6f, 0x75, 0x74, 0x28, 0x72, 0x33, 0x32, 0x75, 0x69, 0x2c, 0x20, // ;.layout(r32ui, 
	0x62, 0x69, 0x6e, 0x64, 0x69, 0x6e, 0x67, 0x3d, 0x35, 0x29, 0x20, 0x75, 0x6e, 0x69, 0x66, 0x6f, // binding=5) unifo
	0x72, 0x6d, 0x20, 0x75, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x32, 0x44, 0x20, 0x75, 0x5f, 0x72, 0x61, // rm uimage2D u_ra
	0x79, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, 0x48, 0x65, 0x61, 0x64, 0x65, 0x72, 0x53, 0x61, 0x6d, // yBundleHeaderSam
	0x70, 0x6c, 0x65, 0x72, 0x3b, 0x0a, 0x6c, 0x61, 0x79, 0x6f, 0x75, 0x74, 0x28, 0x72, 0x67, 0x62, // pler;.layout(rgb
	0x61, 0x33, 0x32, 0x75, 0x69, 0x2c, 0x20, 0x62, 0x69, 0x6e, 0x64, 0x69, 0x6e, 0x67, 0x3d, 0x36, // a32ui, binding=6
	0x29, 0x20, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x75, 0x69, 0x6d, 0x61, 0x67, 0x65, // ) uniform uimage
	0x32, 0x44, 0x20, 0x75, 0x5f, 0x72, 0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, 0x44, 0x61, // 2D u_rayBundleDa
	0x74, 0x61, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x3b, 0x0a, 0x6c, 0x61, 0x79, 0x6f, 0x75, // taSampler;.layou
	0x74, 0x28, 0x72, 0x33, 0x32, 0x75, 0x69, 0x2c, 0x20, 0x62, 0x69, 0x6e, 0x64, 0x69, 0x6e, 0x67, // t(r32ui, binding
	0x3d, 0x37, 0x29, 0x20, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x75, 0x69, 0x6d, 0x61, // =7) uniform uima
	0x67, 0x65, 0x32, 0x44, 0x20, 0x75, 0x5f, 0x72, 0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, // ge2D u_rayBundle
	0x4c, 0x69, 0x67, 0x68, 0x74, 0x6d, 0x61, 0x70, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x3b, // LightmapSampler;
	0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, // .uniform vec4 u_
	0x6c, 0x69, 0x67, 0x68, 0x74, 0x6d, 0x61, 0x70, 0x53, 0x69, 0x7a, 0x65, 0x5f, 0x64, 0x61, 0x74, // lightmapSize_dat
	0x61, 0x53, 0x69, 0x7a, 0x65, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, // aSize;.uniform v
	0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x72, 0x61, 0x79, 0x4e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x3b, // ec4 u_rayNormal;
	0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, // .uniform vec4 u_
	0x73, 0x6b, 0x79, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x65, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, // skyColor_enabled
	0x3b, 0x0a, 0x69, 0x76, 0x65, 0x63, 0x32, 0x20, 0x72, 0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, 0x6c, // ;.ivec2 rayBundl
	0x65, 0x44, 0x61, 0x74, 0x61, 0x55, 0x76, 0x28, 0x75, 0x69, 0x6e, 0x74, 0x20, 0x6f, 0x66, 0x66, // eDataUv(uint off
	0x73, 0x65, 0x74, 0x2c, 0x20, 0x75, 0x69, 0x6e, 0x74, 0x20, 0x70, 0x69, 0x78, 0x65, 0x6c, 0x29, // set, uint pixel)
	0x0a, 0x7b, 0x0a, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x69, 0x76, 0x65, 0x63, 0x32, 0x28, // .{.return ivec2(
	0x28, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x20, 0x2a, 0x20, 0x33, 0x75, 0x20, 0x2b, 0x20, 0x70, // (offset * 3u + p
	0x69, 0x78, 0x65, 0x6c, 0x29, 0x20, 0x25, 0x20, 0x75, 0x69, 0x6e, 0x74, 0x28, 0x75, 0x5f, 0x6c, // ixel) % uint(u_l
	0x69, 0x67, 0x68, 0x74, 0x6d, 0x61, 0x70, 0x53, 0x69, 0x7a, 0x65, 0x5f, 0x64, 0x61, 0x74, 0x61, // ightmapSize_data
	0x53, 0x69, 0x7a, 0x65, 0x2e, 0x7a, 0x29, 0x2c, 0x20, 0x28, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, // Size.z), (offset
	0x20, 0x2a, 0x20, 0x33, 0x75, 0x20, 0x2b, 0x20, 0x70, 0x69, 0x78, 0x65, 0x6c, 0x29, 0x20, 0x2f, //  * 3u + pixel) /
	0x20, 0x75, 0x69, 0x6e, 0x74, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x6d, 0x61, 0x70, //  uint(u_lightmap
	0x53, 0x69, 0x7a, 0x65, 0x5f, 0x64, 0x61, 0x74, 0x61, 0x53, 0x69, 0x7a, 0x65, 0x2e, 0x7a, 0x29, // Size_dataSize.z)
	0x29, 0x3b, 0x0a, 0x7d, 0x0a, 0x69, 0x76, 0x65, 0x63, 0x32, 0x20, 0x72, 0x61, 0x79, 0x42, 0x75, // );.}.ivec2 rayBu
	0x6e, 0x64, 0x6c, 0x65, 0x4c, 0x69, 0x67, 0x68, 0x74, 0x6d, 0x61, 0x70, 0x44, 0x61, 0x74, 0x61, // ndleLightmapData
	0x55, 0x76, 0x28, 0x76, 0x65, 0x63, 0x32, 0x20, 0x75, 0x76, 0x2c, 0x20, 0x75, 0x69, 0x6e, 0x74, // Uv(vec2 uv, uint
	0x20, 0x70, 0x69, 0x78, 0x65, 0x6c, 0x29, 0x0a, 0x7b, 0x0a, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, //  pixel).{.return
	0x20, 0x69, 0x76, 0x65, 0x63, 0x32, 0x28, 0x75, 0x69, 0x6e, 0x74, 0x28, 0x75, 0x76, 0x2e, 0x78, //  ivec2(uint(uv.x
	0x20, 0x2a, 0x20, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x6d, 0x61, 0x70, 0x53, 0x69, 0x7a, //  * u_lightmapSiz
	0x65, 0x5f, 0x64, 0x61, 0x74, 0x61, 0x53, 0x69, 0x7a, 0x65, 0x2e, 0x78, 0x79, 0x2e, 0x78, 0x29, // e_dataSize.xy.x)
	0x20, 0x2a, 0x20, 0x34, 0x75, 0x20, 0x2b, 0x20, 0x70, 0x69, 0x78, 0x65, 0x6c, 0x2c, 0x20, 0x75, //  * 4u + pixel, u
	0x69, 0x6e, 0x74, 0x28, 0x75, 0x76, 0x2e, 0x79, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x6c, 0x69, 0x67, // int(uv.y * u_lig
	0x68, 0x74, 0x6d, 0x61, 0x70, 0x53, 0x69, 0x7a, 0x65, 0x5f, 0x64, 0x61, 0x74, 0x61, 0x53, 0x69, // htmapSize_dataSi
	0x7a, 0x65, 0x2e, 0x78, 0x79, 0x2e, 0x79, 0x29, 0x29, 0x3b, 0x0a, 0x7d, 0x0a, 0x73, 0x74, 0x72, // ze.xy.y));.}.str
	0x75, 0x63, 0x74, 0x20, 0x4e, 0x6f, 0x64, 0x65, 0x0a, 0x7b, 0x0a, 0x76, 0x65, 0x63, 0x33, 0x20, // uct Node.{.vec3 
	0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x64, 0x65, 0x70, // color;.float dep
	0x74, 0x68, 0x3b, 0x0a, 0x76, 0x65, 0x63, 0x33, 0x20, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x3b, // th;.vec3 normal;
	0x0a, 0x76, 0x65, 0x63, 0x32, 0x20, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x3b, 0x0a, // .vec2 texcoord;.
	0x7d, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x28, 0x29, 0x0a, 0x7b, // };.void main().{
	0x0a, 0x75, 0x69, 0x6e, 0x74, 0x20, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x20, 0x3d, 0x20, 0x69, // .uint offset = i
	0x6d, 0x61, 0x67, 0x65, 0x4c, 0x6f, 0x61, 0x64, 0x28, 0x75, 0x5f, 0x72, 0x61, 0x79, 0x42, 0x75, // mageLoad(u_rayBu
	0x6e, 0x64, 0x6c, 0x65, 0x48, 0x65, 0x61, 0x64, 0x65, 0x72, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, // ndleHeaderSample
	0x72, 0x2c, 0x20, 0x69, 0x76, 0x65, 0x63, 0x32, 0x28, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, // r, ivec2(gl_Frag
	0x43, 0x6f, 0x6f, 0x72, 0x64, 0x2e, 0x78, 0x79, 0x29, 0x29, 0x2e, 0x78, 0x3b, 0x0a, 0x69, 0x66, // Coord.xy)).x;.if
	0x20, 0x28, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x20, 0x21, 0x3d, 0x20, 0x30, 0x78, 0x66, 0x66, //  (offset != 0xff
	0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x29, 0x20, 0x7b, 0x0a, 0x4e, 0x6f, 0x64, 0x65, 0x20, 0x6e, // ffffff) {.Node n
	0x6f, 0x64, 0x65, 0x73, 0x5b, 0x36, 0x34, 0x5d, 0x3b, 0x0a, 0x75, 0x69, 0x6e, 0x74, 0x20, 0x6e, // odes[64];.uint n
	0x75, 0x6d, 0x4e, 0x6f, 0x64, 0x65, 0x73, 0x20, 0x3d, 0x20, 0x30, 0x75, 0x3b, 0x0a, 0x77, 0x68, // umNodes = 0u;.wh
	0x69, 0x6c, 0x65, 0x20, 0x28, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x20, 0x21, 0x3d, 0x20, 0x30, // ile (offset != 0
	0x78, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x20, 0x26, 0x26, 0x20, 0x6e, 0x75, 0x6d, // xffffffff && num
	0x4e, 0x6f, 0x64, 0x65, 0x73, 0x20, 0x3c, 0x20, 0x36, 0x34, 0x29, 0x20, 0x7b, 0x0a, 0x75, 0x76, // Nodes < 64) {.uv
	0x65, 0x63, 0x34, 0x20, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, // ec4 color_offset
	0x20, 0x3d, 0x20, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x4c, 0x6f, 0x61, 0x64, 0x28, 0x75, 0x5f, 0x72, //  = imageLoad(u_r
	0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, 0x44, 0x61, 0x74, 0x61, 0x53, 0x61, 0x6d, 0x70, // ayBundleDataSamp
	0x6c, 0x65, 0x72, 0x2c, 0x20, 0x72, 0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, 0x44, 0x61, // ler, rayBundleDa
	0x74, 0x61, 0x55, 0x76, 0x28, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x2c, 0x20, 0x30, 0x75, 0x29, // taUv(offset, 0u)
	0x29, 0x3b, 0x0a, 0x75, 0x76, 0x65, 0x63, 0x34, 0x20, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x5f, // );.uvec4 normal_
	0x64, 0x65, 0x70, 0x74, 0x68, 0x20, 0x3d, 0x20, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x4c, 0x6f, 0x61, // depth = imageLoa
	0x64, 0x28, 0x75, 0x5f, 0x72, 0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, 0x44, 0x61, 0x74, // d(u_rayBundleDat
	0x61, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x72, 0x61, 0x79, 0x42, 0x75, 0x6e, // aSampler, rayBun
	0x64, 0x6c, 0x65, 0x44, 0x61, 0x74, 0x61, 0x55, 0x76, 0x28, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, // dleDataUv(offset
	0x2c, 0x20, 0x31, 0x75, 0x29, 0x29, 0x3b, 0x0a, 0x75, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x65, // , 1u));.uvec4 te
	0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x20, 0x3d, 0x20, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x4c, 0x6f, // xcoord = imageLo
	0x61, 0x64, 0x28, 0x75, 0x5f, 0x72, 0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, 0x44, 0x61, // ad(u_rayBundleDa
	0x74, 0x61, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x72, 0x61, 0x79, 0x42, 0x75, // taSampler, rayBu
	0x6e, 0x64, 0x6c, 0x65, 0x44, 0x61, 0x74, 0x61, 0x55, 0x76, 0x28, 0x6f, 0x66, 0x66, 0x73, 0x65, // ndleDataUv(offse
	0x74, 0x2c, 0x20, 0x32, 0x75, 0x29, 0x29, 0x3b, 0x0a, 0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, 0x6e, // t, 2u));.nodes[n
	0x75, 0x6d, 0x4e, 0x6f, 0x64, 0x65, 0x73, 0x5d, 0x2e, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x2e, 0x72, // umNodes].color.r
	0x20, 0x3d, 0x20, 0x75, 0x69, 0x6e, 0x74, 0x42, 0x69, 0x74, 0x73, 0x54, 0x6f, 0x46, 0x6c, 0x6f, //  = uintBitsToFlo
	0x61, 0x74, 0x28, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x2e, // at(color_offset.
	0x72, 0x29, 0x3b, 0x0a, 0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, 0x6e, 0x75, 0x6d, 0x4e, 0x6f, 0x64, // r);.nodes[numNod
	0x65, 0x73, 0x5d, 0x2e, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x2e, 0x67, 0x20, 0x3d, 0x20, 0x75, 0x69, // es].color.g = ui
	0x6e, 0x74, 0x42, 0x69, 0x74, 0x73, 0x54, 0x6f, 0x46, 0x6c, 0x6f, 0x61, 0x74, 0x28, 0x63, 0x6f, // ntBitsToFloat(co
	0x6c, 0x6f, 0x72, 0x5f, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x2e, 0x67, 0x29, 0x3b, 0x0a, 0x6e, // lor_offset.g);.n
	0x6f, 0x64, 0x65, 0x73, 0x5b, 0x6e, 0x75, 0x6d, 0x4e, 0x6f, 0x64, 0x65, 0x73, 0x5d, 0x2e, 0x63, // odes[numNodes].c
	0x6f, 0x6c, 0x6f, 0x72, 0x2e, 0x62, 0x20, 0x3d, 0x20, 0x75, 0x69, 0x6e, 0x74, 0x42, 0x69, 0x74, // olor.b = uintBit
	0x73, 0x54, 0x6f, 0x46, 0x6c, 0x6f, 0x61, 0x74, 0x28, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x6f, // sToFloat(color_o
	0x66, 0x66, 0x73, 0x65, 0x74, 0x2e, 0x62, 0x29, 0x3b, 0x0a, 0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, // ffset.b);.nodes[
	0x6e, 0x75, 0x6d, 0x4e, 0x6f, 0x64, 0x65, 0x73, 0x5d, 0x2e, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, // numNodes].normal
	0x2e, 0x78, 0x20, 0x3d, 0x20, 0x75, 0x69, 0x6e, 0x74, 0x42, 0x69, 0x74, 0x73, 0x54, 0x6f, 0x46, // .x = uintBitsToF
	0x6c, 0x6f, 0x61, 0x74, 0x28, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x5f, 0x64, 0x65, 0x70, 0x74, // loat(normal_dept
	0x68, 0x2e, 0x78, 0x29, 0x3b, 0x0a, 0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, 0x6e, 0x75, 0x6d, 0x4e, // h.x);.nodes[numN
	0x6f, 0x64, 0x65, 0x73, 0x5d, 0x2e, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x2e, 0x79, 0x20, 0x3d, // odes].normal.y =
	0x20, 0x75, 0x69, 0x6e, 0x74, 0x42, 0x69, 0x74, 0x73, 0x54, 0x6f, 0x46, 0x6c, 0x6f, 0x61, 0x74, //  uintBitsToFloat
	0x28, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x5f, 0x64, 0x65, 0x70, 0x74, 0x68, 0x2e, 0x79, 0x29, // (normal_depth.y)
	0x3b, 0x0a, 0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, 0x6e, 0x75, 0x6d, 0x4e, 0x6f, 0x64, 0x65, 0x73, // ;.nodes[numNodes
	0x5d, 0x2e, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x2e, 0x7a, 0x20, 0x3d, 0x20, 0x75, 0x69, 0x6e, // ].normal.z = uin
	0x74, 0x42, 0x69, 0x74, 0x73, 0x54, 0x6f, 0x46, 0x6c, 0x6f, 0x61, 0x74, 0x28, 0x6e, 0x6f, 0x72, // tBitsToFloat(nor
	0x6d, 0x61, 0x6c, 0x5f, 0x64, 0x65, 0x70, 0x74, 0x68, 0x2e, 0x7a, 0x29, 0x3b, 0x0a, 0x6e, 0x6f, // mal_depth.z);.no
	0x64, 0x65, 0x73, 0x5b, 0x6e, 0x75, 0x6d, 0x4e, 0x6f, 0x64, 0x65, 0x73, 0x5d, 0x2e, 0x64, 0x65, // des[numNodes].de
	0x70, 0x74, 0x68, 0x20, 0x3d, 0x20, 0x75, 0x69, 0x6e, 0x74, 0x42, 0x69, 0x74, 0x73, 0x54, 0x6f, // pth = uintBitsTo
	0x46, 0x6c, 0x6f, 0x61, 0x74, 0x28, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x5f, 0x64, 0x65, 0x70, // Float(normal_dep
	0x74, 0x68, 0x2e, 0x77, 0x29, 0x3b, 0x0a, 0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, 0x6e, 0x75, 0x6d, // th.w);.nodes[num
	0x4e, 0x6f, 0x64, 0x65, 0x73, 0x5d, 0x2e, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x20, // Nodes].texcoord 
	0x3d, 0x20, 0x76, 0x65, 0x63, 0x32, 0x28, 0x75, 0x69, 0x6e, 0x74, 0x42, 0x69, 0x74, 0x73, 0x54, // = vec2(uintBitsT
	0x6f, 0x46, 0x6c, 0x6f, 0x61, 0x74, 0x28, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x2e, // oFloat(texcoord.
	0x78, 0x29, 0x2c, 0x20, 0x75, 0x69, 0x6e, 0x74, 0x42, 0x69, 0x74, 0x73, 0x54, 0x6f, 0x46, 0x6c, // x), uintBitsToFl
	0x6f, 0x61, 0x74, 0x28, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x2e, 0x79, 0x29, 0x29, // oat(texcoord.y))
	0x3b, 0x0a, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x20, 0x3d, 0x20, 0x63, 0x6f, 0x6c, 0x6f, 0x72, // ;.offset = color
	0x5f, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x2e, 0x77, 0x3b, 0x0a, 0x6e, 0x75, 0x6d, 0x4e, 0x6f, // _offset.w;.numNo
	0x64, 0x65, 0x73, 0x2b, 0x2b, 0x3b, 0x0a, 0x7d, 0x0a, 0x76, 0x65, 0x63, 0x33, 0x20, 0x6e, 0x6f, // des++;.}.vec3 no
	0x64, 0x65, 0x52, 0x61, 0x64, 0x69, 0x61, 0x6e, 0x63, 0x65, 0x5b, 0x36, 0x34, 0x5d, 0x3b, 0x0a, // deRadiance[64];.
	0x66, 0x6f, 0x72, 0x20, 0x28, 0x75, 0x69, 0x6e, 0x74, 0x20, 0x69, 0x20, 0x3d, 0x20, 0x30, 0x75, // for (uint i = 0u
	0x3b, 0x20, 0x69, 0x20, 0x3c, 0x20, 0x6e, 0x75, 0x6d, 0x4e, 0x6f, 0x64, 0x65, 0x73, 0x3b, 0x20, // ; i < numNodes; 
	0x69, 0x2b, 0x2b, 0x29, 0x20, 0x7b, 0x0a, 0x66, 0x6f, 0x72, 0x20, 0x28, 0x75, 0x69, 0x6e, 0x74, // i++) {.for (uint
	0x20, 0x6a, 0x20, 0x3d, 0x20, 0x69, 0x20, 0x2b, 0x20, 0x31, 0x75, 0x3b, 0x20, 0x6a, 0x20, 0x3c, //  j = i + 1u; j <
	0x20, 0x6e, 0x75, 0x6d, 0x4e, 0x6f, 0x64, 0x65, 0x73, 0x3b, 0x20, 0x6a, 0x2b, 0x2b, 0x29, 0x20, //  numNodes; j++) 
	0x7b, 0x0a, 0x69, 0x66, 0x20, 0x28, 0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, 0x69, 0x5d, 0x2e, 0x64, // {.if (nodes[i].d
	0x65, 0x70, 0x74, 0x68, 0x20, 0x3e, 0x20, 0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, 0x6a, 0x5d, 0x2e, // epth > nodes[j].
	0x64, 0x65, 0x70, 0x74, 0x68, 0x20, 0x7c, 0x7c, 0x20, 0x28, 0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, // depth || (nodes[
	0x69, 0x5d, 0x2e, 0x64, 0x65, 0x70, 0x74, 0x68, 0x20, 0x3d, 0x3d, 0x20, 0x6e, 0x6f, 0x64, 0x65, // i].depth == node
	0x73, 0x5b, 0x6a, 0x5d, 0x2e, 0x64, 0x65, 0x70, 0x74, 0x68, 0x20, 0x26, 0x26, 0x20, 0x64, 0x6f, // s[j].depth && do
	0x74, 0x28, 0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, 0x69, 0x5d, 0x2e, 0x6e, 0x6f, 0x72, 0x6d, 0x61, // t(nodes[i].norma
	0x6c, 0x2c, 0x20, 0x75, 0x5f, 0x72, 0x61, 0x79, 0x4e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x2e, 0x78, // l, u_rayNormal.x
	0x79, 0x7a, 0x29, 0x20, 0x3e, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x4e, 0x6f, // yz) > 0.0)) {.No
	0x64, 0x65, 0x20, 0x74, 0x65, 0x6d, 0x70, 0x20, 0x3d, 0x20, 0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, // de temp = nodes[
	0x69, 0x5d, 0x3b, 0x0a, 0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, 0x69, 0x5d, 0x20, 0x3d, 0x20, 0x6e, // i];.nodes[i] = n
	0x6f, 0x64, 0x65, 0x73, 0x5b, 0x6a, 0x5d, 0x3b, 0x0a, 0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, 0x6a, // odes[j];.nodes[j
	0x5d, 0x20, 0x3d, 0x20, 0x74, 0x65, 0x6d, 0x70, 0x3b, 0x0a, 0x7d, 0x0a, 0x7d, 0x0a, 0x6e, 0x6f, // ] = temp;.}.}.no
	0x64, 0x65, 0x52, 0x61, 0x64, 0x69, 0x61, 0x6e, 0x63, 0x65, 0x5b, 0x69, 0x5d, 0x20, 0x3d, 0x20, // deRadiance[i] = 
	0x76, 0x65, 0x63, 0x33, 0x5f, 0x73, 0x70, 0x6c, 0x61, 0x74, 0x28, 0x30, 0x2e, 0x30, 0x29, 0x3b, // vec3_splat(0.0);
	0x0a, 0x7d, 0x0a, 0x69, 0x66, 0x20, 0x28, 0x6e, 0x75, 0x6d, 0x4e, 0x6f, 0x64, 0x65, 0x73, 0x20, // .}.if (numNodes 
	0x3e, 0x3d, 0x20, 0x32, 0x75, 0x29, 0x20, 0x7b, 0x0a, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x62, // >= 2u) {.float b
	0x72, 0x64, 0x66, 0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, 0x0a, 0x66, 0x6f, 0x72, 0x20, 0x28, // rdf = 1.0;.for (
	0x75, 0x69, 0x6e, 0x74, 0x20, 0x69, 0x20, 0x3d, 0x20, 0x30, 0x75, 0x3b, 0x20, 0x69, 0x20, 0x3c, // uint i = 0u; i <
	0x20, 0x6e, 0x75, 0x6d, 0x4e, 0x6f, 0x64, 0x65, 0x73, 0x20, 0x2d, 0x20, 0x31, 0x75, 0x3b, 0x20, //  numNodes - 1u; 
	0x69, 0x2b, 0x2b, 0x29, 0x20, 0x7b, 0x0a, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x6e, 0x31, 0x63, // i++) {.float n1c
	0x6f, 0x73, 0x54, 0x68, 0x65, 0x74, 0x61, 0x20, 0x3d, 0x20, 0x64, 0x6f, 0x74, 0x28, 0x6e, 0x6f, // osTheta = dot(no
	0x64, 0x65, 0x73, 0x5b, 0x69, 0x20, 0x2b, 0x20, 0x30, 0x75, 0x5d, 0x2e, 0x6e, 0x6f, 0x72, 0x6d, // des[i + 0u].norm
	0x61, 0x6c, 0x2c, 0x20, 0x75, 0x5f, 0x72, 0x61, 0x79, 0x4e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x2e, // al, u_rayNormal.
	0x78, 0x79, 0x7a, 0x29, 0x3b, 0x0a, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x6e, 0x32, 0x63, 0x6f, // xyz);.float n2co
	0x73, 0x54, 0x68, 0x65, 0x74, 0x61, 0x20, 0x3d, 0x20, 0x64, 0x6f, 0x74, 0x28, 0x6e, 0x6f, 0x64, // sTheta = dot(nod
	0x65, 0x73, 0x5b, 0x69, 0x20, 0x2b, 0x20, 0x31, 0x75, 0x5d, 0x2e, 0x6e, 0x6f, 0x72, 0x6d, 0x61, // es[i + 1u].norma
	0x6c, 0x2c, 0x20, 0x2d, 0x75, 0x5f, 0x72, 0x61, 0x79, 0x4e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x2e, // l, -u_rayNormal.
	0x78, 0x79, 0x7a, 0x29, 0x3b, 0x0a, 0x69, 0x66, 0x20, 0x28, 0x6e, 0x31, 0x63, 0x6f, 0x73, 0x54, // xyz);.if (n1cosT
	0x68, 0x65, 0x74, 0x61, 0x20, 0x3e, 0x20, 0x30, 0x2e, 0x30, 0x20, 0x26, 0x26, 0x20, 0x6e, 0x32, // heta > 0.0 && n2
	0x63, 0x6f, 0x73, 0x54, 0x68, 0x65, 0x74, 0x61, 0x20, 0x3e, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x20, // cosTheta > 0.0) 
	0x7b, 0x0a, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x63, 0x6f, 0x73, 0x54, 0x68, 0x65, 0x74, 0x61, // {.float cosTheta
	0x20, 0x3d, 0x20, 0x6e, 0x31, 0x63, 0x6f, 0x73, 0x54, 0x68, 0x65, 0x74, 0x61, 0x20, 0x2a, 0x20, //  = n1cosTheta * 
	0x6e, 0x32, 0x63, 0x6f, 0x73, 0x54, 0x68, 0x65, 0x74, 0x61, 0x3b, 0x0a, 0x6e, 0x6f, 0x64, 0x65, // n2cosTheta;.node
	0x52, 0x61, 0x64, 0x69, 0x61, 0x6e, 0x63, 0x65, 0x5b, 0x69, 0x20, 0x2b, 0x20, 0x30, 0x75, 0x5d, // Radiance[i + 0u]
	0x20, 0x3d, 0x20, 0x62, 0x72, 0x64, 0x66, 0x20, 0x2a, 0x20, 0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, //  = brdf * nodes[
	0x69, 0x20, 0x2b, 0x20, 0x31, 0x75, 0x5d, 0x2e, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x2a, 0x20, // i + 1u].color * 
	0x63, 0x6f, 0x73, 0x54, 0x68, 0x65, 0x74, 0x61, 0x3b, 0x0a, 0x6e, 0x6f, 0x64, 0x65, 0x52, 0x61, // cosTheta;.nodeRa
	0x64, 0x69, 0x61, 0x6e, 0x63, 0x65, 0x5b, 0x69, 0x20, 0x2b, 0x20, 0x31, 0x75, 0x5d, 0x20, 0x3d, // diance[i + 1u] =
	0x20, 0x62, 0x72, 0x64, 0x66, 0x20, 0x2a, 0x20, 0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, 0x69, 0x20, //  brdf * nodes[i 
	0x2b, 0x20, 0x30, 0x75, 0x5d, 0x2e, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x2a, 0x20, 0x63, 0x6f, // + 0u].color * co
	0x73, 0x54, 0x68, 0x65, 0x74, 0x61, 0x3b, 0x0a, 0x7d, 0x0a, 0x7d, 0x0a, 0x7d, 0x0a, 0x69, 0x66, // sTheta;.}.}.}.if
	0x20, 0x28, 0x75, 0x69, 0x6e, 0x74, 0x28, 0x75, 0x5f, 0x73, 0x6b, 0x79, 0x43, 0x6f, 0x6c, 0x6f, //  (uint(u_skyColo
	0x72, 0x5f, 0x65, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, 0x2e, 0x77, 0x29, 0x20, 0x21, 0x3d, 0x20, // r_enabled.w) != 
	0x30, 0x75, 0x20, 0x26, 0x26, 0x20, 0x6e, 0x75, 0x6d, 0x4e, 0x6f, 0x64, 0x65, 0x73, 0x20, 0x3e, // 0u && numNodes >
	0x20, 0x30, 0x75, 0x29, 0x20, 0x7b, 0x0a, 0x69, 0x66, 0x20, 0x28, 0x64, 0x6f, 0x74, 0x28, 0x6e, //  0u) {.if (dot(n
	0x6f, 0x64, 0x65, 0x73, 0x5b, 0x30, 0x75, 0x5d, 0x2e, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x2c, // odes[0u].normal,
	0x20, 0x2d, 0x75, 0x5f, 0x72, 0x61, 0x79, 0x4e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x2e, 0x78, 0x79, //  -u_rayNormal.xy
	0x7a, 0x29, 0x20, 0x3e, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x0a, 0x6e, 0x6f, 0x64, 0x65, 0x52, 0x61, // z) > 0.0).nodeRa
	0x64, 0x69, 0x61, 0x6e, 0x63, 0x65, 0x5b, 0x30, 0x75, 0x5d, 0x20, 0x3d, 0x20, 0x75, 0x5f, 0x73, // diance[0u] = u_s
	0x6b, 0x79, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x65, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, 0x2e, // kyColor_enabled.
	0x72, 0x67, 0x62, 0x3b, 0x0a, 0x69, 0x66, 0x20, 0x28, 0x64, 0x6f, 0x74, 0x28, 0x6e, 0x6f, 0x64, // rgb;.if (dot(nod
	0x65, 0x73, 0x5b, 0x6e, 0x75, 0x6d, 0x4e, 0x6f, 0x64, 0x65, 0x73, 0x20, 0x2d, 0x20, 0x31, 0x75, // es[numNodes - 1u
	0x5d, 0x2e, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x2c, 0x20, 0x75, 0x5f, 0x72, 0x61, 0x79, 0x4e, // ].normal, u_rayN
	0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x20, 0x3e, 0x20, 0x30, 0x2e, 0x30, // ormal.xyz) > 0.0
	0x29, 0x0a, 0x6e, 0x6f, 0x64, 0x65, 0x52, 0x61, 0x64, 0x69, 0x61, 0x6e, 0x63, 0x65, 0x5b, 0x6e, // ).nodeRadiance[n
	0x75, 0x6d, 0x4e, 0x6f, 0x64, 0x65, 0x73, 0x20, 0x2d, 0x20, 0x31, 0x75, 0x5d, 0x20, 0x3d, 0x20, // umNodes - 1u] = 
	0x75, 0x5f, 0x73, 0x6b, 0x79, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x65, 0x6e, 0x61, 0x62, 0x6c, // u_skyColor_enabl
	0x65, 0x64, 0x2e, 0x72, 0x67, 0x62, 0x3b, 0x0a, 0x7d, 0x0a, 0x66, 0x6f, 0x72, 0x20, 0x28, 0x75, // ed.rgb;.}.for (u
	0x69, 0x6e, 0x74, 0x20, 0x6a, 0x20, 0x3d, 0x20, 0x30, 0x75, 0x3b, 0x20, 0x6a, 0x20, 0x3c, 0x20, // int j = 0u; j < 
	0x6e, 0x75, 0x6d, 0x4e, 0x6f, 0x64, 0x65, 0x73, 0x3b, 0x20, 0x6a, 0x2b, 0x2b, 0x29, 0x20, 0x7b, // numNodes; j++) {
	0x0a, 0x76, 0x65, 0x63, 0x33, 0x20, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x6e, 0x6f, // .vec3 color = no
	0x64, 0x65, 0x52, 0x61, 0x64, 0x69, 0x61, 0x6e, 0x63, 0x65, 0x5b, 0x6a, 0x5d, 0x3b, 0x0a, 0x76, // deRadiance[j];.v
	0x65, 0x63, 0x32, 0x20, 0x75, 0x76, 0x20, 0x3d, 0x20, 0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, 0x6a, // ec2 uv = nodes[j
	0x5d, 0x2e, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x3b, 0x0a, 0x69, 0x66, 0x20, 0x28, // ].texcoord;.if (
	0x75, 0x76, 0x2e, 0x78, 0x20, 0x3e, 0x20, 0x30, 0x2e, 0x30, 0x20, 0x26, 0x26, 0x20, 0x75, 0x76, // uv.x > 0.0 && uv
	0x2e, 0x79, 0x20, 0x3e, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x20, 0x7b, 0x0a, 0x69, 0x6d, 0x61, 0x67, // .y > 0.0) {.imag
	0x65, 0x41, 0x74, 0x6f, 0x6d, 0x69, 0x63, 0x41, 0x64, 0x64, 0x28, 0x75, 0x5f, 0x72, 0x61, 0x79, // eAtomicAdd(u_ray
	0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, 0x4c, 0x69, 0x67, 0x68, 0x74, 0x6d, 0x61, 0x70, 0x53, 0x61, // BundleLightmapSa
	0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x72, 0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, // mpler, rayBundle
	0x4c, 0x69, 0x67, 0x68, 0x74, 0x6d, 0x61, 0x70, 0x44, 0x61, 0x74, 0x61, 0x55, 0x76, 0x28, 0x75, // LightmapDataUv(u
	0x76, 0x2c, 0x20, 0x30, 0x75, 0x29, 0x2c, 0x20, 0x75, 0x69, 0x6e, 0x74, 0x28, 0x63, 0x6f, 0x6c, // v, 0u), uint(col
	0x6f, 0x72, 0x2e, 0x72, 0x20, 0x2a, 0x20, 0x32, 0x35, 0x35, 0x2e, 0x30, 0x29, 0x29, 0x3b, 0x0a, // or.r * 255.0));.
	0x69, 0x6d, 0x61, 0x67, 0x65, 0x41, 0x74, 0x6f, 0x6d, 0x69, 0x63, 0x41, 0x64, 0x64, 0x28, 0x75, // imageAtomicAdd(u
	0x5f, 0x72, 0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, 0x4c, 0x69, 0x67, 0x68, 0x74, 0x6d, // _rayBundleLightm
	0x61, 0x70, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x72, 0x61, 0x79, 0x42, 0x75, // apSampler, rayBu
	0x6e, 0x64, 0x6c, 0x65, 0x4c, 0x69, 0x67, 0x68, 0x74, 0x6d, 0x61, 0x70, 0x44, 0x61, 0x74, 0x61, // ndleLightmapData
	0x55, 0x76, 0x28, 0x75, 0x76, 0x2c, 0x20, 0x31, 0x75, 0x29, 0x2c, 0x20, 0x75, 0x69, 0x6e, 0x74, // Uv(uv, 1u), uint
	0x28, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x2e, 0x67, 0x20, 0x2a, 0x20, 0x32, 0x35, 0x35, 0x2e, 0x30, // (color.g * 255.0
	0x29, 0x29, 0x3b, 0x0a, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x41, 0x74, 0x6f, 0x6d, 0x69, 0x63, 0x41, // ));.imageAtomicA
	0x64, 0x64, 0x28, 0x75, 0x5f, 0x72, 0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, 0x4c, 0x69, // dd(u_rayBundleLi
	0x67, 0x68, 0x74, 0x6d, 0x61, 0x70, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x72, // ghtmapSampler, r
	0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, 0x4c, 0x69, 0x67, 0x68, 0x74, 0x6d, 0x61, 0x70, // ayBundleLightmap
	0x44, 0x61, 0x74, 0x61, 0x55, 0x76, 0x28, 0x75, 0x76, 0x2c, 0x20, 0x32, 0x75, 0x29, 0x2c, 0x20, // DataUv(uv, 2u), 
	0x75, 0x69, 0x6e, 0x74, 0x28, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x2e, 0x62, 0x20, 0x2a, 0x20, 0x32, // uint(color.b * 2
	0x35, 0x35, 0x2e, 0x30, 0x29, 0x29, 0x3b, 0x0a, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x41, 0x74, 0x6f, // 55.0));.imageAto
	0x6d, 0x69, 0x63, 0x41, 0x64, 0x64, 0x28, 0x75, 0x5f, 0x72, 0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, // micAdd(u_rayBund
	0x6c, 0x65, 0x4c, 0x69, 0x67, 0x68, 0x74, 0x6d, 0x61, 0x70, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, // leLightmapSample
	0x72, 0x2c, 0x20, 0x72, 0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, 0x4c, 0x69, 0x67, 0x68, // r, rayBundleLigh
	0x74, 0x6d, 0x61, 0x70, 0x44, 0x61, 0x74, 0x61, 0x55, 0x76, 0x28, 0x75, 0x76, 0x2c, 0x20, 0x33, // tmapDataUv(uv, 3
	0x75, 0x29, 0x2c, 0x20, 0x31, 0x75, 0x29, 0x3b, 0x0a, 0x7d, 0x0a, 0x7d, 0x0a, 0x7d, 0x0a, 0x7d, // u), 1u);.}.}.}.}
	0x0a, 0x00,                                                                                     // ..
};