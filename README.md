# OpenCV_project
OprnCV projects


Chapter 1 Understanding Computer Vision and Video
1.1 Computer Vision Overview
1.2 Structure and expression of video
1.2.1 How to acquire and express images
1.2.2 Grayscale and color images

Chapter 2 OpenCV Installation and Basic Usage
2.1 OpenCV overview and installation
2.1.1 OpenCV Overview
2.1.2 Installing OpenCV
2.2 Using OpenCV: HelloCV
2.2.1 Creating an OpenCV project
2.2.2 Displaying the image on the screen
2.2.3 Description of main functions of OpenCV used in HelloCV

Chapter 3 Main Classes of OpenCV
3.1 Basic data type classes
3.1.1 Point_ class
3.1.2 Size_ class
3.1.3 Rect_ class
3.1.4 RotatedRect class
3.1.5 Range class
3.1.6 String Class
3.2 Mat Class
3.2.1 Mat class overview
3.2.2 Matrix Creation and Initialization
3.2.3 Copying a matrix
3.2.4 Partial matrix extraction
3.2.5 Referencing element values ​​in a matrix
3.2.6 Referencing Matrix Information
3.2.7 Matrix Operations
3.2.8 size and type conversion functions
3.3 Vec and Scalar Class
3.3.1 Vec Class
3.3.2 Scalar Class
3.4 InputArray and OutputArray classes
3.4.1 InputArray class
3.4.2 OutputArray class

Chapter 4 Key Features of OpenCV
4.1 Handling camera and video files
4.1.1 VideoCapture class
4.1.2 Processing Camera Input
4.1.3 Processing video files
4.1.4 Saving video files
4.2 Various drawing functions
4.2.1 Drawing a straight line
4.2.2 Drawing shapes
4.2.3 Printing a string
4.3 Event handling
4.3.1 Keyboard Event Handling
4.3.2 Mouse Event Handling
4.3.3 Using the trackbar
4.4 OpenCV data file input/output
4.4.1 FileStorage class
4.4.2 Saving data files
4.4.3 Loading data files
4.5 Useful OpenCV Features
4.5.1 Mask operation
4.5.2 Operation time measurement
4.5.3 Useful OpenCV Functions

Chapter 5 Adjusting Image Brightness and Contrast Ratio
5.1 Adjusting the brightness of the image
5.1.1 Dealing with grayscale images
5.1.2 Adjusting the brightness of the image
5.1.3 Realizing Image Brightness Control
5.1.4 Adjusting the brightness of the image using the track bar
5.2 Adjusting the contrast ratio of images
5.2.1 How to adjust the basic contrast ratio
5.2.2 Effective contrast ratio control method
5.3 Histogram analysis
5.3.1 Getting the histogram
5.3.2 Histogram stretching
5.3.3 Histogram smoothing

Chapter 6 Arithmetic and Logical Operations of Images
6.1 Arithmetic Operations of Images
6.2 Logical operation of images

Chapter 7 Filtering
7.1 Filtering of images
7.1.1 Filtering operation method
7.1.2 Embossing filtering
7.2 Blur: Smoothing video
7.2.1 Average value filter
7.2.2 Gaussian Filter
7.3 Sharpening: Sharpening videos
7.3.1 Unsharp Mask Filter
7.4 Noise cancellation filtering
7.4.1 Image and noise model
7.4.2 Bidirectional filter
7.4.3 Median filter

Chapter 8 Geometric Transformation of Images
8.1 Affine Conversion
8.1.1 Affine Conversion
8.1.2 Shift Conversion
8.1.3 Shear Transform
8.1.4 Size Conversion
8.1.5 Rotation Conversion
8.1.6 Symmetric transformation
8.2 Perspective Conversion

Chapter 9 Edge Detection and Applications
9.1 Edge detection
9.1.1 Differentiation and gradient
9.1.2 Mask-based edge detection
9.1.3 Canny edge detector
9.2 Line detection and circle detection
9.2.1 Hough transform straight line detection
9.2.2 Huff transform circle detection

Chapter 10 Color Image Processing
10.1 Handling color images
10.1.1 Refer to pixel value of color image
10.1.2 Color Space Conversion
10.1.3 Splitting color channels
10.2 Color image processing technique
10.2.1 Color histogram smoothing
10.2.2 Area division by color range designation
10.2.3 Histogram back projection

Chapter 11 Jinhwa Lee and Morphology
11.1 Binarization of video
11.1.1 Binaryization
11.1.2 Adaptive Binarization
11.2 Morphological Operations
11.2.1 Erosion and expansion of binary images
11.2.2 Opening and Closing Binary Images

Chapter 12 Labeling and Outline Detection
12.1 Labeling
12.1.1 Understanding Labeling
12.1.2 Labeling Applications
12.2 Outline detection
12.2.1 Outline detection
12.2.2 Outline processing functions

