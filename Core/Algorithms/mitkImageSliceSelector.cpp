#include "mitkImageSliceSelector.h"

//##ModelId=3E1A0A2E027F
void mitk::ImageSliceSelector::GenerateOutputInformation()
{
	mitk::Image::ConstPointer input  = this->GetInput();
	mitk::Image::Pointer output = this->GetOutput();

	itkDebugMacro(<<"GenerateOutputInformation()");

	output->Initialize(input->GetPixelType(), 2, input->GetDimensions());

  // initialize geometry
  output->SetGeometry(input->GetSlicedGeometry(m_TimeNr)->GetGeometry2D(m_SliceNr)->Clone());
  output->SetPropertyList(input->GetPropertyList()->Clone());
}

//##ModelId=3E1A0A320090
void mitk::ImageSliceSelector::GenerateData()
{
	SetDataItem(GetSliceData(m_SliceNr, m_TimeNr, m_ChannelNr), 0);
}

//##ModelId=3E1B196A0188
mitk::ImageSliceSelector::ImageSliceSelector() : m_SliceNr(0), m_TimeNr(0), m_ChannelNr(0)
{
}


//##ModelId=3E1B196A01C4
mitk::ImageSliceSelector::~ImageSliceSelector()
{
}

