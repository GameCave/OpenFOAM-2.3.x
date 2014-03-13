CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

PROJECT ( OpenFOAM )

# Local include directories
INCLUDE_DIRECTORIES (
./src/finiteVolume/fields/fvPatchFields/basic/calculated
./src/finiteVolume/fields/fvPatchFields/fvPatchField
./src/finiteVolume/fields/surfaceFields
./src/finiteVolume/fields/volFields
./src/finiteVolume/finiteVolume/fvSchemes
./src/finiteVolume/finiteVolume/fvSolution
./src/finiteVolume/fvMatrices
./src/finiteVolume/fvMesh
./src/finiteVolume/fvMesh/fvBoundaryMesh
./src/finiteVolume/fvMesh/fvPatches/fvPatch
./src/finiteVolume/fvMesh/wallDist
./src/finiteVolume/interpolation/surfaceInterpolation/surfaceInterpolation
./src/finiteVolume/volMesh
./src/OpenFOAM/algorithms/dynamicIndexedOctree
./src/OpenFOAM/algorithms/indexedOctree
./src/OpenFOAM/containers/Dictionaries/Dictionary
./src/OpenFOAM/containers/Dictionaries/DictionaryBase
./src/OpenFOAM/containers/Dictionaries/PtrDictionary
./src/OpenFOAM/containers/Dictionaries/UDictionary
./src/OpenFOAM/containers/Dictionaries/UPtrDictionary
./src/OpenFOAM/containers/HashTables/HashPtrTable
./src/OpenFOAM/containers/HashTables/HashSet
./src/OpenFOAM/containers/HashTables/HashTable
./src/OpenFOAM/containers/HashTables/Map
./src/OpenFOAM/containers/HashTables/PtrMap
./src/OpenFOAM/containers/HashTables/StaticHashTable
./src/OpenFOAM/containers/Identifiers/Keyed
./src/OpenFOAM/containers/LinkedLists/accessTypes/ILList
./src/OpenFOAM/containers/LinkedLists/accessTypes/LList
./src/OpenFOAM/containers/LinkedLists/accessTypes/LPtrList
./src/OpenFOAM/containers/LinkedLists/accessTypes/UILList
./src/OpenFOAM/containers/LinkedLists/linkTypes/DLListBase
./src/OpenFOAM/containers/LinkedLists/linkTypes/SLListBase
./src/OpenFOAM/containers/LinkedLists/user
./src/OpenFOAM/containers/Lists/BiIndirectList
./src/OpenFOAM/containers/Lists/BinSum
./src/OpenFOAM/containers/Lists/Distribution
./src/OpenFOAM/containers/Lists/DynamicList
./src/OpenFOAM/containers/Lists/FixedList
./src/OpenFOAM/containers/Lists/Histogram
./src/OpenFOAM/containers/Lists/IndirectList
./src/OpenFOAM/containers/Lists/List
./src/OpenFOAM/containers/Lists/ListListOps
./src/OpenFOAM/containers/Lists/ListOps
./src/OpenFOAM/containers/Lists/PackedList
./src/OpenFOAM/containers/Lists/PtrList
./src/OpenFOAM/containers/Lists/SortableList
./src/OpenFOAM/containers/Lists/SubList
./src/OpenFOAM/containers/Lists/UIndirectList
./src/OpenFOAM/containers/Lists/UList
./src/OpenFOAM/containers/Lists/UPtrList
./src/OpenFOAM/containers/NamedEnum
./src/OpenFOAM/db/dictionary
./src/OpenFOAM/db/dictionary/dictionaryEntry
./src/OpenFOAM/db/dictionary/entry
./src/OpenFOAM/db/dictionary/functionEntries/calcEntry
./src/OpenFOAM/db/dictionary/functionEntries/codeStream
./src/OpenFOAM/db/dictionary/functionEntries/functionEntry
./src/OpenFOAM/db/dictionary/functionEntries/includeEntry
./src/OpenFOAM/db/dictionary/functionEntries/includeIfPresentEntry
./src/OpenFOAM/db/dictionary/functionEntries/inputModeEntry
./src/OpenFOAM/db/dictionary/functionEntries/removeEntry
./src/OpenFOAM/db/dictionary/primitiveEntry
./src/OpenFOAM/db/dynamicLibrary/codedBase
./src/OpenFOAM/db/dynamicLibrary/dlLibraryTable
./src/OpenFOAM/db/error
./src/OpenFOAM/db/functionObjects/functionObject
./src/OpenFOAM/db/functionObjects/functionObjectFile
./src/OpenFOAM/db/functionObjects/functionObjectList
./src/OpenFOAM/db/functionObjects/IOOutputFilter
./src/OpenFOAM/db/functionObjects/OutputFilterFunctionObject
./src/OpenFOAM/db/IOobject
./src/OpenFOAM/db/IOobjectList
./src/OpenFOAM/db/IOobjects/CompactIOList
./src/OpenFOAM/db/IOobjects/IOdictionary
./src/OpenFOAM/db/IOobjects/IOField
./src/OpenFOAM/db/IOobjects/IOList
./src/OpenFOAM/db/IOobjects/IOMap
./src/OpenFOAM/db/IOobjects/IOPtrList
./src/OpenFOAM/db/IOstreams
./src/OpenFOAM/db/IOstreams/Fstreams
./src/OpenFOAM/db/IOstreams/gzstream
./src/OpenFOAM/db/IOstreams/hashes
./src/OpenFOAM/db/IOstreams/IOstreams
./src/OpenFOAM/db/IOstreams/Pstreams
./src/OpenFOAM/db/IOstreams/Sstreams
./src/OpenFOAM/db/IOstreams/StringStreams
./src/OpenFOAM/db/IOstreams/token
./src/OpenFOAM/db/IOstreams/Tstreams
./src/OpenFOAM/db/objectRegistry
./src/OpenFOAM/db/regIOobject
./src/OpenFOAM/db/runTimeSelection/construction
./src/OpenFOAM/db/runTimeSelection/globalFunctions
./src/OpenFOAM/db/runTimeSelection/memberFunctions
./src/OpenFOAM/db/runTimeSelection/staticMemberFunctions
./src/OpenFOAM/db/Time
./src/OpenFOAM/db/Time/instant
./src/OpenFOAM/db/typeInfo
./src/OpenFOAM/dimensionedTypes
./src/OpenFOAM/dimensionedTypes/dimensionedScalar
./src/OpenFOAM/dimensionedTypes/dimensionedSphericalTensor
./src/OpenFOAM/dimensionedTypes/dimensionedSymmTensor
./src/OpenFOAM/dimensionedTypes/dimensionedTensor
./src/OpenFOAM/dimensionedTypes/dimensionedType
./src/OpenFOAM/dimensionedTypes/dimensionedVector
./src/OpenFOAM/dimensionSet
./src/OpenFOAM/fields/cloud
./src/OpenFOAM/fields/DimensionedFields/DimensionedField
./src/OpenFOAM/fields/DimensionedFields/DimensionedScalarField
./src/OpenFOAM/fields/DimensionedFields/DimensionedSphericalTensorField
./src/OpenFOAM/fields/DimensionedFields/DimensionedSymmTensorField
./src/OpenFOAM/fields/DimensionedFields/DimensionedTensorField
./src/OpenFOAM/fields/FieldFields/FieldField
./src/OpenFOAM/fields/FieldFields/oneFieldField
./src/OpenFOAM/fields/FieldFields/scalarFieldField
./src/OpenFOAM/fields/FieldFields/sphericalTensorFieldField
./src/OpenFOAM/fields/FieldFields/symmTensorFieldField
./src/OpenFOAM/fields/FieldFields/tensorFieldField
./src/OpenFOAM/fields/FieldFields/transformFieldField
./src/OpenFOAM/fields/FieldFields/zeroFieldField
./src/OpenFOAM/fields/Fields
./src/OpenFOAM/fields/Fields/complexFields
./src/OpenFOAM/fields/Fields/diagTensorField
./src/OpenFOAM/fields/Fields/DynamicField
./src/OpenFOAM/fields/Fields/Field
./src/OpenFOAM/fields/Fields/labelField
./src/OpenFOAM/fields/Fields/oneField
./src/OpenFOAM/fields/Fields/quaternionField
./src/OpenFOAM/fields/Fields/scalarField
./src/OpenFOAM/fields/Fields/sphericalTensorField
./src/OpenFOAM/fields/Fields/symmTensorField
./src/OpenFOAM/fields/Fields/symmTransformField
./src/OpenFOAM/fields/Fields/tensorField
./src/OpenFOAM/fields/Fields/transformField
./src/OpenFOAM/fields/Fields/transformList
./src/OpenFOAM/fields/Fields/triadField
./src/OpenFOAM/fields/Fields/uniformField
./src/OpenFOAM/fields/Fields/vector2DField
./src/OpenFOAM/fields/Fields/vectorField
./src/OpenFOAM/fields/Fields/zeroField
./src/OpenFOAM/fields/GeometricFields/GeometricField
./src/OpenFOAM/fields/GeometricFields/geometricOneField
./src/OpenFOAM/fields/GeometricFields/GeometricScalarField
./src/OpenFOAM/fields/GeometricFields/GeometricSphericalTensorField
./src/OpenFOAM/fields/GeometricFields/GeometricSymmTensorField
./src/OpenFOAM/fields/GeometricFields/GeometricTensorField
./src/OpenFOAM/fields/GeometricFields/geometricZeroField
./src/OpenFOAM/fields/GeometricFields/pointFields
./src/OpenFOAM/fields/GeometricFields/SlicedGeometricField
./src/OpenFOAM/fields/GeometricFields/transformGeometricField
./src/OpenFOAM/fields/pointPatchFields/basic/basicSymmetry
./src/OpenFOAM/fields/pointPatchFields/basic/calculated
./src/OpenFOAM/fields/pointPatchFields/basic/coupled
./src/OpenFOAM/fields/pointPatchFields/basic/fixedValue
./src/OpenFOAM/fields/pointPatchFields/basic/value
./src/OpenFOAM/fields/pointPatchFields/basic/zeroGradient
./src/OpenFOAM/fields/pointPatchFields/constraint/cyclic
./src/OpenFOAM/fields/pointPatchFields/constraint/cyclicSlip
./src/OpenFOAM/fields/pointPatchFields/constraint/empty
./src/OpenFOAM/fields/pointPatchFields/constraint/processor
./src/OpenFOAM/fields/pointPatchFields/constraint/symmetry
./src/OpenFOAM/fields/pointPatchFields/constraint/symmetryPlane
./src/OpenFOAM/fields/pointPatchFields/constraint/wedge
./src/OpenFOAM/fields/pointPatchFields/derived/codedFixedValue
./src/OpenFOAM/fields/pointPatchFields/derived/fixedNormalSlip
./src/OpenFOAM/fields/pointPatchFields/derived/slip
./src/OpenFOAM/fields/pointPatchFields/derived/timeVaryingUniformFixedValue
./src/OpenFOAM/fields/pointPatchFields/derived/uniformFixedValue
./src/OpenFOAM/fields/pointPatchFields/pointPatchField
./src/OpenFOAM/fields/ReadFields
./src/OpenFOAM/fields/UniformDimensionedFields
./src/OpenFOAM/global
./src/OpenFOAM/global/argList
./src/OpenFOAM/global/clock
./src/OpenFOAM/global/constants
./src/OpenFOAM/global/debug
./src/OpenFOAM/global/JobInfo
./src/OpenFOAM/graph
./src/OpenFOAM/graph/curve
./src/OpenFOAM/graph/writers/gnuplotGraph
./src/OpenFOAM/graph/writers/jplotGraph
./src/OpenFOAM/graph/writers/rawGraph
./src/OpenFOAM/graph/writers/xmgrGraph
./src/OpenFOAM/include
./src/OpenFOAM/interpolations/interpolateSplineXY
./src/OpenFOAM/interpolations/interpolateXY
./src/OpenFOAM/interpolations/interpolation2DTable
./src/OpenFOAM/interpolations/interpolationLookUpTable
./src/OpenFOAM/interpolations/interpolationTable
./src/OpenFOAM/interpolations/interpolationTable/tableReaders
./src/OpenFOAM/interpolations/interpolationTable/tableReaders/csv
./src/OpenFOAM/interpolations/interpolationTable/tableReaders/openFoam
./src/OpenFOAM/interpolations/interpolationWeights/interpolationWeights
./src/OpenFOAM/interpolations/interpolationWeights/linearInterpolationWeights
./src/OpenFOAM/interpolations/interpolationWeights/splineInterpolationWeights
./src/OpenFOAM/interpolations/patchToPatchInterpolation
./src/OpenFOAM/interpolations/primitivePatchInterpolation
./src/OpenFOAM/interpolations/uniformInterpolationTable
./src/OpenFOAM/matrices/DiagonalMatrix
./src/OpenFOAM/matrices/lduMatrix/lduAddressing
./src/OpenFOAM/matrices/lduMatrix/lduAddressing/lduInterface
./src/OpenFOAM/matrices/lduMatrix/lduAddressing/lduInterfaceFields/cyclicLduInterfaceField
./src/OpenFOAM/matrices/lduMatrix/lduAddressing/lduInterfaceFields/lduInterfaceField
./src/OpenFOAM/matrices/lduMatrix/lduAddressing/lduInterfaceFields/processorLduInterfaceField
./src/OpenFOAM/matrices/lduMatrix/lduAddressing/lduSchedule
./src/OpenFOAM/matrices/lduMatrix/lduMatrix
./src/OpenFOAM/matrices/LduMatrix/LduMatrix
./src/OpenFOAM/matrices/LduMatrix/LduMatrix/LduInterfaceField
./src/OpenFOAM/matrices/lduMatrix/preconditioners/diagonalPreconditioner
./src/OpenFOAM/matrices/LduMatrix/Preconditioners/DiagonalPreconditioner
./src/OpenFOAM/matrices/lduMatrix/preconditioners/DILUPreconditioner
./src/OpenFOAM/matrices/LduMatrix/Preconditioners/DILUPreconditioner
./src/OpenFOAM/matrices/lduMatrix/preconditioners/GAMGPreconditioner
./src/OpenFOAM/matrices/lduMatrix/preconditioners/noPreconditioner
./src/OpenFOAM/matrices/LduMatrix/Preconditioners/NoPreconditioner
./src/OpenFOAM/matrices/lduMatrix/smoothers/DILU
./src/OpenFOAM/matrices/lduMatrix/smoothers/DILUGaussSeidel
./src/OpenFOAM/matrices/lduMatrix/smoothers/GaussSeidel
./src/OpenFOAM/matrices/LduMatrix/Smoothers/GaussSeidel
./src/OpenFOAM/matrices/lduMatrix/smoothers/nonBlockingGaussSeidel
./src/OpenFOAM/matrices/lduMatrix/smoothers/symGaussSeidel
./src/OpenFOAM/matrices/lduMatrix/solvers/diagonalSolver
./src/OpenFOAM/matrices/LduMatrix/Solvers/DiagonalSolver
./src/OpenFOAM/matrices/lduMatrix/solvers/GAMG
./src/OpenFOAM/matrices/lduMatrix/solvers/GAMG/GAMGAgglomerations/algebraicPairGAMGAgglomeration
./src/OpenFOAM/matrices/lduMatrix/solvers/GAMG/GAMGAgglomerations/dummyAgglomeration
./src/OpenFOAM/matrices/lduMatrix/solvers/GAMG/GAMGAgglomerations/GAMGAgglomeration
./src/OpenFOAM/matrices/lduMatrix/solvers/GAMG/GAMGAgglomerations/pairGAMGAgglomeration
./src/OpenFOAM/matrices/lduMatrix/solvers/GAMG/GAMGProcAgglomerations/eagerGAMGProcAgglomeration
./src/OpenFOAM/matrices/lduMatrix/solvers/GAMG/GAMGProcAgglomerations/GAMGProcAgglomeration
./src/OpenFOAM/matrices/lduMatrix/solvers/GAMG/GAMGProcAgglomerations/manualGAMGProcAgglomeration
./src/OpenFOAM/matrices/lduMatrix/solvers/GAMG/GAMGProcAgglomerations/noneGAMGProcAgglomeration
./src/OpenFOAM/matrices/lduMatrix/solvers/GAMG/GAMGProcAgglomerations/procFacesGAMGProcAgglomeration
./src/OpenFOAM/matrices/lduMatrix/solvers/GAMG/interfaceFields/cyclicGAMGInterfaceField
./src/OpenFOAM/matrices/lduMatrix/solvers/GAMG/interfaceFields/GAMGInterfaceField
./src/OpenFOAM/matrices/lduMatrix/solvers/GAMG/interfaceFields/processorGAMGInterfaceField
./src/OpenFOAM/matrices/lduMatrix/solvers/GAMG/interfaces/cyclicGAMGInterface
./src/OpenFOAM/matrices/lduMatrix/solvers/GAMG/interfaces/GAMGInterface
./src/OpenFOAM/matrices/lduMatrix/solvers/GAMG/interfaces/processorGAMGInterface
./src/OpenFOAM/matrices/lduMatrix/solvers/smoothSolver
./src/OpenFOAM/matrices/LduMatrix/Solvers/SmoothSolver
./src/OpenFOAM/matrices/LUscalarMatrix
./src/OpenFOAM/matrices/Matrix
./src/OpenFOAM/matrices/RectangularMatrix
./src/OpenFOAM/matrices/scalarMatrices
./src/OpenFOAM/matrices/scalarMatrices/SVD
./src/OpenFOAM/matrices/simpleMatrix
./src/OpenFOAM/matrices/solution
./src/OpenFOAM/matrices/SquareMatrix
./src/OpenFOAM/matrices/SymmetricSquareMatrix
./src/OpenFOAM/matrices/tolerances
./src/OpenFOAM/memory/autoPtr
./src/OpenFOAM/memory/refCount
./src/OpenFOAM/memory/tmp
./src/OpenFOAM/memory/Xfer
./src/OpenFOAM/meshes/boundBox
./src/OpenFOAM/meshes/data
./src/OpenFOAM/meshes/GeoMesh
./src/OpenFOAM/meshes/Identifiers/DynamicID
./src/OpenFOAM/meshes/Identifiers/patch
./src/OpenFOAM/meshes/Identifiers/zones
./src/OpenFOAM/meshes/lduMesh
./src/OpenFOAM/meshes/MeshObject
./src/OpenFOAM/meshes/meshShapes/cell
./src/OpenFOAM/meshes/meshShapes/cellMatcher
./src/OpenFOAM/meshes/meshShapes/cellModel
./src/OpenFOAM/meshes/meshShapes/cellModeller
./src/OpenFOAM/meshes/meshShapes/cellShape
./src/OpenFOAM/meshes/meshShapes/edge
./src/OpenFOAM/meshes/meshShapes/face
./src/OpenFOAM/meshes/meshShapes/triFace
./src/OpenFOAM/meshes/meshTools
./src/OpenFOAM/meshes/pointMesh
./src/OpenFOAM/meshes/pointMesh/pointBoundaryMesh
./src/OpenFOAM/meshes/pointMesh/pointMeshMapper
./src/OpenFOAM/meshes/pointMesh/pointPatches/basic/coupled
./src/OpenFOAM/meshes/pointMesh/pointPatches/basic/generic
./src/OpenFOAM/meshes/pointMesh/pointPatches/constraint/cyclic
./src/OpenFOAM/meshes/pointMesh/pointPatches/constraint/cyclicSlip
./src/OpenFOAM/meshes/pointMesh/pointPatches/constraint/empty
./src/OpenFOAM/meshes/pointMesh/pointPatches/constraint/processor
./src/OpenFOAM/meshes/pointMesh/pointPatches/constraint/symmetry
./src/OpenFOAM/meshes/pointMesh/pointPatches/constraint/symmetryPlane
./src/OpenFOAM/meshes/pointMesh/pointPatches/constraint/wedge
./src/OpenFOAM/meshes/pointMesh/pointPatches/derived/coupled
./src/OpenFOAM/meshes/pointMesh/pointPatches/derived/wall
./src/OpenFOAM/meshes/pointMesh/pointPatches/facePointPatch
./src/OpenFOAM/meshes/pointMesh/pointPatches/pointPatch
./src/OpenFOAM/meshes/polyMesh
./src/OpenFOAM/meshes/polyMesh/globalMeshData
./src/OpenFOAM/meshes/polyMesh/mapPolyMesh
./src/OpenFOAM/meshes/polyMesh/mapPolyMesh/cellMapper
./src/OpenFOAM/meshes/polyMesh/mapPolyMesh/faceMapper
./src/OpenFOAM/meshes/polyMesh/mapPolyMesh/mapDistribute
./src/OpenFOAM/meshes/polyMesh/mapPolyMesh/mapSubsetMesh
./src/OpenFOAM/meshes/polyMesh/mapPolyMesh/objectMap
./src/OpenFOAM/meshes/polyMesh/polyBoundaryMesh
./src/OpenFOAM/meshes/polyMesh/polyMeshTetDecomposition
./src/OpenFOAM/meshes/polyMesh/polyPatches/basic/coupled
./src/OpenFOAM/meshes/polyMesh/polyPatches/basic/generic
./src/OpenFOAM/meshes/polyMesh/polyPatches/constraint/cyclic
./src/OpenFOAM/meshes/polyMesh/polyPatches/constraint/cyclicSlip
./src/OpenFOAM/meshes/polyMesh/polyPatches/constraint/empty
./src/OpenFOAM/meshes/polyMesh/polyPatches/constraint/processor
./src/OpenFOAM/meshes/polyMesh/polyPatches/constraint/symmetry
./src/OpenFOAM/meshes/polyMesh/polyPatches/constraint/symmetryPlane
./src/OpenFOAM/meshes/polyMesh/polyPatches/constraint/wedge
./src/OpenFOAM/meshes/polyMesh/polyPatches/derived/wall
./src/OpenFOAM/meshes/polyMesh/polyPatches/polyPatch
./src/OpenFOAM/meshes/polyMesh/syncTools
./src/OpenFOAM/meshes/polyMesh/zones/cellZone
./src/OpenFOAM/meshes/polyMesh/zones/faceZone
./src/OpenFOAM/meshes/polyMesh/zones/pointZone
./src/OpenFOAM/meshes/polyMesh/zones/zone
./src/OpenFOAM/meshes/polyMesh/zones/ZoneMesh
./src/OpenFOAM/meshes/preservePatchTypes
./src/OpenFOAM/meshes/primitiveMesh
./src/OpenFOAM/meshes/primitiveMesh/PatchTools
./src/OpenFOAM/meshes/primitiveMesh/primitivePatch
./src/OpenFOAM/meshes/primitiveMesh/PrimitivePatch
./src/OpenFOAM/meshes/primitiveShapes/line
./src/OpenFOAM/meshes/primitiveShapes/objectHit
./src/OpenFOAM/meshes/primitiveShapes/plane
./src/OpenFOAM/meshes/primitiveShapes/point
./src/OpenFOAM/meshes/primitiveShapes/point2D
./src/OpenFOAM/meshes/primitiveShapes/pyramid
./src/OpenFOAM/meshes/primitiveShapes/tetrahedron
./src/OpenFOAM/meshes/primitiveShapes/triangle
./src/OpenFOAM/meshes/ProcessorTopology
./src/OpenFOAM/meshes/treeBoundBox
./src/OpenFOAM/primitives/bools/bool
./src/OpenFOAM/primitives/bools/lists
./src/OpenFOAM/primitives/bools/Switch
./src/OpenFOAM/primitives/chars/char
./src/OpenFOAM/primitives/chars/wchar
./src/OpenFOAM/primitives/complex
./src/OpenFOAM/primitives/contiguous
./src/OpenFOAM/primitives/demandDrivenEntry
./src/OpenFOAM/primitives/DiagTensor
./src/OpenFOAM/primitives/DiagTensor/diagTensor
./src/OpenFOAM/primitives/direction
./src/OpenFOAM/primitives/functions/DataEntry/DataEntry
./src/OpenFOAM/primitives/functions/DataEntry/polynomial
./src/OpenFOAM/primitives/functions/DataEntry/Table
./src/OpenFOAM/primitives/functions/DataEntry/TableFile
./src/OpenFOAM/primitives/functions/Polynomial
./src/OpenFOAM/primitives/functions/TimeDataEntry/TimeDataEntry
./src/OpenFOAM/primitives/globalIndexAndTransform
./src/OpenFOAM/primitives/globalIndexAndTransform/vectorTensorTransform
./src/OpenFOAM/primitives/hashes/Hash
./src/OpenFOAM/primitives/hashes/Hasher
./src/OpenFOAM/primitives/hashes/SHA1
./src/OpenFOAM/primitives/ints/int
./src/OpenFOAM/primitives/ints/label
./src/OpenFOAM/primitives/ints/lists
./src/OpenFOAM/primitives/ints/long
./src/OpenFOAM/primitives/ints/longLong
./src/OpenFOAM/primitives/ints/uint
./src/OpenFOAM/primitives/ints/uLabel
./src/OpenFOAM/primitives/ints/ulong
./src/OpenFOAM/primitives/nil
./src/OpenFOAM/primitives/one
./src/OpenFOAM/primitives/ops
./src/OpenFOAM/primitives/Pair
./src/OpenFOAM/primitives/pTraits
./src/OpenFOAM/primitives/quaternion
./src/OpenFOAM/primitives/random/cachedRandom
./src/OpenFOAM/primitives/random/Random
./src/OpenFOAM/primitives/ranges/labelRange
./src/OpenFOAM/primitives/ranges/scalarRange
./src/OpenFOAM/primitives/Scalar
./src/OpenFOAM/primitives/Scalar/doubleScalar
./src/OpenFOAM/primitives/Scalar/floatScalar
./src/OpenFOAM/primitives/Scalar/lists
./src/OpenFOAM/primitives/Scalar/scalar
./src/OpenFOAM/primitives/septernion
./src/OpenFOAM/primitives/SphericalTensor
./src/OpenFOAM/primitives/SphericalTensor2D
./src/OpenFOAM/primitives/SphericalTensor2D/sphericalTensor2D
./src/OpenFOAM/primitives/SphericalTensor/labelSphericalTensor
./src/OpenFOAM/primitives/SphericalTensor/sphericalTensor
./src/OpenFOAM/primitives/strings/fileName
./src/OpenFOAM/primitives/strings/keyType
./src/OpenFOAM/primitives/strings/lists
./src/OpenFOAM/primitives/strings/string
./src/OpenFOAM/primitives/strings/stringOps
./src/OpenFOAM/primitives/strings/word
./src/OpenFOAM/primitives/strings/wordRe
./src/OpenFOAM/primitives/subModelBase
./src/OpenFOAM/primitives/Swap
./src/OpenFOAM/primitives/SymmTensor
./src/OpenFOAM/primitives/SymmTensor2D
./src/OpenFOAM/primitives/SymmTensor2D/symmTensor2D
./src/OpenFOAM/primitives/SymmTensor/labelSymmTensor
./src/OpenFOAM/primitives/SymmTensor/symmTensor
./src/OpenFOAM/primitives/Tensor
./src/OpenFOAM/primitives/Tensor2D
./src/OpenFOAM/primitives/Tensor2D/tensor2D
./src/OpenFOAM/primitives/Tensor/labelTensor
./src/OpenFOAM/primitives/Tensor/lists
./src/OpenFOAM/primitives/Tensor/tensor
./src/OpenFOAM/primitives/transform
./src/OpenFOAM/primitives/triad
./src/OpenFOAM/primitives/Tuple2
./src/OpenFOAM/primitives/Vector
./src/OpenFOAM/primitives/Vector2D
./src/OpenFOAM/primitives/Vector2D/vector2D
./src/OpenFOAM/primitives/Vector/complexVector
./src/OpenFOAM/primitives/Vector/floatVector
./src/OpenFOAM/primitives/Vector/labelVector
./src/OpenFOAM/primitives/Vector/lists
./src/OpenFOAM/primitives/VectorSpace
./src/OpenFOAM/primitives/Vector/vector
./src/OpenFOAM/primitives/zero
./src/OSspecific/POSIX
./src/OSspecific/POSIX/cpuTime
./src/OSspecific/POSIX/signals
# ./src/TurbulenceModels/turbulenceModels
./src/turbulenceModels
# ./src/turbulenceModels/incompressible
#./src/turbulenceModels/incompressible/turbulenceModel
./src/turbulenceModels/compressible
./src/turbulenceModels/compressible/turbulenceModel
./src/transportModels
./src/OpenFOAM/meshes/bandCompression
./src/OpenFOAM/global/constants/mathematical

./src/thermophysicalModels/basic/fluidThermo
./src/thermophysicalModels/basic/basicThermo
./src/combustionModels/combustionModel
./src/thermophysicalModels/reactionThermo/psiReactionThermo
./src/thermophysicalModels/basic/psiThermo
./src/thermophysicalModels/reactionThermo/mixtures/basicMultiComponentMixture
./src/thermophysicalModels/specie/speciesTable
./src/combustionModels/psiCombustionModel/psiCombustionModel
./src/thermophysicalModels/chemistryModel/chemistryModel/psiChemistryModel
./src/thermophysicalModels/chemistryModel/chemistryModel/basicChemistryModel
./src/thermophysicalModels/reactionThermo/rhoReactionThermo
./src/thermophysicalModels/basic/rhoThermo
./src/combustionModels/rhoCombustionModel/rhoCombustionModel
./src/thermophysicalModels/chemistryModel/chemistryModel/rhoChemistryModel
./src/thermophysicalModels/specie/include
./src/thermophysicalModels/specie/specie
./src/thermophysicalModels/specie/equationOfState/perfectGas
./src/thermophysicalModels/specie/equationOfState/incompressiblePerfectGas
./src/thermophysicalModels/specie/thermo/hConst
./src/thermophysicalModels/specie/thermo/janaf
./src/thermophysicalModels/specie/thermo/sensibleEnthalpy
./src/thermophysicalModels/specie/thermo/sensibleInternalEnergy
./src/thermophysicalModels/specie/thermo/thermo
./src/thermophysicalModels/specie/transport/sutherland
./src/thermophysicalModels/specie/transport/const
./src/thermophysicalModels/specie/equationOfState/icoPolynomial
./src/thermophysicalModels/specie/thermo/hPolynomial
./src/thermophysicalModels/specie/transport/polynomial
./src/combustionModels/psiCombustionModel/psiThermoCombustion
./src/combustionModels/rhoCombustionModel/rhoThermoCombustion
./src/combustionModels/singleStepCombustion
./src/thermophysicalModels/reactionThermo/mixtures/singleStepReactingMixture


  )