Chapter 13 Object Detection
13.1 Template Matching
13.2 Cascade classifier and face detection
13.3 HOG algorithm and pedestrian detection
13.4 QR code detection

Chapter 14 Local Feature Point Detection and Matching
14.1 Corner detection
14.1.1 Harris Corner Detection Method
14.1.2 FAST corner detection method
14.2 Size-invariant feature point detection and technology
14.2.1 Size-invariant feature point algorithm
14.2.2 OpenCV feature point detection and technology
14.3 Feature point matching
14.3.1 OpenCV feature point matching
14.3.2 homography and image matching
14.4 Joining videos

Chapter 15 Machine Learning
15.1 Machine Learning and OpenCV
15.1.1 Machine Learning Overview
15.1.2 OpenCV Machine Learning Class
15.2 k nearest neighbors
15.2.1 k nearest neighbor algorithm
15.2.2 Using the KNearest class
15.2.3 Handwritten Number Recognition Using kNN
15.3 Support Vector Machine
15.3.1 Support vector machine algorithm
15.3.2 Using SVM Classes
15.3.3 HOG & SVM Handwritten Number Recognition

Chapter 16 Deep Learning and OpenCV
16.1 Deep Learning and OpenCV DNN Module
16.1.1 Neural Networks and Deep Learning
16.1.2 OpenCV DNN module
16.2 Deep Learning and OpenCV Implementation
16.2.1 Learning Handwritten Number Recognition with TensorFlow
16.2.2 Loading and running a model trained in OpenCV
16.3 Using OpenCV and Deep Learning
16.3.1 Google Net Video Recognition
16.3.2 SSD face detection

Appendix A Building and Installing OpenCV Source Code
A.1 Download OpenCV source code
A.2 Creating a solution file using CMake
A.3 Building and installing OpenCV in Visual Studio

Appendix B Installing and Using OpenCV on Linux
B.1 Installing OpenCV on Linux
B.2 Developing OpenCV programs on Linux


