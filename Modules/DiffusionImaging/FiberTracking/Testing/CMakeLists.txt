MITK_CREATE_MODULE_TESTS()

if("${CMAKE_SIZEOF_VOID_P}" EQUAL "8")
mitkAddCustomModuleTest(mitkFiberBundleReaderWriterTest mitkFiberBundleReaderWriterTest)

# Temporarily disabled. Since method relies on random numbers, the behaviour is not consistent across different systems. Solution?
#mitkAddCustomModuleTest(mitkGibbsTrackingTest mitkGibbsTrackingTest ${MITK_DATA_DIR}/DiffusionImaging/qBallImage.qbi ${MITK_DATA_DIR}/DiffusionImaging/diffusionImageMask.nrrd ${MITK_DATA_DIR}/DiffusionImaging/gibbsTrackingParameters.gtp ${MITK_DATA_DIR}/DiffusionImaging/gibbsTractogram.fib)


# mitkLocalFiberPlausibilityTest needs to use new direction image
# mitkAddCustomModuleTest(mitkLocalFiberPlausibilityTest mitkLocalFiberPlausibilityTest ${MITK_DATA_DIR}/DiffusionImaging/fiberBundleX.fib ${MITK_DATA_DIR}/DiffusionImaging/LDFP_GT_DIRECTION_0.nrrd ${MITK_DATA_DIR}/DiffusionImaging/LDFP_GT_DIRECTION_1.nrrd ${MITK_DATA_DIR}/DiffusionImaging/LDFP_ERROR_IMAGE.nrrd ${MITK_DATA_DIR}/DiffusionImaging/LDFP_NUM_DIRECTIONS.nrrd ${MITK_DATA_DIR}/DiffusionImaging/LDFP_VECTOR_FIELD.fib ${MITK_DATA_DIR}/DiffusionImaging/LDFP_ERROR_IMAGE_IGNORE.nrrd)
mitkAddCustomModuleTest(mitkFiberTransformationTest mitkFiberTransformationTest ${MITK_DATA_DIR}/DiffusionImaging/fiberBundleX.fib ${MITK_DATA_DIR}/DiffusionImaging/fiberBundleX_transformed.fib)
mitkAddCustomModuleTest(mitkFiberExtractionTest mitkFiberExtractionTest ${MITK_DATA_DIR}/DiffusionImaging/fiberBundleX.fib ${MITK_DATA_DIR}/DiffusionImaging/fiberBundleX_extracted.fib ${MITK_DATA_DIR}/DiffusionImaging/ROI1.pf ${MITK_DATA_DIR}/DiffusionImaging/ROI2.pf ${MITK_DATA_DIR}/DiffusionImaging/ROI3.pf ${MITK_DATA_DIR}/DiffusionImaging/ROIIMAGE.nrrd ${MITK_DATA_DIR}/DiffusionImaging/fiberBundleX_inside.fib ${MITK_DATA_DIR}/DiffusionImaging/fiberBundleX_outside.fib ${MITK_DATA_DIR}/DiffusionImaging/fiberBundleX_passing-mask.fib ${MITK_DATA_DIR}/DiffusionImaging/fiberBundleX_ending-in-mask.fib ${MITK_DATA_DIR}/DiffusionImaging/fiberBundleX_subtracted.fib ${MITK_DATA_DIR}/DiffusionImaging/fiberBundleX_added.fib)
mitkAddCustomModuleTest(mitkFiberGenerationTest mitkFiberGenerationTest ${MITK_DATA_DIR}/DiffusionImaging/Fiberfox/Fiducial_0.pf ${MITK_DATA_DIR}/DiffusionImaging/Fiberfox/Fiducial_1.pf ${MITK_DATA_DIR}/DiffusionImaging/Fiberfox/Fiducial_2.pf ${MITK_DATA_DIR}/DiffusionImaging/Fiberfox/uniform.fib ${MITK_DATA_DIR}/DiffusionImaging/Fiberfox/gaussian.fib)

mitkAddCustomModuleTest(mitkFiberfoxSignalGenerationTest mitkFiberfoxSignalGenerationTest)
mitkAddCustomModuleTest(mitkMachineLearningTrackingTest mitkMachineLearningTrackingTest)
mitkAddCustomModuleTest(mitkStreamlineTractographyTest mitkStreamlineTractographyTest)
mitkAddCustomModuleTest(mitkFiberProcessingTest mitkFiberProcessingTest)

ENDIF()