ADD_DEFINITIONS ( -m64 -Dlinux64 -DWM_DP -Wall -Wextra -Wno-unused-parameter -Wold-style-cast -Wnon-virtual-dtor -O3  -DNoRepository -ftemplate-depth-100 )

# Build the dependent libraries first
ADD_SUBDIRECTORY ( ./src/combustionModels )
# ADD_SUBDIRECTORY ( ./src/conversion )
# ADD_SUBDIRECTORY ( ./src/dummyThirdParty/metisDecomp )
# ADD_SUBDIRECTORY ( ./src/dummyThirdParty/MGridGen )
# ADD_SUBDIRECTORY ( ./src/dummyThirdParty/ptscotchDecomp )
# ADD_SUBDIRECTORY ( ./src/dummyThirdParty/scotchDecomp )
# ADD_SUBDIRECTORY ( ./src/dynamicFvMesh )
# ADD_SUBDIRECTORY ( ./src/dynamicMesh )
# ADD_SUBDIRECTORY ( ./src/edgeMesh )
# ADD_SUBDIRECTORY ( ./src/engine )
# ADD_SUBDIRECTORY ( ./src/fileFormats )
# ADD_SUBDIRECTORY ( ./src/finiteVolume )
# ADD_SUBDIRECTORY ( ./src/fvAgglomerationMethods/MGridGenGamgAgglomeration )
# ADD_SUBDIRECTORY ( ./src/fvAgglomerationMethods/pairPatchAgglomeration )
# ADD_SUBDIRECTORY ( ./src/fvMotionSolver )
# ADD_SUBDIRECTORY ( ./src/fvOptions )
# ADD_SUBDIRECTORY ( ./src/genericPatchFields )
# ADD_SUBDIRECTORY ( ./src/lagrangian/basic )
# ADD_SUBDIRECTORY ( ./src/lagrangian/coalCombustion )
# ADD_SUBDIRECTORY ( ./src/lagrangian/distributionModels )
# ADD_SUBDIRECTORY ( ./src/lagrangian/dsmc )
# ADD_SUBDIRECTORY ( ./src/lagrangian/intermediate )
# ADD_SUBDIRECTORY ( ./src/lagrangian/molecularDynamics/molecularMeasurements )
# ADD_SUBDIRECTORY ( ./src/lagrangian/molecularDynamics/molecule )
# ADD_SUBDIRECTORY ( ./src/lagrangian/molecularDynamics/potential )
# ADD_SUBDIRECTORY ( ./src/lagrangian/solidParticle )
# ADD_SUBDIRECTORY ( ./src/lagrangian/spray )
# ADD_SUBDIRECTORY ( ./src/lagrangian/turbulence )
# ADD_SUBDIRECTORY ( ./src/mesh/autoMesh )
# ADD_SUBDIRECTORY ( ./src/mesh/blockMesh )
# ADD_SUBDIRECTORY ( ./src/mesh/extrudeModel )
# ADD_SUBDIRECTORY ( ./src/meshTools )
# ADD_SUBDIRECTORY ( ./src/ODE )
# ADD_SUBDIRECTORY ( ./src/OpenFOAM )
# ADD_SUBDIRECTORY ( ./src/OSspecific/POSIX )
# ADD_SUBDIRECTORY ( ./src/parallel/decompose/decompose )
# ADD_SUBDIRECTORY ( ./src/parallel/decompose/decompositionMethods )
# ADD_SUBDIRECTORY ( ./src/parallel/decompose/metisDecomp )
# ADD_SUBDIRECTORY ( ./src/parallel/decompose/ptscotchDecomp )
# ADD_SUBDIRECTORY ( ./src/parallel/decompose/scotchDecomp )
# ADD_SUBDIRECTORY ( ./src/parallel/distributed )
# ADD_SUBDIRECTORY ( ./src/parallel/reconstruct/reconstruct )
# ADD_SUBDIRECTORY ( ./src/postProcessing/foamCalcFunctions )
# ADD_SUBDIRECTORY ( ./src/postProcessing/functionObjects/cloud )
# ADD_SUBDIRECTORY ( ./src/postProcessing/functionObjects/field )
# ADD_SUBDIRECTORY ( ./src/postProcessing/functionObjects/forces )
# ADD_SUBDIRECTORY ( ./src/postProcessing/functionObjects/fvTools )
# ADD_SUBDIRECTORY ( ./src/postProcessing/functionObjects/IO )
# ADD_SUBDIRECTORY ( ./src/postProcessing/functionObjects/jobControl )
# ADD_SUBDIRECTORY ( ./src/postProcessing/functionObjects/systemCall )
# ADD_SUBDIRECTORY ( ./src/postProcessing/functionObjects/utilities )
# ADD_SUBDIRECTORY ( ./src/postProcessing/postCalc )
ADD_SUBDIRECTORY ( ./src/Pstream/dummy )
# ADD_SUBDIRECTORY ( ./src/Pstream/gamma )
# ADD_SUBDIRECTORY ( ./src/Pstream/mpi )
# ADD_SUBDIRECTORY ( ./src/randomProcesses )
# ADD_SUBDIRECTORY ( ./src/regionCoupled )
# ADD_SUBDIRECTORY ( ./src/regionModels/pyrolysisModels )
# ADD_SUBDIRECTORY ( ./src/regionModels/regionCoupling )
# ADD_SUBDIRECTORY ( ./src/regionModels/regionModel )
# ADD_SUBDIRECTORY ( ./src/regionModels/surfaceFilmModels )
# ADD_SUBDIRECTORY ( ./src/regionModels/surfaceFilmModels/derivedFvPatchFields/wallFunctions )
# ADD_SUBDIRECTORY ( ./src/regionModels/thermalBaffleModels )
# ADD_SUBDIRECTORY ( ./src/renumber/renumberMethods )
# ADD_SUBDIRECTORY ( ./src/renumber/SloanRenumber )
# ADD_SUBDIRECTORY ( ./src/renumber/zoltanRenumber )
# ADD_SUBDIRECTORY ( ./src/sampling )
# ADD_SUBDIRECTORY ( ./src/sixDoFRigidBodyMotion )
# ADD_SUBDIRECTORY ( ./src/surfMesh )
# ADD_SUBDIRECTORY ( ./src/thermophysicalModels/barotropicCompressibilityModel )
# ADD_SUBDIRECTORY ( ./src/thermophysicalModels/basic )
# ADD_SUBDIRECTORY ( ./src/thermophysicalModels/chemistryModel )
# ADD_SUBDIRECTORY ( ./src/thermophysicalModels/laminarFlameSpeed )
# ADD_SUBDIRECTORY ( ./src/thermophysicalModels/properties/liquidMixtureProperties )
# ADD_SUBDIRECTORY ( ./src/thermophysicalModels/properties/liquidProperties )
# ADD_SUBDIRECTORY ( ./src/thermophysicalModels/properties/solidMixtureProperties )
# ADD_SUBDIRECTORY ( ./src/thermophysicalModels/properties/solidProperties )
# ADD_SUBDIRECTORY ( ./src/thermophysicalModels/radiationModels )
# ADD_SUBDIRECTORY ( ./src/thermophysicalModels/reactionThermo )
# ADD_SUBDIRECTORY ( ./src/thermophysicalModels/SLGThermo )
# ADD_SUBDIRECTORY ( ./src/thermophysicalModels/solidChemistryModel )
# ADD_SUBDIRECTORY ( ./src/thermophysicalModels/solidSpecie )
# ADD_SUBDIRECTORY ( ./src/thermophysicalModels/solidThermo )
# ADD_SUBDIRECTORY ( ./src/thermophysicalModels/specie )
# ADD_SUBDIRECTORY ( ./src/thermophysicalModels/thermophysicalFunctions )
# ADD_SUBDIRECTORY ( ./src/topoChangerFvMesh )
# ADD_SUBDIRECTORY ( ./src/transportModels/incompressible )
# ADD_SUBDIRECTORY ( ./src/transportModels/interfaceProperties )
# ADD_SUBDIRECTORY ( ./src/transportModels/twoPhaseMixture )
# ADD_SUBDIRECTORY ( ./src/transportModels/twoPhaseProperties )
# ADD_SUBDIRECTORY ( ./src/triSurface )
# ADD_SUBDIRECTORY ( ./src/TurbulenceModels/compressible )
# ADD_SUBDIRECTORY ( ./src/turbulenceModels/compressible/LES )
# ADD_SUBDIRECTORY ( ./src/turbulenceModels/compressible/RAS )
# ADD_SUBDIRECTORY ( ./src/turbulenceModels/compressible/turbulenceModel )
# ADD_SUBDIRECTORY ( ./src/turbulenceModels/derivedFvPatchFields )
# ADD_SUBDIRECTORY ( ./src/TurbulenceModels/incompressible )
# ADD_SUBDIRECTORY ( ./src/turbulenceModels/incompressible/LES )
# ADD_SUBDIRECTORY ( ./src/turbulenceModels/incompressible/RAS )
# ADD_SUBDIRECTORY ( ./src/turbulenceModels/incompressible/turbulenceModel )
# ADD_SUBDIRECTORY ( ./src/turbulenceModels/LES/LESdeltas )
# ADD_SUBDIRECTORY ( ./src/turbulenceModels/LES/LESfilters )
# ADD_SUBDIRECTORY ( ./src/TurbulenceModels/turbulenceModels )