1.1 컴퓨터 비전 개요
1.2 영상의 구조와 표현 방법
1.2.1 영상의 획득과 표현 방법
1.2.2 그레이스케일 영상과 컬러 영상
2장 OpenCV 설치와 기초 사용법
2.1 OpenCV 개요와 설치
2.1.1 OpenCV 개요
2.1.2 OpenCV 설치하기
2.2 OpenCV 사용하기: HelloCV
2.2.1 OpenCV 프로젝트 만들기
2.2.2 영상을 화면에 출력하기
2.2.3 HelloCV에서 사용된 OpenCV 주요 함수 설명
3장 OpenCV 주요 클래스
3.1 기본 자료형 클래스
3.1.1 Point_ 클래스
3.1.2 Size_ 클래스
3.1.3 Rect_ 클래스
3.1.4 RotatedRect 클래스
3.1.5 Range 클래스
3.1.6 String 클래스
3.2 Mat 클래스
3.2.1 Mat 클래스 개요
3.2.2 행렬의 생성과 초기화
3.2.3 행렬의 복사
3.2.4 부분 행렬 추출
3.2.5 행렬의 원소 값 참조
3.2.6 행렬 정보 참조하기
3.2.7 행렬 연산
3.2.8 크기 및 타입 변환 함수
3.3 Vec과 Scalar 클래스
3.3.1 Vec 클래스
3.3.2 Scalar 클래스
3.4 InputArray와 OutputArray 클래스
3.4.1 InputArray 클래스
3.4.2 OutputArray 클래스
4장 OpenCV 주요 기능
4.1 카메라와 동영상 파일 다루기
4.1.1 VideoCapture 클래스
4.1.2 카메라 입력 처리하기
4.1.3 동영상 파일 처리하기
4.1.4 동영상 파일 저장하기
4.2 다양한 그리기 함수
4.2.1 직선 그리기
4.2.2 도형 그리기
4.2.3 문자열 출력하기
4.3 이벤트 처리
4.3.1 키보드 이벤트 처리
4.3.2 마우스 이벤트 처리
4.3.3 트랙바 사용하기
4.4 OpenCV 데이터 파일 입출력
4.4.1 FileStorage 클래스
4.4.2 데이터 파일 저장하기
4.4.3 데이터 파일 불러오기
4.5 유용한 OpenCV 기능
4.5.1 마스크 연산
4.5.2 연산 시간 측정
4.5.3 유용한 OpenCV 함수 사용법
5장 영상의 밝기와 명암비 조절
5.1 영상의 밝기 조절
5.1.1 그레이스케일 영상 다루기
5.1.2 영상의 밝기 조절
5.1.3 영상의 밝기 조절 직접 구현하기
5.1.4 트랙바를 이용한 영상의 밝기 조절
5.2 영상의 명암비 조절
5.2.1 기본적인 명암비 조절 방법
5.2.2 효과적인 명암비 조절 방법
5.3 히스토그램 분석
5.3.1 히스토그램 구하기
5.3.2 히스토그램 스트레칭
5.3.3 히스토그램 평활화
6장 영상의 산술 및 논리 연산
6.1 영상의 산술 연산
6.2 영상의 논리 연산
7장 필터링
7.1 영상의 필터링
7.1.1 필터링 연산 방법
7.1.2 엠보싱 필터링
7.2 블러링: 영상 부드럽게 하기
7.2.1 평균값 필터
7.2.2 가우시안 필터
7.3 샤프닝: 영상 날카롭게 하기
7.3.1 언샤프 마스크 필터
7.4 잡음 제거 필터링
7.4.1 영상과 잡음 모델
7.4.2 양방향 필터
7.4.3 미디언 필터
8장 영상의 기하학적 변환
8.1 어파인 변환
8.1.1 어파인 변환
8.1.2 이동 변환
8.1.3 전단 변환
8.1.4 크기 변환
8.1.5 회전 변환
8.1.6 대칭 변환
8.2 투시 변환
9장 에지 검출과 응용
9.1 에지 검출
9.1.1 미분과 그래디언트
9.1.2 마스크 기반 에지 검출
9.1.3 캐니 에지 검출기
9.2 직선 검출과 원 검출
9.2.1 허프 변환 직선 검출
9.2.2 허프 변환 원 검출
10장 컬러 영상 처리
10.1 컬러 영상 다루기
10.1.1 컬러 영상의 픽셀 값 참조
10.1.2 색 공간 변환
10.1.3 색상 채널 나누기
10.2 컬러 영상 처리 기법
10.2.1 컬러 히스토그램 평활화
10.2.2 색상 범위 지정에 의한 영역 분할
10.2.3 히스토그램 역투영
11장 이진화와 모폴로지
11.1 영상의 이진화
11.1.1 이진화
11.1.2 적응형 이진화
11.2 모폴로지 연산
11.2.1 이진 영상의 침식과 팽창
11.2.2 이진 영상의 열기와 닫기
12장 레이블링과 외곽선 검출
12.1 레이블링
12.1.1 레이블링의 이해
12.1.2 레이블링 응용
12.2 외곽선 검출
12.2.1 외곽선 검출
12.2.2 외곽선 처리 함수
13장 객체 검출
13.1 템플릿 매칭
13.2 캐스케이드 분류기와 얼굴 검출
13.3 HOG 알고리즘과 보행자 검출
13.4 QR 코드 검출
14장 지역 특징점 검출과 매칭
14.1 코너 검출
14.1.1 해리스 코너 검출 방법
14.1.2 FAST 코너 검출 방법
14.2 크기 불변 특징점 검출과 기술
14.2.1 크기 불변 특징점 알고리즘
14.2.2 OpenCV 특징점 검출과 기술
14.3 특징점 매칭
14.3.1 OpenCV 특징점 매칭
14.3.2 호모그래피와 영상 매칭
14.4 영상 이어 붙이기
15장 머신 러닝
15.1 머신 러닝과 OpenCV
15.1.1 머신 러닝 개요
15.1.2 OpenCV 머신 러닝 클래스
15.2 k 최근접 이웃
15.2.1 k 최근접 이웃 알고리즘
15.2.2 KNearest 클래스 사용하기
15.2.3 kNN을 이용한 필기체 숫자 인식
15.3 서포트 벡터 머신
15.3.1 서포트 벡터 머신 알고리즘
15.3.2 SVM 클래스 사용하기
15.3.3 HOG & SVM 필기체 숫자 인식
16장 딥러닝과 OpenCV
16.1 딥러닝과 OpenCV DNN 모듈
16.1.1 신경망과 딥러닝
16.1.2 OpenCV DNN 모듈
16.2 딥러닝 학습과 OpenCV 실행
16.2.1 텐서플로로 필기체 숫자 인식 학습하기
16.2.2 OpenCV에서 학습된 모델 불러와서 실행하기
16.3 OpenCV와 딥러닝 활용
16.3.1 구글넷 영상 인식
16.3.2 SSD 얼굴 검출
부록 A OpenCV 소스 코드 빌드하여 설치하기
A.1 OpenCV 소스 코드 내려받기
A.2 CMake를 이용하여 솔루션 파일 만들기
A.3 Visual Studio에서 OpenCV 빌드하고 설치하기
부록 B 리눅스에서 OpenCV 설치하고 사용하기
B.1 리눅스에서 OpenCV 설치하기
B.2 리눅스에서 OpenCV 프로그램 개발하기
